/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSOperationQueue, UISearchDisplayController, <ABMembersControllerDelegate>, ABMembersDataSource, UISearchBar, NSIndexPath, UIView, <ABStyleProvider>, ABMembersFilteredDataSource, UIViewController, ABBannerView;

@interface ABMembersController : ABContentController <ABMembersDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, ABSearchOperationDelegate, UISearchBarDelegate> {
    ABBannerView *_bannerView;
    NSUInteger _cellsCreated;
    NSUInteger _memberCount;
    <ABMembersControllerDelegate> *_membersControllerDelegate;
    ABMembersDataSource *_membersDataSource;
    BOOL _needToClearOldResults;
    NSOperationQueue *_operationQueue;
    UIViewController *_parentViewController;
    BOOL _resumeForPhoneApp;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    ABMembersFilteredDataSource *_searchDataSource;
    BOOL _searchEnabled;
    NSUInteger _searchSequenceNumber;
    NSIndexPath *_selectedIndexPath;
    BOOL _shouldRestoreScrollPosition;
    BOOL _showingCardFromSearch;
    <ABStyleProvider> *_styleProvider;
    UIView *_tableAccessoryView;
    BOOL _wasKeyboardShowing;
}

@property <ABMembersControllerDelegate> *membersControllerDelegate;
@property(retain) <ABStyleProvider> *styleProvider;
@property(getter=isSearchEnabled) BOOL searchEnabled;
@property(readonly) BOOL shouldShowImages;

+ (id)newNameSearchOperationWithString:(id)arg1 groupWrapper:(id)arg2 addressBook:(void*)arg3 delegate:(id)arg4 inOutSequenceNumber:(NSUInteger*)arg5;

- (void)_deselectAllRowsWithAnimation;
- (void)_reloadFontSizes;
- (void)_reselectLastSelectedCellIfNeeded;
- (void)_searchForWords:(id)arg1;
- (void*)_selectedPerson;
- (void)_setSelectedIndexPath:(id)arg1;
- (void)_updateCountString;
- (void)_updateEmptyTableViewAnimated:(BOOL)arg1;
- (void)_updateNoContactsViewAnimated:(BOOL)arg1;
- (BOOL)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(BOOL)arg5;
- (BOOL)abDataSource:(id)arg1 shouldAllowSelectingPerson:(void*)arg2;
- (void)abDataSourceSelectedSearchInIndex:(id)arg1;
- (id)accessoryView;
- (void)cancelSearching:(id)arg1;
- (void)cancelSearchingAnimated:(BOOL)arg1;
- (NSUInteger)cellsCreated;
- (id)contentView;
- (id)currentSearchText;
- (id)currentTableView;
- (void)dealloc;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)displayedMembersListChanged;
- (NSInteger)globalIndexOfMember:(void*)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (BOOL)isSearchEnabled;
- (BOOL)isSearching;
- (void)loadState;
- (id)membersControllerDelegate;
- (id)membersDataSource;
- (id)operationQueue;
- (void)photosEverywhereChanged;
- (void)relayoutAccessoryView;
- (void)reload;
- (void)reloadCellForPerson:(void*)arg1;
- (void)restoreScrollPosition;
- (void)resume;
- (void)saveScrollPosition:(void*)arg1;
- (void)saveState:(void*)arg1;
- (BOOL)scrollMemberVisible:(void*)arg1;
- (void)scrollTableViewToSearchField:(id)arg1 animated:(BOOL)arg2;
- (void)scrollTableViewToSearchFieldIfNotAlreadyScrolled;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)searchDataSource;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)selectMember:(void*)arg1 animated:(BOOL)arg2;
- (void)selectMemberOnlyInTable:(void*)arg1 scrollPosition:(NSInteger)arg2;
- (id)selectedCell;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)setCellsCreated:(NSUInteger)arg1;
- (void)setMembersControllerDelegate:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSearchEnabled:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldShowImages;
- (BOOL)shouldShowIndex;
- (BOOL)showCardForPerson:(void*)arg1 animate:(BOOL)arg2;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (void)stopScrolling;
- (id)styleProvider;
- (void)suspend;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (id)tableView;
- (id)tableViewPathToMember:(void*)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
