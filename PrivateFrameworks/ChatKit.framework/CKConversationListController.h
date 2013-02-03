/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversationSearcher, UIToolbar, CKConversationList, UITableView, CKService, UINavigationController, MFMailComposeViewController, CKTranscriptController;

@interface CKConversationListController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate, CKConversationSearcherDelegate> {
    unsigned int _dirty : 1;
    unsigned int _isVisible : 1;
    unsigned int _isUpdatingDisabled : 1;
    UIToolbar *_buttonBar;
    CKConversationList *_conversationList;
    CKService *_currentService;
    BOOL _disableSMSFullDialog;
    MFMailComposeViewController *_mailComposeController;
    UINavigationController *_navigationController;
    CKConversationSearcher *_searcher;
    UITableView *_table;
    CKTranscriptController *_transcriptController;
    NSUInteger _willBeMarkedReadCount;
}

@property CKConversationList *conversationList;
@property(retain) CKService *currentService;

+ (void)_initializeSafeCategory;

- (void)_checkIfDatabaseIsFull;
- (void)_conversationDidChange:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationWasMarkedAsRead:(id)arg1;
- (void)_databaseFull:(id)arg1;
- (void)_displaySMSDatabaseFullWarning;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)_groupsChanged:(id)arg1;
- (BOOL)_shouldUseDefaultFirstResponder;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseNextFirstResponder;
- (void)_showMailComposeSheet;
- (void)accessibilityLargeTextDidChange;
- (void)applicationWillSuspend;
- (void)autosaveMailComposition;
- (void)composeButtonClicked:(id)arg1;
- (id)conversationList;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (id)currentService;
- (void)dealloc;
- (void)deleteButtonPressedForIndexPath:(id)arg1;
- (void)didCancelComposition:(id)arg1;
- (void)disableConversationListUpdates;
- (void)enableConversationListUpdates;
- (BOOL)hasUnreadConversations;
- (void)hideNewMessageCompositionPanel:(BOOL)arg1;
- (id)initWithNavigationController:(id)arg1 service:(id)arg2;
- (BOOL)isShowingCompositionPanel;
- (BOOL)isShowingEmptyCompositionPanel;
- (BOOL)isShowingTranscriptWithUnsentText;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(NSInteger)arg2 error:(id)arg3;
- (void)noteConversationListChanged;
- (void)noteUnreadCountsChanged;
- (BOOL)resumeToConversation:(id)arg1 unsentComposition:(id)arg2;
- (id)searcher:(id)arg1 conversationForGroupRowID:(NSInteger)arg2;
- (void)searcher:(id)arg1 userDidSelectConversationGroupID:(NSInteger)arg2 messageRowID:(NSInteger)arg3 partRowID:(NSInteger)arg4;
- (id)searcherContentsController:(id)arg1;
- (NSInteger)selectedIndex;
- (void)setConversationList:(id)arg1;
- (void)setCurrentService:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)show:(BOOL)arg1;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2;
- (void)showConversationAndMessageForGroupRowID:(NSInteger)arg1 messageRowID:(NSInteger)arg2 partRowID:(NSInteger)arg3;
- (void)showConversationAndMessageForSearchURL:(id)arg1;
- (void)showMailComposeSheetForAddress:(id)arg1;
- (void)showMailComposeSheetForAutosavedMessage;
- (void)showMessagesForAddress:(id)arg1 animate:(BOOL)arg2;
- (void)showNewMessageCompositionPanel:(BOOL)arg1;
- (BOOL)showUnreadConversations;
- (void)significantTimeChange;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)transcriptController;
- (void)updateConversationList;
- (void)updateNavigationItems;
- (void)updateTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;

@end
