package config

import (
	"encoding/json"
	"errors"
	"fmt"
	log "github.com/XiaoMengXinX/spotdl/logger"
	"os"
)

type Data struct {
	DefaultQuality    string   `json:"quality"`
	SpDc              string   `json:"sp_dc"`
	AccessToken       string   `json:"accessToken"`
	AccessTokenExpire int64    `json:"accessTokenExpire"`
	AcceptLanguage    []string `json:"accept-language"`
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
		AccessTokenExpire: -1,
		AcceptLanguage:    []string{},
		DefaultQuality:    "MP4_128_DUAL",
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

	if err := json.Unmarshal(data, &cm.config); err != nil {
		return fmt.Errorf("failed to parse json config file: %w", err)
	}
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

func (cm *Manager) writeConfig() {
	log.Debugf("Writing config file to: %s", cm.configPath)
	data, _ := json.MarshalIndent(cm.config, "", "  ")

	if err := os.WriteFile(cm.configPath, data, 0644); err != nil {
		log.Errorf("Failed to write config to file: %v", err)
	}
}

func (cm *Manager) Set(newConfig Data) {
	cm.config = newConfig
	cm.writeConfig()
}
