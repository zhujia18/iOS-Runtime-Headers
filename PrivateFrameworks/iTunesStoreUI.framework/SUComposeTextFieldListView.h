/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;

@interface SUComposeTextFieldListView : UIView {
    id _delegate;
    NSMutableArray *_fields;
    BOOL _isValid;
    NSInteger _style;
}

@property(readonly) UIResponder *initialFirstResponder;
@property(readonly) NSInteger composeReviewStyle;
@property(readonly) float height;

- (void)_updateValidity;
- (NSInteger)composeReviewStyle;
- (void)composeTextFieldValidityChanged:(id)arg1;
- (void)dealloc;
- (float)height;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (id)initialFirstResponder;
- (BOOL)isValid;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)textForFieldAtIndex:(NSUInteger)arg1;

@end
