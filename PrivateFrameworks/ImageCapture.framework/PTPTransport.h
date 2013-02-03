/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPTransport : NSObject {
    NSInteger _connectionStatus;
    id _delegate;
    BOOL _responseReceived;
    NSInteger _role;
    BOOL _timedOut;
    unsigned short _transportType;
}

- (void)abortPendingIO;
- (void)cancelTransaction:(id)arg1;
- (BOOL)connected;
- (NSInteger)connectionStatus;
- (void)deviceReset;
- (unsigned short)deviceStatus;
- (id)init;
- (NSInteger)role;
- (BOOL)sendData:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (BOOL)sendRequest:(id)arg1 needsData:(BOOL)arg2;
- (BOOL)sendResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResponseReceived:(BOOL)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (BOOL)startInitiator;
- (BOOL)startResponder;
- (void)stop;
- (BOOL)timedOut;
- (unsigned short)transportType;

@end
