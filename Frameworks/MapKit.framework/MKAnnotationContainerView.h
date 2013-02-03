/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKAnnotationContainerViewInternal;

@interface MKAnnotationContainerView : UIView {
    MKAnnotationContainerViewInternal *_internal;
}

@property(readonly) NSArray *annotations;
@property(copy) NSArray *selectedAnnotations;
@property Class calloutViewClass;

+ (void)_initializeSafeCategory;

- (id)_accessibilityChildren;
- (void)_accessibilityZoomAtPoint:(struct CGPoint { float x1; float x2; })arg1 zoomIn:(BOOL)arg2;
- (void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(struct CGPoint { float x1; float x2; })arg3 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 animated:(BOOL)arg5;
- (id)_addViewForAnnotation:(id)arg1;
- (void)_addViewsForAnnotations:(id)arg1 animated:(BOOL)arg2;
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2;
- (id)_bubble;
- (struct CGPoint { float x1; float x2; })_bubbleAnchorPoint;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (struct CGPoint { float x1; float x2; })_centerLongLat;
- (void)_deselectAnnotationView;
- (void)_deselectAnnotationViewWithAnimation:(BOOL)arg1 tellDelegate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)_deselectAnnotationViewWithAnimation:(BOOL)arg1;
- (void)_dropDraggingAnnotationView;
- (void)_dropPinsIfNeeded:(id)arg1 animated:(BOOL)arg2;
- (void)_findNextView:(id*)arg1 orientation:(NSInteger*)arg2 context:(id)arg3;
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)_loadMetaDataForAnnotationView:(id)arg1 throttled:(BOOL)arg2;
- (void)_loadMetaDataForSearchResult:(id)arg1;
- (void)_loadMetaDataForSearchResults:(id)arg1;
- (struct { double x1; double x2; })_longLatSpan;
- (id)_mapTileView;
- (void)_notifyAddedAnnotationViews:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_pinPositionAvailableAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_prepareAnnotationView:(id)arg1 forAnnotationUse:(id)arg2 configureCallout:(BOOL)arg3;
- (void)_registerObserverForAnnotation:(id)arg1;
- (void)_removeBubbleWithAnimation:(BOOL)arg1 tellDelegate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)_removeBubbleWithAnimation:(BOOL)arg1;
- (void)_resetAnnotationViewPerspective;
- (void)_scrollToBubble;
- (void)_searchResultNameDidChange:(id)arg1;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 userInitiated:(BOOL)arg5 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg6;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 userInitiated:(BOOL)arg5;
- (void)_setShowingTransitCallouts:(BOOL)arg1;
- (void)_setTransitCalloutAlphas:(float)arg1;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3 userInitiated:(BOOL)arg4 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3 userInitiated:(BOOL)arg4;
- (void)_unregisterObserverForAnnotation:(id)arg1;
- (void)_updateAnnotationView:(id)arg1;
- (void)_updateAnnotationViewPerspective;
- (void)_updateGeocodeForAnnotationView:(id)arg1 bubble:(id)arg2 animated:(BOOL)arg3;
- (void)_updateOrientationOfViews:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViews:(id)arg1;
- (void)_updateOrientationOfViewsCorrect:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViewsFast:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_userLocationInView:(id)arg1 frame:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 center:(struct CADoublePoint { double x1; double x2; }*)arg3 accuracy:(float*)arg4 location:(id)arg5;
- (void)_userLocationInView:(id)arg1 frame:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 center:(struct CADoublePoint { double x1; double x2; }*)arg3 accuracy:(float*)arg4;
- (BOOL)_userLocationPosition:(struct CADoublePoint { double x1; double x2; }*)arg1 bounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 accuracy:(float*)arg3 location:(id)arg4;
- (id)_viewForInternalAnnotation:(id)arg1;
- (id)_viewForUserLocationAnnotation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleCenteringRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleCenteringRectInView:(id)arg1;
- (void)_willRemoveInternalAnnotationView:(id)arg1;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })accessoryPadding;
- (id)addAnnotation:(id)arg1 createView:(BOOL)arg2;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addSearchResults:(id)arg1 selectSearchResult:(id)arg2;
- (void)addSearchResults:(id)arg1;
- (void)addSubview:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationAndCalloutRectForSearchResult:(id)arg1;
- (BOOL)annotationDidHide:(id)arg1;
- (void)annotationViewDidChangeZIndex:(id)arg1;
- (id)annotationViewForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)annotationViews;
- (void)annotationViewsDidChangeZIndex:(id)arg1;
- (BOOL)annotationWillShow:(id)arg1;
- (id)annotations;
- (struct { double x1; double x2; })availablePinLongLatFromCenterCoordinate:(struct { double x1; double x2; })arg1 withMapTileView:(id)arg2;
- (id)bubblePin;
- (id)calloutAnnotationView;
- (void)calloutView:(id)arg1 didMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)calloutView:(id)arg1 willMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (id)calloutView;
- (Class)calloutViewClass;
- (void)calloutViewDidFadeOut:(id)arg1;
- (void)cancelBubbleMouseTracking;
- (void)clearSearchResultPins;
- (void)clearSearchResultPinsExcluding:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct { double x1; double x2; })coordinateForAnnotationView:(id)arg1;
- (struct { NSInteger x1; struct { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; id x5; BOOL x6; })currentComparisonContext;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (BOOL)didAddUserLocationView;
- (void)forwardTouchesBegan:(id)arg1 withEvent:(id)arg2 toAnnotationView:(id)arg3;
- (void)forwardTouchesCancelled:(id)arg1 withEvent:(id)arg2 toAnnotationView:(id)arg3;
- (void)forwardTouchesEnded:(id)arg1 withEvent:(id)arg2 toAnnotationView:(id)arg3;
- (void)forwardTouchesMoved:(id)arg1 withEvent:(id)arg2 toAnnotationView:(id)arg3;
- (BOOL)freezeUserLocationView;
- (BOOL)hasDroppingPins;
- (BOOL)hasPendingAnimations;
- (NSUInteger)indexForAnnotationView:(id)arg1;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isAnimationsEnabled;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })mapTransform;
- (NSUInteger)mapType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)panoramaInfoReturnedForObject:(id)arg1;
- (void)panoramaInfoReturnedForObjects:(id)arg1;
- (void)pinDidDrop:(id)arg1 animated:(BOOL)arg2;
- (void)refreshSearchResult:(id)arg1;
- (void)refreshSearchResults:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeResults:(id)arg1;
- (void)replaceSearchResult:(id)arg1 withSearchResult:(id)arg2;
- (void)resetBubble;
- (void)resetUserLocation;
- (void)restoreUserLocationViewUpdateMode;
- (id)searchResultForPinAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)searchResultPins;
- (void)searchResultReverseGeocoded:(id)arg1;
- (id)searchResultToSelect;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)selectPendingSearchResultAnimated:(BOOL)arg1 scrollToFit:(BOOL)arg2;
- (id)selectedAnnotations;
- (id)selectedSearchResult;
- (void)setAnimationsEnabled:(BOOL)arg1;
- (void)setBubbleAnnotationView:(id)arg1;
- (void)setCalloutViewClass:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidAddUserLocationView:(BOOL)arg1;
- (void)setMapTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setMapType:(NSUInteger)arg1;
- (void)setSearchResultToSelect:(id)arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 scrollToFit:(BOOL)arg5;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3 scrollToFit:(BOOL)arg4;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)setSelectedSearchResult:(id)arg1;
- (void)setUserLocationView:(id)arg1;
- (void)setUserLocationViewUpdateMode:(NSInteger)arg1;
- (void)set_mapTileView:(id)arg1;
- (BOOL)showAddedAnnotationsAnimated:(BOOL)arg1;
- (void)showBubbleAfterScroll;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateAnnotationLocationsDuringAnimation:(BOOL)arg1;
- (void)updateCountdowns;
- (void)updateUserLocationView:(BOOL)arg1;
- (void)updateUserLocationView;
- (id)userLocation;
- (id)userLocationView;
- (NSInteger)userLocationViewUpdateMode;
- (id)viewForAnnotation:(id)arg1;

@end
