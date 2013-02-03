/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */

@class MKSearchResult, UIView, UIWindow, MSStreetViewController;

@interface MSStreetViewNavigationController : UINavigationController {
    struct CGPoint { 
        float x; 
        float y; 
    UIView *_aerialView;
    MSStreetViewController *_contentController;
    NSInteger _initialMapOrientation;
    BOOL _isStatusBarHidden;
    NSInteger _mapOrientation;
    NSInteger _renderOrientation;
    MKSearchResult *_searchResult;
    } _searchResultWindowPoint;
    BOOL _shouldAnimate;
    id _streetViewDelegate;
    BOOL _useFullScreenLayout;
    UIWindow *_window;
}

@property UIView *aerialView;
@property(retain) MSStreetViewController *contentController;
@property(retain) MKSearchResult *searchResult;
@property(readonly) MKStreetView *streetView;
@property UIWindow *window;
@property NSInteger initialMapOrientation;
@property BOOL isStatusBarHidden;
@property NSInteger mapOrientation;
@property NSInteger renderOrientation;
@property CGPoint searchResultWindowPoint;
@property BOOL shouldAnimate;
@property id streetViewDelegate;
@property BOOL useFullScreenLayout;

- (void)_handleStatusBarHeightChange;
- (void)_hideStatusBarWithDuration:(float)arg1;
- (void)_setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 fenceID:(NSInteger)arg3;
- (void)_showStatusBarWithDuration:(float)arg1;
- (void)_updateInitialYaw:(id)arg1;
- (void)_updateNavigationBarPosition;
- (void)_updateStreetView;
- (id)aerialView;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)close;
- (id)contentController;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (NSInteger)initialMapOrientation;
- (BOOL)isStatusBarHidden;
- (NSInteger)mapOrientation;
- (NSInteger)renderOrientation;
- (id)searchResult;
- (struct CGPoint { float x1; float x2; })searchResultWindowPoint;
- (void)setAerialView:(id)arg1;
- (void)setContentController:(id)arg1;
- (void)setInitialMapOrientation:(NSInteger)arg1;
- (void)setIsStatusBarHidden:(BOOL)arg1;
- (void)setMapOrientation:(NSInteger)arg1;
- (void)setRenderOrientation:(NSInteger)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setSearchResultWindowPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShouldAnimate:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStreetViewDelegate:(id)arg1;
- (void)setUseFullScreenLayout:(BOOL)arg1;
- (void)setWindow:(id)arg1;
- (BOOL)shouldAnimate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (id)streetView;
- (id)streetViewDelegate;
- (BOOL)useFullScreenLayout;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (id)window;

@end
