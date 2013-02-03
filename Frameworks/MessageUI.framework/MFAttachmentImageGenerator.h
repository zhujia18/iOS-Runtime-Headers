/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, UIImage;

@interface MFAttachmentImageGenerator : UIView {
    struct CGSize { 
        float width; 
        float height; 
    UIImage *_cutout;
    NSString *_displayString;
    UIImage *_image;
    } _textSize;
}

+ (void)imageData:(id*)arg1 mimeType:(id*)arg2 dimensions:(struct CGSize { float x1; float x2; }*)arg3 forAttachment:(id)arg4;
+ (id)pngDataForAttachment:(id)arg1 dimensions:(struct CGSize { float x1; float x2; }*)arg2;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithAttachment:(id)arg1;

@end
