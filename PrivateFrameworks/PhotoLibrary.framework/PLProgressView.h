/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSNumberFormatter, UIImageView, UILabel;

@interface PLProgressView : UIView {
    unsigned int _didLayout : 1;
    UIImageView *_backgroundView;
    UILabel *_labelView;
    float _percentComplete;
    NSNumberFormatter *_progressFormatter;
    UIImageView *_progressView;
    UIImageView *_wellView;
}

@property float percentComplete;

+ (void)_initializeSafeCategory;

- (void)_updateProgressView;
- (id)accessibilityLabel;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (float)percentComplete;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabelText:(id)arg1;
- (void)setPercentComplete:(float)arg1;
- (void)updateUIForPublishingAgent:(id)arg1;

@end
