/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImage, UIView;

@interface ABPersonIconImageView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    } _iconSize;
    NSInteger _imageType;
    UIView *_imageView;
    UIImage *_maskImage;
    UIImage *_overlayImage;
    id _styleHelper;
}

@property(retain) UIImage *maskImage;
@property(retain) UIImage *overlayImage;
@property(readonly) NSInteger imageType;
@property BOOL shouldPickBestImage;

+ (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlayForType:(NSInteger)arg1;
+ (id)_placeholderCompanyImageForType:(NSInteger)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)_placeholderPersonImageForType:(NSInteger)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)genericBlankPlaceholderImageOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)leftRightBorderOverlayImageOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)newImageViewWithIconSize:(struct CGSize { float x1; float x2; })arg1 imageType:(NSInteger)arg2;
+ (struct CGSize { float x1; float x2; })optimalIconSize;
+ (id)rightBorderOverlayImageOfSize:(struct CGSize { float x1; float x2; })arg1;

- (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlay;
- (id)_maskImageOrNSNull;
- (id)_overlayImageOrNSNull;
- (id)_placeholderCompanyImage;
- (id)_placeholderPersonImage;
- (void)_updateImages;
- (void)dealloc;
- (void*)displayedPerson;
- (NSInteger)imageType;
- (id)init;
- (id)initWithIconSize:(struct CGSize { float x1; float x2; })arg1 imageType:(NSInteger)arg2;
- (id)maskImage;
- (id)overlayImage;
- (id)personImageView;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2 cache:(id)arg3;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setMaskImage:(id)arg1;
- (void)setNeedsRecompositing;
- (void)setNeedsReload;
- (void)setOverlayImage:(id)arg1;
- (void)setShouldPickBestImage:(BOOL)arg1;
- (BOOL)shouldPickBestImage;

@end
