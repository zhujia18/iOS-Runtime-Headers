/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABCountryCodePicker, ABEditorModel, NSString;

@interface ABCountryPickerViewController : ABPickerViewController <ABCountryCodePickerDelegate> {
    ABCountryCodePicker *_countryPicker;
    ABEditorModel *_editorModel;
    NSString *_selectedCountryCode;
}

@property(retain) NSString *selectedCountryCode;

- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)countryCodePicker:(id)arg1 endedWithSelectionConfirmed:(BOOL)arg2 animate:(BOOL)arg3;
- (id)countryCodePicker;
- (void)dealloc;
- (id)initWithEditedItem:(id)arg1;
- (void)loadView;
- (id)selectedCountryCode;
- (void)setSelectedCountryCode:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
