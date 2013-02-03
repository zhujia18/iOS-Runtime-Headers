/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRequest : NSObject {
    id _requestInternal;
}

@property <SKRequestDelegate> *delegate;

- (void)_beginBackgroundTask;
- (void)_daemonExited:(id)arg1;
- (void)_endBackgroundTask;
- (void)_mainThreadDaemonExited:(id)arg1;
- (id)_newIdentifier;
- (void)_registerForNotifications;
- (void)_requestFailedNotification:(id)arg1;
- (void)_requestFinishedNotification:(id)arg1;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_sendFinishToDelegate;
- (void)_unregisterForNotifications;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (BOOL)handleFinishResponse:(id)arg1 returningError:(id*)arg2;
- (id)init;
- (void)issueRequestForIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
