/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIWindow, UIView;

@interface UIStatusBarViewController : UIViewController {
    UIWindow *_leftBottomCorner;
    UIWindow *_rightBottomCorner;
    UIView *_statusBar;
    UIImageView *_statusBarBackgroundImage;
    UIWindow *_window;
}

+ (double)statusBarOrientationAnimationDurationFrom:(NSInteger)arg1 to:(NSInteger)arg2;

- (void)_changeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (void)_changeStatusBarOrientationFrom:(NSInteger)arg1 toOrientation:(NSInteger)arg2;
- (void)_prepareForZoom:(BOOL)arg1;
- (void)_setStatusBarBackgroundImageForOrientation:(NSInteger)arg1;
- (void)_statusBarModeAnimationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (struct CGSize { float x1; float x2; })_statusBarSizeForOrientation:(NSInteger)arg1;
- (void)_updateCornersWithOrientation:(NSInteger)arg1;
- (void)_updateStatusBarGeometryWithOrientation:(NSInteger)arg1 slideUp:(BOOL)arg2 expandWindowForRotationAnimations:(BOOL)arg3;
- (void)_updateStatusBarWithOrientation:(NSInteger)arg1 isStatusBarHidden:(BOOL)arg2 slideUp:(BOOL)arg3 expandWindowForRotationAnimations:(BOOL)arg4;
- (void)_zoom:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isClassicControlWindow:(id)arg1;
- (id)loadCorner:(BOOL)arg1 cornerImage:(id)arg2 cornersFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)loadView;
- (void)prepareToSetStatusBarModeWithOrientation:(NSInteger)arg1 oldMode:(NSInteger)arg2 animation:(NSInteger)arg3 duration:(float)arg4;

@end
