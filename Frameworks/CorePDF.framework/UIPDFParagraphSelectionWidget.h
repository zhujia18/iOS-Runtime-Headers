/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CALayer, UIPDFSelectionLayer;

@interface UIPDFParagraphSelectionWidget : NSObject <UIPDFViewSelectionWidget> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    UIPDFSelectionLayer *_parent;
    } _rect;
    BOOL active;
    CALayer *bottomControl;
    struct CGImage { } *controlPointImage;
    } fixedPoint;
    CALayer *leftControl;
    CALayer *rectangle;
    CALayer *rightControl;
    CALayer *topControl;
    CALayer *trackedControl;
}

- (void)addTo:(id)arg1;
- (BOOL)canMoveTo:(struct CGPoint { float x1; float x2; })arg1 leftToRight:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrame;
- (void)dealloc;
- (void)drawControls:(struct CGContext { }*)arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)envelopAnimation:(id)arg1 toRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)hitControl:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithParent:(id)arg1;
- (struct CGPoint { float x1; float x2; })normalize:(struct CGPoint { float x1; float x2; })arg1;
- (void)placeControls;
- (void)pointsFor:(struct CGPoint { float x1; float x2; })arg1 are:(struct CGPoint { float x1; float x2; }*)arg2 and:(struct CGPoint { float x1; float x2; }*)arg3;
- (void)positionControlsExcept:(id)arg1;
- (void)remove;
- (void)setActive:(BOOL)arg1;
- (void)show;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)track:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })trackingOffset;

@end
