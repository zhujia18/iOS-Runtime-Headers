/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIActivityIndicatorView, NSArray, UIControl, NSDictionary, UIView;

@interface PSControlTableCell : PSTableCell {
    UIActivityIndicatorView *_activityIndicator;
    UIControl *_control;
    UIView *_disabledView;
    NSDictionary *_titleDict;
    NSArray *_values;
}

+ (void)_initializeSafeCategory;

- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)canReload;
- (id)control;
- (void)controlChanged:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)loading;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCellEnabled:(BOOL)arg1;
- (void)setControl:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (void)setValues:(id)arg1 titleDictionary:(id)arg2;
- (id)titleLabel;
- (id)valueLabel;

@end
