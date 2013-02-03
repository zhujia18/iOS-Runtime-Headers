/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSOperationQueue, ABImageWellLabelView, ABClippingImageView, <ABPersonImageDataDelegate>, NSOperation, UIImage, <ABStyleProvider>, NSMutableDictionary;

@interface ABPersonImageView : ABPasteboardControl {
    BOOL _allowsEditing;
    void *_backgroundLoadingAddressBook;
    NSOperation *_backgroundLoadingOperation;
    void *_backgroundLoadingPerson;
    NSOperationQueue *_backgroundLoadingQueue;
    ABClippingImageView *_currentBorderView;
    UIImage *_defaultOrganizationImage;
    void *_displayedPerson;
    UIImage *_editOverlayImage;
    UIImage *_genericPersonImage;
    NSMutableDictionary *_imageCache;
    <ABPersonImageDataDelegate> *_imageDataDelegate;
    UIImage *_imageWellImage;
    BOOL _isEditing;
    UIImage *_maskImage;
    BOOL _multiplePhotoBackdropEnabled;
    BOOL _needsReflow;
    BOOL _needsReload;
    ABClippingImageView *_outlineBorderView;
    UIImage *_outlineImage;
    UIImage *_pasteboardMaskImage;
    ABClippingImageView *_pasteboardMaskImageView;
    UIImage *_personImage;
    void *_personImageDataCache;
    ABClippingImageView *_personImageView;
    UIImage *_pressedImage;
    ABClippingImageView *_pressedView;
    BOOL _scalesContentToFit;
    BOOL _shouldPickBestImage;
    BOOL _showLabel;
    <ABStyleProvider> *_styleProvider;
    UIImage *_wellBorderImage;
    ABClippingImageView *_wellBorderView;
    ABImageWellLabelView *_wellLabel;
}

@property(retain) NSOperation *asyncImageLoadingOperation;
@property(retain) NSOperationQueue *asyncImageLoadingQueue;
@property void *backgroundLoadingAddressBook;
@property void *backgroundLoadingPerson;
@property <ABPersonImageDataDelegate> *imageDataDelegate;
@property(retain) NSMutableDictionary *imageLoadingCache;
@property(retain,readonly) UIImage *maskImage;
@property(retain,readonly) UIImage *outlineImage;
@property(retain) <ABStyleProvider> *styleProvider;
@property BOOL allowsEditing;
@property BOOL scalesContentToFit;
@property BOOL shouldPickBestImage;

+ (void)_initializeSafeCategory;
+ (id)newImageWithName:(id)arg1;
+ (struct CGSize { float x1; float x2; })sizeForOptimalPerformance;

- (id)_newDictionaryWithImageData;
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)arg1;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)allowsEditing;
- (id)asyncImageLoadingOperation;
- (id)asyncImageLoadingQueue;
- (void*)backgroundLoadingAddressBook;
- (void*)backgroundLoadingPerson;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)copyDefaultImageForPerson:(void*)arg1;
- (id)copyImageForPerson:(void*)arg1 withFrameSize:(struct CGSize { float x1; float x2; })arg2 operation:(id)arg3 cache:(id)arg4;
- (void)dealloc;
- (void*)displayedPerson;
- (id)editOverlayImage;
- (void)finishedEditingAnimation;
- (id)genericOrganizationImage;
- (id)genericPersonImage;
- (BOOL)genericPlaceholderImageShouldApplyMaskAndOverlay;
- (id)imageDataDelegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)imageLoadingCache;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (id)maskImage;
- (id)outlineBorderView;
- (id)outlineImage;
- (void)paste:(id)arg1;
- (id)pasteboardMaskImage;
- (id)pasteboardMaskImageView;
- (id)pressedImage;
- (id)pressedView;
- (void)reflow;
- (void)reflowIfNeeded;
- (void)reload;
- (void)reloadIfNeeded;
- (BOOL)scalesContentToFit;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAsyncImageLoadingOperation:(id)arg1;
- (void)setAsyncImageLoadingQueue:(id)arg1;
- (void)setBackgroundLoadingAddressBook:(void*)arg1;
- (void)setBackgroundLoadingPerson:(void*)arg1;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2 cache:(id)arg3;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImageDataDelegate:(id)arg1;
- (void)setImageLoadingCache:(id)arg1;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setMultiplePhotoBackdropEnabled:(BOOL)arg1;
- (void)setNeedsReflow;
- (void)setNeedsReload;
- (void)setScalesContentToFit:(BOOL)arg1;
- (void)setShouldPickBestImage:(BOOL)arg1;
- (void)setShowsLabel:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldPickBestImage;
- (void)sizeOverlayToFitIfNecessary:(id)arg1;
- (id)styleProvider;
- (id)wellBorderImage;
- (id)wellBorderView;

@end
