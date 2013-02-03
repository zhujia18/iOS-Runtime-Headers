/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPSwipeGestureRecognizer, MPTapGestureRecognizer, MPActivityGestureRecognizer, UIPinchGestureRecognizer, <MPSwipableViewDelegate>;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {
    MPActivityGestureRecognizer *_activityGestureRecognizer;
    NSInteger _enabledGestureTypes;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSInteger _simultaneousGestureTypes;
    <MPSwipableViewDelegate> *_swipeDelegate;
    MPSwipeGestureRecognizer *_swipeGestureRecognizer;
    MPTapGestureRecognizer *_tapGestureRecognizer;
}

@property <MPSwipableViewDelegate> *swipeDelegate;
@property NSInteger enabledGestureTypes;
@property NSInteger simultaneousGestureTypes;

- (void)_activityGestureRecognized:(id)arg1;
- (void)_pinchGestureRecognized:(id)arg1;
- (void)_swipeGestureRecognized:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_updateGestureRecognizersForEnabledTypes;
- (void)addGestureRecognizer:(id)arg1;
- (void)dealloc;
- (NSInteger)enabledGestureTypes;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)setEnabledGestureTypes:(NSInteger)arg1;
- (void)setSimultaneousGestureTypes:(NSInteger)arg1;
- (void)setSwipeDelegate:(id)arg1;
- (NSInteger)simultaneousGestureTypes;
- (id)swipeDelegate;

@end
