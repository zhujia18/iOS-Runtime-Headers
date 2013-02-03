/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStateButtonWildcat : UIButton {
    NSInteger _buttonState;
}

@property NSInteger buttonState;
@property(readonly) NSInteger nextButtonState;

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (NSInteger)buttonState;
- (id)contentAnimation;
- (void)didEnterState;
- (void)didShowState;
- (id)expandAnimation;
- (NSInteger)nextButtonState;
- (void)setButtonState:(NSInteger)arg1;
- (void)setImage:(id)arg1 forButtonState:(NSInteger)arg2;
- (BOOL)shouldAnimateFromState:(NSInteger)arg1 toState:(NSInteger)arg2;
- (id)shrinkAnimation;
- (NSUInteger)state;
- (NSUInteger)stateForButtonState:(NSInteger)arg1;

@end
