/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage;

@interface UIKeyboardLanguageIndicator : UIView {
    UIImage *m_image;
    BOOL m_portrait;
    NSInteger m_style;
    float m_textSize;
}

@property(getter=isPortrait) BOOL portrait;
@property float textSize;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)fade;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isPortrait;
- (void)setBackgroundImage:(id)arg1;
- (void)setPortrait:(BOOL)arg1;
- (void)setStyle:(NSInteger)arg1;
- (void)setTextSize:(float)arg1;
- (float)textSize;

@end
