/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKMatchFlowRateRequest : GKDataRequest {
    NSUInteger _activity;
    NSUInteger _playerGroup;
}

@property NSUInteger activity;
@property NSUInteger playerGroup;

- (NSUInteger)activity;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)key;
- (NSUInteger)playerGroup;
- (id)request;
- (void)setActivity:(NSUInteger)arg1;
- (void)setPlayerGroup:(NSUInteger)arg1;

@end
