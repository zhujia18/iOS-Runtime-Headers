/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITSync.framework/ITSync
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface ITTaskAssertion : NSObject {
    NSString *_debugInfo;
    id _expireHandler;
}

- (void)dealloc;
- (id)description;
- (id)initWithExpirationHandler:(id)arg1 debugInfo:(id)arg2;
- (void)invalidate;
- (void)performExpirationHandler;

@end
