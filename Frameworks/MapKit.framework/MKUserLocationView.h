/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationViewInternal;

@interface MKUserLocationView : MKAnnotationView {
    MKUserLocationViewInternal *_imp;
}

+ (void)_initializeSafeCategory;
+ (NSUInteger)_selectedZIndex;
+ (NSUInteger)_zIndex;
+ (float)accuracyDiameter:(float)arg1 level:(NSUInteger)arg2;
+ (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveFrameWithFrame:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)initialize;
+ (Class)layerClass;

- (id)_searchResult;
- (void)_setCalloutView:(id)arg1;
- (void)_setMapType:(NSUInteger)arg1;
- (id)accessibilityLabel;
- (float)accuracy;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accuracyBounds;
- (NSUInteger)accuracyIntersectionPoints:(struct CGPoint { float x1; float x2; }*)arg1 layer:(id)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)bounce;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToWindow;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveFrame;
- (double)headingAccuracy;
- (id)headingLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDisplayingAccuracy;
- (BOOL)isHovering;
- (BOOL)isStale;
- (struct CADoublePoint { double x1; double x2; })position;
- (void)removeHover;
- (void)setAccuracy:(float)arg1 duration:(double)arg2;
- (void)setAccuracy:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPosition:(BOOL)arg1 value:(struct CADoublePoint { double x1; double x2; })arg2 accuracy:(BOOL)arg3 value:(float)arg4 duration:(double)arg5;
- (void)setPosition:(id)arg1 accuracy:(id)arg2 duration:(double)arg3;
- (void)setPosition:(struct CADoublePoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)setPosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (void)setShouldDisplayAccuracy:(BOOL)arg1;
- (void)setShouldDisplayEffects:(BOOL)arg1;
- (void)setShouldDisplayHalo:(BOOL)arg1;
- (void)setShouldDisplayHeading:(BOOL)arg1;
- (void)setStale:(BOOL)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 actionContext:(id)arg3;
- (void)setZoomDirection:(NSInteger)arg1 deltaScale:(float)arg2;
- (void)setZoomDirection:(NSInteger)arg1;
- (BOOL)shouldDisplayAccuracy:(double*)arg1 diameter:(id*)arg2;
- (BOOL)shouldDisplayAccuracy;
- (BOOL)shouldDisplayEffects;
- (BOOL)shouldDisplayHalo;
- (BOOL)shouldDisplayHeading;
- (void)stopHover;
- (void)updateHalo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)willMoveToWindow:(id)arg1;
- (NSInteger)zoomDirection;

@end
