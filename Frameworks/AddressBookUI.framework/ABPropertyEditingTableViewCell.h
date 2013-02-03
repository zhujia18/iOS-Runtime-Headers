/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UITextField, NSString, <ABPropertyEditingTableViewCellDelegate>;

@interface ABPropertyEditingTableViewCell : UITableViewCell <ABStyleProviding> {
    <ABPropertyEditingTableViewCellDelegate> *_delegate;
    NSString *_placeholder;
    NSInteger _property;
    UITextField *_textField;
}

@property <ABPropertyEditingTableViewCellDelegate> *delegate;
@property(copy) NSString *placeholder;
@property(copy) NSString *value;
@property NSInteger property;
@property BOOL usesLargeFont;

- (void)_resizeAndCenterTextField;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2 property:(NSInteger)arg3 delegate:(id)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (id)placeholder;
- (NSInteger)property;
- (BOOL)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setProperty:(NSInteger)arg1;
- (void)setUsesLargeFont:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (id)styleProvider;
- (void)textFieldValueDidChange:(id)arg1;
- (BOOL)usesLargeFont;
- (id)value;

@end
