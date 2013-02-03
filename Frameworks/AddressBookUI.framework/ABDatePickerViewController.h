/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIDatePicker, <ABDatePickerViewControllerDismissDelegate>;

@interface ABDatePickerViewController : UIViewController {
    void *_context;
    UIDatePicker *_datePicker;
    <ABDatePickerViewControllerDismissDelegate> *_dismissDelegate;
}

@property void *context;
@property(retain) UIDatePicker *datePicker;
@property <ABDatePickerViewControllerDismissDelegate> *dismissDelegate;

+ (struct CGSize { float x1; float x2; })datePickerSize;

- (float)ab_heightToFitForViewInPopoverView;
- (void*)context;
- (id)datePicker;
- (void)dealloc;
- (id)dismissDelegate;
- (void)loadView;
- (void)setContext:(void*)arg1;
- (void)setDatePicker:(id)arg1;
- (void)setDismissDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
