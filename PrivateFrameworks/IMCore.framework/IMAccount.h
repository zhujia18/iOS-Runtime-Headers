/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, IMPeople, IMServiceImpl, NSDate, NSData, NSAttributedString, NSDictionary, NSString, UIImage, NSMutableDictionary, IMHandle;

@interface IMAccount : NSObject <IMSystemMonitorListener> {
    unsigned int _isActive : 1;
    unsigned int _justLoggedIn : 1;
    unsigned int _asleep : 1;
    unsigned int _useMeCardName : 1;
    unsigned int _blockIdleStatus : 1;
    unsigned int _blockOtherAddresses : 1;
    unsigned int _allowsVCRelay : 1;
    unsigned int _syncedBuddies : 1;
    unsigned int _syncedWithRemoteBuddyList : 1;
    unsigned int _hasReceivedSync : 1;
    unsigned int _needToCheckForWatchedIMHandles : 1;
    unsigned int _iconChecked : 1;
    unsigned int _hasBeenRemoved : 1;
    UIImage *_accountImage;
    NSData *_accountImageData;
    NSMutableDictionary *_accountPreferences;
    IMPeople *_buddyList;
    NSArray *_cachedAllowList;
    NSArray *_cachedBlockList;
    NSInteger _cachedBlockingMode;
    unsigned long long _capabilities;
    NSInteger _coalesceCount;
    NSMutableDictionary *_coalescedChanges;
    NSMutableDictionary *_currentAccountStatus;
    NSMutableDictionary *_data;
    NSArray *_groups;
    NSMutableDictionary *_imHandles;
    NSMutableDictionary *_inlineTransfers;
    NSArray *_lastReceivedGroupState;
    NSString *_loginID;
    IMHandle *_loginIMHandle;
    NSUInteger _loginStatus;
    NSDictionary *_members;
    NSDate *_myIdleSince;
    NSDictionary *_myNowPlaying;
    NSData *_myPictureData;
    NSAttributedString *_myProfile;
    NSUInteger _myStatus;
    NSString *_myStatusMessage;
    NSInteger _numHolding;
    NSInteger _registrationStatus;
    IMServiceImpl *_service;
    UIImage *_smallImage;
    NSMutableDictionary *_sortOrders;
    NSDictionary *_subtypeInfo;
    NSArray *_targetGroupState;
    NSString *_uniqueID;
}

+ (id)_groupSummaryFromGroupList:(id)arg1;
+ (id)allBuddyListIMHandles;
+ (id)arrayOfAllIMHandles;
+ (id)nameOfLoginStatus:(NSUInteger)arg1;
+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forServiceName:(id)arg3;

