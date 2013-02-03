/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIView, UIImage;

@interface UIOldSliderControl : UIControl {
    union { 
        UIImage *image; 
        id view; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*UIView; 
    union { 
        UIImage *image; 
        id view; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*UIView; 
    struct { 
        unsigned int allowsOnlyTickMarks : 1; 
        unsigned int animating : 1; 
        unsigned int showValue : 1; 
        unsigned int layeredFill : 1; 
        unsigned int continuous : 1; 
        unsigned int sendActionDuringAnimation : 1; 
        unsigned int alternateColors : 1; 
        unsigned int shouldFlipValue : 1; 
        unsigned int needsNonOpaqueFills : 1; 
        unsigned int reserved : 24; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    float _animationEndValue;
    float _hitOffset;
    } _idleTrackingPoint;
    double _idleTrackingTime;
    UIView *_knob;
    } _lastTrackingPoint;
    double _lastTrackingTime;
    float _maxValue;
    UIImage *_maxValueImage;
    float _minValue;
    UIImage *_minValueImage;
    NSInteger _numberOfTickMarks;
    } _sliderFlags;
    UIImage *_sliderLeftCap;
    } _sliderLeftFill;
    UIImage *_sliderLeftFillCap;
    UIImage *_sliderRightCap;
    } _sliderRightFill;
    UIImage *_sliderRightFullCap;
    float _value;
}

- (void)_accessibilityBumpValue:(BOOL)arg1;
- (void)_controlMouseDown:(struct __GSEvent { }*)arg1;
- (void)_controlMouseDragged:(struct __GSEvent { }*)arg1;
- (void)_controlMouseUp:(struct __GSEvent { }*)arg1;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_resetFillFrames;
- (id)_scriptingInfo;
- (void)_sendDelayedActions;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)_sliderBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 getLeftCapRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightCapRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 left:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4 right:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (float)_validatedValue:(float)arg1;
- (float)_validatedValueForPoint:(struct CGPoint { float x1; float x2; })arg1 includeTickMarks:(BOOL)arg2;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (BOOL)beginTrackingAt:(struct CGPoint { float x1; float x2; })arg1 withEvent:(struct __GSEvent { }*)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)continueTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createSliderKnobView;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSliderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 dirtyRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawSliderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSliderPiece:(NSInteger)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)endTrackingAt:(struct CGPoint { float x1; float x2; })arg1 previous:(struct CGPoint { float x1; float x2; })arg2 withEvent:(struct __GSEvent { }*)arg3;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillBounds;
- (id)imageForSliderPiece:(NSInteger)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 layeredFill:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isAnimatingValueChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maxValueImageBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })minValueImageBounds;
- (void)refreshImages;
- (void)setAllowsTickMarkValuesOnly:(BOOL)arg1;
- (void)setContinuous:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMaxValue:(float)arg1;
- (void)setMaxValueImage:(id)arg1;
- (void)setMinValue:(float)arg1;
- (void)setMinValueImage:(id)arg1;
- (void)setNumberOfTickMarks:(NSInteger)arg1;
- (void)setSendActionDuringAnimation:(BOOL)arg1;
- (void)setShowValue:(BOOL)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2 animationCurve:(NSInteger)arg3;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)setValue:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sliderBounds;
- (void)sliderBoundsChanged;
- (float)value;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })valueTextBounds;

@end
