/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableDictionary, AccountsManager;

@interface ABRefreshController : NSObject {
    AccountsManager *_accountsManager;
    NSMutableDictionary *_lastAccountRefreshDates;
    NSMutableDictionary *_lastGroupListRefreshDates;
}

+ (id)sharedInstance;

- (void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void*)arg1;
- (BOOL)accountGroupListNeedsRefresh:(id)arg1;
- (void)accountsChanged;
- (void)dealloc;
- (BOOL)groupWrapperNeedsRefresh:(id)arg1;
- (id)mobileAccounts;
- (void)refreshAccountGroupList:(id)arg1;
- (void)refreshGroupWrapper:(id)arg1;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void*)arg1;

@end