- (void)_applyChangesToTemporaryCache:(id)arg1;
- (void)_ensureGroupsExists:(id)arg1;
- (void)_loginWithAutoLogin:(BOOL)arg1;
- (void)_notJustLoggedIn;
- (void)_refreshLoginIMHandle;
- (void)_resumeBuddyUpdatesNow;
- (id)_serverWithSSL:(BOOL)arg1;
- (void)_serviceDidConnect:(id)arg1;
- (void)_serviceDidDisconnect:(id)arg1;
- (void)_serviceDidReconnect:(id)arg1;
- (void)_syncWithRemoteBuddies;
- (void)_updateMyStatus:(NSUInteger)arg1 message:(id)arg2;
- (void)_updateRegistrationStatus:(NSInteger)arg1;
- (void)_watchBuddiesIfNecessary;
- (id)accountDescription;
- (void)accountDidBecomeActive;
- (void)accountDidDeactivate;
- (id)accountImageData;
- (id)accountSubtypeInfo;
- (void)accountWillBeRemoved;
- (void)addBuddyToBuddyList:(id)arg1;
- (BOOL)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(NSInteger)arg3;
- (BOOL)addIMHandle:(id)arg1 toIMPerson:(id)arg2;
- (BOOL)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(NSInteger)arg3;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (id)allowList;
- (BOOL)allowsVCRelay;
- (id)arrayOfAllIMHandles;
- (BOOL)autoLogin;
- (void)autoLoginAccount;
- (void)beginChanges;
- (BOOL)blockIdleStatus;
- (id)blockList;
- (void)blockMessages:(BOOL)arg1 fromID:(id)arg2;
- (BOOL)blockOtherAddresses;
- (NSUInteger)blockingMode;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForPreferenceKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)buddyList;
- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;
- (void)buddyPropertiesChanged:(id)arg1;
- (BOOL)canActivate;
- (BOOL)canBeSecure;
- (id)canonicalFormOfID:(id)arg1;
- (unsigned long long)capabilities;
- (void)changeBuddyList:(id)arg1 add:(BOOL)arg2 groups:(id)arg3 atLocation:(NSInteger)arg4;
- (id)chatIDForRoomName:(id)arg1;
- (void)clearServiceCaches;
- (void)clearTargetState;
- (NSInteger)compareAccountNames:(id)arg1;
- (NSInteger)compareIDs:(id)arg1;
- (NSInteger)compareLoginStatus:(id)arg1;
- (NSInteger)compareNames:(id)arg1;
- (NSInteger)compareServices:(id)arg1;
- (NSInteger)compareStatus:(id)arg1;
- (void)dealloc;
- (id)defaultChatSuffix;
- (unsigned long long)defaultHandleCapabilities;
- (id)dictionary;
- (id)dictionaryDataForKey:(id)arg1;
- (id)dictionaryDataForPreferenceKey:(id)arg1;
- (void)disableCertificatesForIMHandle:(id)arg1;
- (void)disconnectAllIMHandles;
- (BOOL)emailAddressIsID:(id)arg1;
- (id)emailDomains;
- (void)enableSecureIM:(BOOL)arg1;
- (void)endChanges;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)existingIMHandleWithID:(id)arg1;
- (void)forgetAllWatches;
- (BOOL)goIdle;
- (id)groupList;
- (id)groupMembers:(id)arg1;
- (void)groupsChanged:(id)arg1 error:(id)arg2;
- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;
- (BOOL)handlesChatInvites;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (BOOL)hasCustomDescription;
- (BOOL)hasSyncedWithRemoteBuddies;
- (BOOL)hasTargetGroupStateBeenMet;
- (void)holdBuddyUpdates;
- (void)hookupToDaemon;
- (void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2;
- (Class)imHandleClass;
- (id)imHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)imHandleWithID:(id)arg1;
- (id)imHandlesForIMPerson:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)initWithUniqueID:(id)arg1 service:(id)arg2;
- (NSInteger)integerForKey:(id)arg1;
- (NSInteger)integerForPreferenceKey:(id)arg1 defaultValue:(NSInteger)arg2;
- (id)internalName;
- (NSInteger)invalidSettings;
- (BOOL)isActive;
- (BOOL)isAwaitingTargetGroupState;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)isInvisible;
- (BOOL)isManaged;
- (BOOL)justLoggedIn;
- (void)loadFromDictionary:(id)arg1;
- (id)login;
- (void)loginAccount;
- (id)loginIMHandle;
- (NSUInteger)loginStatus;
- (void)loginStatusChanged:(NSUInteger)arg1 message:(id)arg2 reason:(NSUInteger)arg3 properties:(id)arg4;
- (id)loginStatusMessage;
- (void)logoutAccount;
- (BOOL)makingChanges;
- (id)memberGroups:(id)arg1;
- (id)myIdleSince;
- (id)myNowPlayingString;
- (id)myPictureData;
- (id)myProfile;
- (NSUInteger)myStatus;
- (id)myStatusDictionary;
- (id)myStatusMessage;
- (id)name;
- (void)nowLoggedIn;
- (void)nowLoggedOut;
- (id)objectForKey:(id)arg1;
- (id)objectForPreferenceKey:(id)arg1;
- (id)password;
- (id)personForIMHandle:(id)arg1;
- (id)personSibsForIMHandle:(id)arg1;
- (NSInteger)port;
- (id)propertiesForGroup:(id)arg1;
- (void)recalculateSubtypeInfo;
- (id)recalculatedSubtypeInfo;
- (BOOL)registerAccount;
- (void)registerIMHandle:(id)arg1;
- (NSInteger)registrationStatus;
- (BOOL)removeIMHandle:(id)arg1 fromGroups:(id)arg2;
- (BOOL)removeIMHandle:(id)arg1 fromIMPerson:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForPreferenceKey:(id)arg1;
- (void)removePassword;
- (BOOL)removePeople:(id)arg1 fromGroups:(id)arg2;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)reorderGroup:(id)arg1 order:(id)arg2;
- (void)reorderGroups:(id)arg1;
- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;
- (void)requestGroups;
- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;
- (void)resetToDefaults;
- (void)resumeBuddyUpdates;
- (BOOL)secureImEnabled;
- (id)server;
- (id)service;
- (id)serviceName;
- (void)setAccountDescription:(id)arg1;
- (void)setAllowList:(id)arg1;
- (void)setAllowsVCRelay:(BOOL)arg1;
- (void)setAutoLogin:(BOOL)arg1;
- (void)setBlockIdleStatus:(BOOL)arg1;
- (void)setBlockList:(id)arg1;
- (void)setBlockOtherAddresses:(BOOL)arg1;
- (void)setBlockingMode:(NSUInteger)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setBool:(BOOL)arg1 forPreferenceKey:(id)arg2;
- (void)setBuddyListAuthorization:(BOOL)arg1 forIMHandle:(id)arg2;
- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;
- (void)setCachedAllowList:(id)arg1;
- (void)setCachedBlockIdleStatus:(BOOL)arg1;
- (void)setCachedBlockList:(id)arg1;
- (void)setCachedBlockingMode:(NSUInteger)arg1;
- (void)setCurrentAccountStatus:(id)arg1;
- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setGoIdle:(BOOL)arg1;
- (void)setIMAccountLoginStatus:(NSUInteger)arg1 errorMessage:(id)arg2 reason:(NSUInteger)arg3;
- (void)setIMAccountLoginStatus:(NSUInteger)arg1 errorMessage:(id)arg2;
- (void)setIMAccountLoginStatus:(NSUInteger)arg1;
- (void)setInteger:(NSInteger)arg1 forKey:(id)arg2;
- (void)setInteger:(NSInteger)arg1 forPreferenceKey:(id)arg2;
- (void)setInvisible:(BOOL)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)setLogin:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setPassword:(id)arg1;
- (void)setSecureImEnabled:(BOOL)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setTargetGroupsState:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;
- (void)setWaitForTargetState;
- (id)shortName;
- (NSUInteger)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;
- (void)startWatchingIMHandle:(id)arg1;
- (NSUInteger)status;
- (void)stopWatchingIMHandle:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)stringForPreferenceKey:(id)arg1 defaultValue:(id)arg2;
- (BOOL)supportsRegistration;
- (void)syncWithRemoteBuddies;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)targetGroupStateTimeout;
- (id)uniqueID;
- (BOOL)unregisterAccount;
- (void)unregisterIMHandle:(id)arg1;
- (void)updateCapabilities:(unsigned long long)arg1;
- (void)updateWithTargetGroups;
- (BOOL)useSSL;
- (BOOL)validLogin;
- (BOOL)validPort;
- (BOOL)validServer;
- (struct _FZChatRoomValidity { NSInteger x1; unsigned short x2; })validityOfChatRoomName:(id)arg1;
- (void)watchBuddiesIfNecessary;
- (void)writeSettings;

@end
