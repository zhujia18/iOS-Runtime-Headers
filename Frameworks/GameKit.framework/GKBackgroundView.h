/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, UILabel, UIActivityIndicatorView, GKVerticalGradientView;

@interface GKBackgroundView : UIView {
    UIImageView *_backgroundImageView;
    UIActivityIndicatorView *_loadingSpinner;
    UILabel *_statusLabel;
    GKVerticalGradientView *_verticalGradientView;
}

@property BOOL loading;

- (id)init;
- (void)layoutSubviews;
- (BOOL)loading;
- (void)setBackgroundImage:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setStatus:(id)arg1;

@end
