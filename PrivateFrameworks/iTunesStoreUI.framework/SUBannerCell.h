/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIButton;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {
    UIButton *_leftButton;
    UIButton *_rightButton;
}

+ (void)_initializeSafeCategory;

- (void)_buttonAction:(id)arg1;
- (id)_newButton;
- (void)_reloadButtons;
- (void)dealloc;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setConfiguration:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;

@end
