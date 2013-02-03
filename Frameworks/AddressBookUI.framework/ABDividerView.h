/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>;

@interface ABDividerView : UIView {
    BOOL _isVertical;
    <ABStyleProvider> *_styleProvider;
}

@property(retain) <ABStyleProvider> *styleProvider;
@property(getter=isVertical) BOOL vertical;

- (void)dealloc;
- (BOOL)isHighlighted;
- (BOOL)isVertical;
- (void)setHighlighted:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setVertical:(BOOL)arg1;
- (id)styleProvider;

@end
