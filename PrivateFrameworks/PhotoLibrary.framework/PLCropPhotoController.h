/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCropPhotoControllerDelegate>, UIToolbar, PLCropOverlayView2;

@interface PLCropPhotoController : UIViewController <UIActionSheetDelegate> {
    unsigned int _didInitializeNavigationItem : 1;
    unsigned int _toolbarWasHidden : 1;
    <PLCropPhotoControllerDelegate> *_delegate;
    PLCropOverlayView2 *_overlayView;
    UIToolbar *_toolbar;
}

@property <PLCropPhotoControllerDelegate> *delegate;
@property UIToolbar *toolbar;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)cancel:(id)arg1;
- (void)cropPhoto:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)didStopAnimatingOrderOut:(id)arg1 finished:(id)arg2 content:(void*)arg3;
- (void)displayCropActions:(id)arg1;
- (void)displayOnController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)navigationItem;
- (void)orderOut:(id)arg1;
- (void)rotateCropRect:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setToolbar:(id)arg1;
- (id)toolbar;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;

@end
