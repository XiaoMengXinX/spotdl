package config

import (
	"encoding/json"
	"errors"
	"fmt"
	"os"
	"reflect"

	log "github.com/XiaoMengXinX/spotdl/logger"
)

type Data struct {
	DefaultQuality    string   `json:"quality"`
	SpDc              string   `json:"sp_dc"`
	AccessToken       string   `json:"accessToken"`
	ClientID          string   `json:"clientId"`
	ClientToken       string   `json:"clientToken"`
	AccessTokenExpire int64    `json:"accessTokenExpire"`
	AcceptLanguage    []string `json:"accept-language"`
	TOTP              TOTP     `json:"totp"`
}

type TOTP struct {
	Secret  string `json:"secret"`
	Version int    `json:"version"`
}

type Manager struct {
	configPath string
	config     Data
	defaults   Data
}

func NewConfigManager() *Manager {
	log.Debugln("New Config Manager Created")
	defaults := Data{
		SpDc:              "",
		AccessToken:       "",
		ClientID:          "",
		ClientToken:       "",
		AccessTokenExpire: -1,
		AcceptLanguage:    []string{},
		DefaultQuality:    "MP4_128",
		TOTP:              TOTP{},
	}
	return &Manager{
		configPath: "config.json",
		config:     defaults,
		defaults:   defaults,
	}
}

func (cm *Manager) Initialize() *Manager {
	log.Debugf("Initializing Config Manager, config path: %s", cm.configPath)
	if _, err := os.Stat(cm.configPath); errors.Is(err, os.ErrNotExist) {
		log.Debugf("Config file not found, trying to create one")
		cm.writeConfig()
	}
	return cm
}

func (cm *Manager) SetConfigPath(path string) *Manager {
	log.Debugf("Set config path to: %s", path)
	cm.configPath = path
	return cm
}

func (cm *Manager) ReadConfig() error {
	log.Debugf("Reading config file: %s", cm.configPath)
	data, err := os.ReadFile(cm.configPath)
	if err != nil {
		return fmt.Errorf("failed to read config file: %w", err)
	}
	cm.config = cm.defaults

	var fileConfig Data
	if err := json.Unmarshal(data, &fileConfig); err != nil {
		return fmt.Errorf("failed to parse json config file: %w", err)
	}

	cm.mergeConfigs(&cm.config, fileConfig)
	log.Debugln("Config merged with defaults, saving...")
	cm.writeConfig()

	return nil
}

func (cm *Manager) Get() Data {
	return cm.config
}

func (cm *Manager) ReadAndGet() (Data, error) {
	if err := cm.ReadConfig(); err != nil {
		return Data{}, err
	}
	return cm.Get(), nil
}

func (cm *Manager) GetDefault() Data {
	return cm.defaults
}

func (cm *Manager) Set(newConfig Data) {
	cm.config = newConfig
	cm.writeConfig()
}

func (cm *Manager) writeConfig() {
	log.Debugf("Writing config file to: %s", cm.configPath)
	data, _ := json.MarshalIndent(cm.config, "", "  ")

	if err := os.WriteFile(cm.configPath, data, 0644); err != nil {
		log.Errorf("Failed to write config to file: %v", err)
	}
}

func (cm *Manager) mergeConfigs(dest interface{}, src interface{}) {
	destVal := reflect.ValueOf(dest).Elem()
	srcVal := reflect.ValueOf(src)

	cm.mergeValues(destVal, srcVal)
}
func (cm *Manager) mergeValues(dest, src reflect.Value) {
	if !dest.CanSet() {
		return
	}

	switch dest.Kind() {
	case reflect.Struct:
		for i := 0; i < dest.NumField(); i++ {
			destField := dest.Field(i)
			srcField := src.Field(i)
			cm.mergeValues(destField, srcField)
		}
	case reflect.String:
		if src.String() != "" {
			dest.SetString(src.String())
		}
	case reflect.Int, reflect.Int8, reflect.Int16, reflect.Int32, reflect.Int64:
		if src.Int() != 0 {
			dest.SetInt(src.Int())
		}
	case reflect.Uint, reflect.Uint8, reflect.Uint16, reflect.Uint32, reflect.Uint64:
		if src.Uint() != 0 {
			dest.SetUint(src.Uint())
		}
	case reflect.Float32, reflect.Float64:
		if src.Float() != 0 {
			dest.SetFloat(src.Float())
		}
	case reflect.Bool:
		dest.SetBool(src.Bool())

	case reflect.Slice:
		if !src.IsNil() && src.Len() > 0 {
			dest.Set(src)
		}
	case reflect.Map:
		if !src.IsNil() && src.Len() > 0 {
			dest.Set(src)
		}
	case reflect.Ptr:
		if !src.IsNil() {
			if dest.IsNil() {
				dest.Set(reflect.New(dest.Type().Elem()))
			}
			cm.mergeValues(dest.Elem(), src.Elem())
		}
	}
}
