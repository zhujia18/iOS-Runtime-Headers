/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, SSMutableAuthenticationContext;

@interface SUScriptAuthenticationOperation : ISOperation {
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
}

@property(retain) NSNumber *authenticatedDSID;

- (id)authenticatedAccountDSID;
- (id)authenticatedDSID;
- (void)dealloc;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1;
- (void)run;
- (void)sendCompletionCallback:(id)arg1;
- (void)setAuthenticatedDSID:(id)arg1;
- (void)setScriptOptions:(id)arg1;

@end
