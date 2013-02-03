/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, SSAuthenticateRequest;

@interface ISStoreAuthenticateOperation : ISOperation {
    NSNumber *_authenticatedDSID;
    SSAuthenticateRequest *_request;
}

@property(readonly) SSAuthenticationContext *authenticationContext;

- (id)_authenticatedDSID;
- (void)_setAuthenticatedDSID:(id)arg1;
- (void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)run;
- (id)uniqueKey;

@end
