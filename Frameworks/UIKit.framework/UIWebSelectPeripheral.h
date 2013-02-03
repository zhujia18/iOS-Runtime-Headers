/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLSelectElement, <UIWebSelectControl>;

@interface UIWebSelectPeripheral : NSObject <UIFormPeripheral> {
    <UIWebSelectControl> *_selectControl;
    DOMHTMLSelectElement *_selectionNode;
}

@property(retain) <UIWebSelectControl> *_selectControl;
@property(retain) DOMHTMLSelectElement *_selectionNode;

+ (void)_initializeSafeCategory;
+ (id)createPeripheralWithDOMHTMLSelectElement:(id)arg1;

- (id)_selectControl;
- (id)_selectionNode;
- (id)assistantView;
- (void)beginEditing;
- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1;
- (void)set_selectControl:(id)arg1;
- (void)set_selectionNode:(id)arg1;

@end
