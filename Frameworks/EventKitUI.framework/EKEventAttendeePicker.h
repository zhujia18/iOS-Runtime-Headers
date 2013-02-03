/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSNumber, UIKeyboard, _MFComposeRecipientView, UITableView, MFContactsSearchManager, MFContactsSearchResultsModel, MFSearchShadowView, NSString, UIScrollView, NSArray;

@interface EKEventAttendeePicker : UIViewController <ABPeoplePickerNavigationControllerDelegate, MFContactsSearchConsumer, _MFComposeRecipientViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    _MFComposeRecipientView *_composeRecipientView;
    } _initialFrame;
    UIKeyboard *_keyboard;
    NSNumber *_lastSearchId;
    UIScrollView *_recipientScrollView;
    NSArray *_recipients;
    NSString *_searchAccountID;
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    UITableView *_searchResultsView;
    MFSearchShadowView *_shadowView;
    BOOL _shouldReenableAutomaticKeyboard;
    BOOL _showingSearchField;
}

@property(copy) NSString *searchAccountID;

- (void)_copyRecipientsFromComposeView;
- (void)_hideKeyboard;
- (void)_hideKeyboardAndDeactivateContent:(BOOL)arg1;
- (void)_hideSearchFieldAndCancelOutstandingSearches:(BOOL)arg1;
- (float)_maxScrollerHeight;
- (id)_modalViewPresenter;
- (float)_properHeight;
- (void)_refreshKeyboardAndAdjustFocus:(BOOL)arg1;
- (id)_searchManager;
- (id)_searchResultsView;
- (void)_setRecipientsOnComposeView;
- (id)_shadowView;
- (void)_showKeyboard:(BOOL)arg1 activateContent:(BOOL)arg2;
- (void)_showKeyboard:(BOOL)arg1;
- (void)_showSearchField;
- (id)addresses;
- (void)animationDidStop:(id)arg1;
- (void)beganNetworkActivity;
- (void)commitRemainingText;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(NSInteger)arg3;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(NSInteger)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishEnteringRecipient:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)consumeSearchResults:(id)arg1 type:(NSInteger)arg2 taskID:(id)arg3;
- (void)dealloc;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(NSInteger)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (void)loadView;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (id)recipients;
- (id)remainingText;
- (id)searchAccountID;
- (void)searchWithText:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSearchAccountID:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
