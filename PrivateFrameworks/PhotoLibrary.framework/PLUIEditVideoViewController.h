/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImagePickerController, UINavigationItem, NSDictionary;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    NSUInteger _canCreateMetadata;
    id _delegate;
    UIImagePickerController *_imagePicker;
    UINavigationItem *_navItem;
    NSDictionary *_options;
    Class _viewClass;
}

- (void)_cancelTrim:(id)arg1;
- (BOOL)_displaysFullScreen;
- (BOOL)_editingForThirdParty;
- (void)_setupNavigationItemAndTrimTitle:(id)arg1;
- (id)_trimMessage;
- (void)_trimVideo:(id)arg1;
- (Class)_viewClass;
- (NSInteger)cropOverlayMode;
- (void)dealloc;
- (id)delegate;
- (void)didChooseVideoAtPath:(id)arg1 options:(id)arg2;
- (id)initWithPhoto:(id)arg1 trimTitle:(id)arg2;
- (id)initWithProperties:(id)arg1;
- (id)navigationItem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewFrame;
- (void)setDelegate:(id)arg1;
- (void)setImagePickerOptions:(id)arg1;
- (void)setViewClass:(Class)arg1;
- (id)uiipc_imagePickerController;
- (id)uiipc_imagePickerOptions;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewPlaybackDidFail:(id)arg1;
- (float)videoViewScrubberYOrigin:(id)arg1;

@end
