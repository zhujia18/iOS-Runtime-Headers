/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPreviewViewReserved;

@interface QLPreviewView : UIView {
    QLPreviewViewReserved *_reserved;
}

@property(retain) <QLPreviewItem> *previewItem;
@property id delegate;

+ (id)_passThroughUTIs;
+ (BOOL)_shouldPassThroughUTI:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;
+ (BOOL)canPreviewURL:(id)arg1;

- (void)_addProgressUI;
- (void)_commonInit;
- (BOOL)_hasProgressiveUI;
- (void)_hideDisplayBundleAnimationDidEnd;
- (void)_removeProgressiveUI;
- (void)_showDisplayBundleAnimationDidEnd;
- (void)_showError:(id)arg1 animated:(BOOL)arg2;
- (void)_startProgressiveUITimer;
- (void)_updateDisplayBundle;
- (void)cancelPreview;
- (void)dealloc;
- (id)delegate;
- (BOOL)displayBundle:(id)arg1 decidePolicyForNavigationType:(NSInteger)arg2 request:(id)arg3;
- (void)displayBundle:(id)arg1 didLoadItem:(id)arg2 withError:(id)arg3;
- (id)displayBundle:(id)arg1 willSendRequest:(id)arg2;
- (id)displayBundle;
- (void)displayBundleWasTapped:(id)arg1;
- (void)hideDisplayBundleAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowingErrorView;
- (void)previewControllerDidReceiveMemoryWarning;
- (void)previewControllerDidZoomIn;
- (void)previewControllerDidZoomOut;
- (void)previewControllerWillZoomIn;
- (void)previewControllerWillZoomOut;
- (BOOL)previewIsReady;
- (id)previewItem;
- (void)refreshPreviewItem;
- (void)setDelegate:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)showDisplayBundleAnimated:(BOOL)arg1;
- (void)viewDidLoad;

@end
