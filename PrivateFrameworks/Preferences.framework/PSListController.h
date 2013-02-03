/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSMutableDictionary, UIPopoverController, UIKeyboard, UIAlertView, NSMutableArray, UIActionSheet, SnapshotView, NSString, PreferencesTable, NSArray;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PSViewControllerOffsetProtocol> {
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    NSMutableArray *_bundleControllers;
    BOOL _bundlesLoaded;
    BOOL _cachesCells;
    NSMutableDictionary *_cells;
    NSMutableArray *_groups;
    BOOL _hasAppeared;
    UIKeyboard *_keyboard;
    BOOL _keyboardWasVisible;
    BOOL _popupIsDismissing;
    BOOL _popupIsModal;
    UIPopoverController *_popupStylePopoverController;
    BOOL _popupStylePopoverShouldRePresent;
    BOOL _showingSetupController;
    SnapshotView *_snapshotTable;
    NSString *_specifierID;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    PreferencesTable *_table;
    float _verticalContentOffset;
}

+ (void)_initializeSafeCategory;
+ (BOOL)displaysButtonBar;

- (void)_addIdentifierForSpecifier:(id)arg1;
- (id)_createGroupIndices:(id)arg1;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3;
- (BOOL)_getGroup:(NSInteger*)arg1 row:(NSInteger*)arg2 ofSpecifierAtIndex:(NSInteger)arg3 groups:(id)arg4;
- (float)_getKeyboardIntersectionHeight;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_loadBundleControllers;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)_returnKeyPressed:(id)arg1;
- (void)_setContentInset:(float)arg1;
- (void)_setNotShowingSetupController;
- (float)_tableView:(id)arg1 heightForCustomInSection:(NSInteger)arg2 isHeader:(BOOL)arg3;
- (id)_tableView:(id)arg1 viewForCustomInSection:(NSInteger)arg2 isHeader:(BOOL)arg3;
- (void)_unloadBundleControllers;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)addSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifier:(id)arg1;
- (void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)beginUpdates;
- (id)bundle;
- (id)cachedCellForSpecifier:(id)arg1;
- (id)cachedCellForSpecifierID:(id)arg1;
- (void)clearCache;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (BOOL)containsSpecifier:(id)arg1;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (void)createGroupIndices;
- (void)dealloc;
- (id)description;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)dismissPopover;
- (void)endUpdates;
- (id)findFirstVisibleResponder;
- (void)formSheetViewWillDisappear;
- (BOOL)getGroup:(NSInteger*)arg1 row:(NSInteger*)arg2 ofSpecifier:(id)arg3;
- (BOOL)getGroup:(NSInteger*)arg1 row:(NSInteger*)arg2 ofSpecifierAtIndex:(NSInteger)arg3;
- (BOOL)getGroup:(NSInteger*)arg1 row:(NSInteger*)arg2 ofSpecifierID:(id)arg3;
- (void)handleURL:(id)arg1;
- (NSInteger)indexForIndexPath:(id)arg1;
- (NSInteger)indexOfGroup:(NSInteger)arg1;
- (NSInteger)indexOfSpecifier:(id)arg1;
- (NSInteger)indexOfSpecifierID:(id)arg1;
- (id)indexPathForIndex:(NSInteger)arg1;
- (id)init;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(NSInteger)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(NSInteger)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(NSInteger)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(NSInteger)arg2;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (void)loadView;
- (void)loseFocus;
- (NSInteger)numberOfGroups;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (BOOL)performActionForSpecifier:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(NSInteger)arg2;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popupViewWillDisappear;
- (void)prepareSpecifiersMetadata;
- (void)pushController:(id)arg1 animate:(BOOL)arg2;
- (void)pushController:(id)arg1;
- (void)reload;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifier:(id)arg1;
- (void)reloadSpecifierAtIndex:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierAtIndex:(NSInteger)arg1;
- (void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifiers;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)removeLastSpecifier;
- (void)removeLastSpecifierAnimated:(BOOL)arg1;
- (void)removeSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifierAtIndex:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierAtIndex:(NSInteger)arg1;
- (void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierID:(id)arg1;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (NSInteger)rowsForGroup:(NSInteger)arg1;
- (void)selectRowForSpecifier:(id)arg1;
- (void)setCachesCells:(BOOL)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (void)setSpecifierID:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)showConfirmationSheetForSpecifier:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)showPINSheet:(id)arg1;
- (id)specifier;
- (id)specifierAtIndex:(NSInteger)arg1;
- (id)specifierForID:(id)arg1;
- (id)specifierID;
- (id)specifiers;
- (id)specifiersInGroup:(NSInteger)arg1;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (id)table;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (NSInteger)tableView:(id)arg1 titleAlignmentForFooterInSection:(NSInteger)arg2;
- (NSInteger)tableView:(id)arg1 titleAlignmentForHeaderInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (float)verticalContentOffset;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
