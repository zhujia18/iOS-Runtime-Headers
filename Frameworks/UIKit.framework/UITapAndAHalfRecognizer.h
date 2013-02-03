/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch, UIDelayedAction, NSMutableSet;

@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableSet *_activeTouches;
    float _allowableMovement;
    NSInteger _currentNumberOfTaps;
    double _minimumFinalPressDuration;
    NSInteger _numberOfFullTaps;
    } _startPoint;
    UIDelayedAction *_tapTimer;
    UITouch *_touch;
}

@property(retain) UITouch *touch;
@property float allowableMovement;
@property double minimumFinalPressDuration;
@property NSInteger numberOfFullTaps;

- (void)_resetGestureRecognizer;
- (void)_verifyMovementInAllowableRange;
- (float)allowableMovement;
- (void)clearTapTimer;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)minimumFinalPressDuration;
- (NSInteger)numberOfFullTaps;
- (void)recognized:(id)arg1;
- (void)setAllowableMovement:(float)arg1;
- (void)setMinimumFinalPressDuration:(double)arg1;
- (void)setNumberOfFullTaps:(NSInteger)arg1;
- (void)setTouch:(id)arg1;
- (void)startRecognitionTimer:(double)arg1;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (id)touch;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
