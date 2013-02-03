/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSearchFieldConfiguration, UISearchField, SUCompletionTableViewController, <SUSearchFieldControllerDelegate>, SUKeyboardBackstopViewController, UIPopoverController;

@interface SUSearchFieldController : NSObject <SUCompletionTableDelegate, SUKeyboardBackstopDelegate, UIPopoverControllerDelegate, UITextFieldDelegate> {
    SUCompletionTableViewController *_completionsViewController;
    SUSearchFieldConfiguration *_configuration;
    <SUSearchFieldControllerDelegate> *_delegate;
    SUKeyboardBackstopViewController *_keyboardBackstopController;
    UIPopoverController *_popoverController;
    BOOL _redisplayPopover;
    UISearchField *_searchField;
}

@property <SUSearchFieldControllerDelegate> *delegate;
@property(readonly) UISearchField *searchField;
@property(copy) SUSearchFieldConfiguration *searchFieldConfiguration;

- (id)_cancelButtonView;
- (id)_completionsViewController;
- (id)_defaultSearchTerm;
- (void)_fetchResultsForTerm:(id)arg1;
- (void)_fetchResultsForURL:(id)arg1;
- (void)_fetchResultsForURLRequest:(id)arg1;
- (BOOL)_focusTransientViewController;
- (void)_hideCompletionsViewController;
- (id)_newBlankStorePageViewController;
- (id)_newSearchField;
- (id)_newTransientViewController;
- (void)_noEventSetSearchFieldText:(id)arg1;
- (void)_reloadCompletionsViewController;
- (void)_reloadSearchField;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (void)_searchFieldDidChange:(id)arg1;
- (void)_searchFieldDidEnd:(id)arg1;
- (void)_searchFieldDidEndOnExit:(id)arg1;
- (void)_showCompletionsPopover;
- (void)_showCompletionsViewController;
- (void)_showKeyboardBackstopView;
- (id)_targetViewController;
- (void)_tearDownKeyboardBackstop;
- (void)completionTableController:(id)arg1 pickedCompletionItem:(id)arg2;
- (void)completionTableControllerCompletionsDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)handleSearchURL:(id)arg1;
- (id)init;
- (void)keyboardBackstopDidDismiss:(id)arg1;
- (void)keyboardBackstopRequestsDismiss:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)searchField;
- (id)searchFieldConfiguration;
- (void)setDelegate:(id)arg1;
- (void)setSearchFieldConfiguration:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1;

@end
