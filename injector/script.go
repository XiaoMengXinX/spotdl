package injector

const interceptScript = `
(function() {
    'use strict';
    
    window.interceptStatus = {
        ready: false,
        success: false,
        data: [],
        message: 'Initializing...',
        callCount: 0
    };
    
    try {
        let hasIntercepted = false;

        function bytesToString(bytesObj) {
            if (!bytesObj || typeof bytesObj !== 'object') return '';
            const values = Object.values(bytesObj);
            return values.map(code => String.fromCharCode(code)).join('');
        }

        const originalMap = Array.prototype.map;
        Array.prototype.map = function(callback, thisArg) {
            window.interceptStatus.callCount++;
            
            const result = originalMap.call(this, callback, thisArg);

            if (hasIntercepted) {
                return result;
            }

            if (result && Array.isArray(result) && result.length > 0) {
                const firstItem = result[0];
                
                if (firstItem && typeof firstItem === 'object' &&
                    firstItem.hasOwnProperty('secret') &&
                    firstItem.hasOwnProperty('version')) {

                    hasIntercepted = true;

                    try {
                        const simplifiedResult = result.map(item => ({
                            secret: item.secret && item.secret.bytes ? bytesToString(item.secret.bytes) : (item.secret || ''),
                            version: item.version
                        }));

                        window.interceptStatus = {
                            ready: true,
                            success: true,
                            data: simplifiedResult,
                            message: 'Success',
                            callCount: window.interceptStatus.callCount
                        };
                        
                        Array.prototype.map = originalMap;
                        
                    } catch (error) {
                        window.interceptStatus.message = 'Failed to process data: ' + error.message;
                    }
                }
            }

            return result;
        };

        window.interceptStatus.ready = true;
        window.interceptStatus.message = 'Injector Ready';
        
    } catch (error) {
        window.interceptStatus.message = 'Failed to inject: ' + error.message;
    }
})();
`
