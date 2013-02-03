/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSDictionary;

@interface MusicLibrary : NSObject {
    unsigned int _needsFlush : 1;
    unsigned int _skippedUpdatePurchasedContent : 1;
    unsigned int _disableExternalPlaylistNotifications : 1;
    unsigned int _autoflushScheduled : 1;
    double _autoflushTargetTime;
    NSString *_basePath;
    void *_bridge;
    NSDictionary *_purchasedContentFolders;
}

+ (void)_beginCreatingSharedInstance;
+ (void)_dumpDebuggingInfo;
+ (void)_endCreatingSharedInstance;
+ (void)_mainThreadRestrictionsChangedNotification:(id)arg1;
+ (void)_postDatabaseChangeNotificationName:(id)arg1 changeType:(NSInteger)arg2;
+ (void)_restrictionsChangedNotification:(id)arg1;
+ (void)_setSharedMusicLibrary:(id)arg1;
+ (id)_sharedMusicLibrary:(BOOL)arg1;
+ (void)beginDatabaseMigrationIfNecessary;
+ (void)checkForControlDirectoryLocationWithBasePath:(id)arg1;
+ (void)commitAllDeferredWork;
+ (id)controlDirectoryPathWithBasePath:(id)arg1;
+ (id)copyLocalizedStringForITTGLocString:(NSInteger)arg1;
+ (id)copyPurchaseContentFolderMapWithDelegate:(id)arg1;
+ (BOOL)databaseDataFilesExist;
+ (id)dbModDate;
+ (void)dbSyncDidEnd;
+ (void)dbSyncWillBegin;
+ (void)disableFlush;
+ (void)dumpDebuggingInfo;
+ (void)enableFlush;
+ (NSInteger)filenameFormatResourceForPlaylistType:(NSInteger)arg1;
+ (BOOL)flush;
+ (void)flushPreparedStatementCache;
+ (id)geniusDatabasePath;
+ (BOOL)hasContent;
+ (id)iTunesLibraryPackageDBTempFolder;
+ (BOOL)importationEnabled;
+ (void)initialize;
+ (BOOL)isDBSyncActive;
+ (BOOL)isFlushEnabled;
+ (BOOL)isTesting;
+ (void)jetsamMemory;
+ (id)mediaFolderRelativePath:(id)arg1;
+ (void)noteDBSyncIsActive;
+ (id)pathForResourceFileOrFolder:(NSInteger)arg1 basePath:(id)arg2 createParentFolderIfNecessary:(BOOL)arg3;
+ (id)pathForResourceFileOrFolder:(NSInteger)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 isFolder:(BOOL*)arg4;
+ (id)pathForResourceFileOrFolder:(NSInteger)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3;
+ (id)pathForResourceFileOrFolder:(NSInteger)arg1;
+ (void)postDatabaseContentsDidChangeNotification:(NSInteger)arg1;
+ (void)postDatabaseContentsWillChangeNotification:(NSInteger)arg1;
+ (id)purchasedContentXMLFilenames;
+ (void)resetLibrary;
+ (void)resetLibraryImpl;
+ (void)setImportationEnabled:(BOOL)arg1;
+ (void)setIsTesting:(BOOL)arg1;
+ (id)sharedMusicLibrary;
+ (Class)sharedMusicLibraryClass;
+ (Class)sharedMusicLibraryClass;
+ (BOOL)sharedMusicLibraryExists;
+ (id)sharedMusicLibraryIfExists;
+ (unsigned long long)syncGenerationID;
+ (void)updateActivePlaylistNamesForCurrentLanguage;
+ (BOOL)updatePurchasedContent;

- (void)_autoflush;
- (void)_cancelAutoflush;
- (id)_copyUserInfoForRemovedPlaylists:(id)arg1;
- (BOOL)_dbUpdatePurchasedContent;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(NSUInteger)arg2 stride:(NSInteger)arg3;
- (void)_dumpDebuggingInfo;
- (void)_dumpDebuggingInfoAfterInit;
- (id)_getPurchaseContentFolders;
- (id)_preparedPlaylistChangeUserInfoForDeletionRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 insertionRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)basePath;
- (void)commitAllDeferredWork;
- (NSUInteger)countOfAllAudioTracks;
- (BOOL)countOfAllAudioTracksIsNonZero;
- (NSUInteger)countOfAllVideoTracks;
- (BOOL)countOfAllVideoTracksIsNonZero;
- (NSUInteger)countOfPurchasedContent;
- (void)dealloc;
- (void)debugLogPerfStatistics;
- (void)ensureSpecialUserPlaylistsExist;
- (BOOL)flush;
- (void)flushPreparedStatementCacheImpl;
- (struct MLArtworkFormatSpec { NSUInteger x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSInteger x5; NSInteger x6; })formatSpecForArtworkFormatID:(NSUInteger)arg1;
- (id)getPlaylistWithPersistentUID:(unsigned long long)arg1 visibleOnly:(BOOL)arg2;
- (id)getPlaylistWithUniqueID:(NSUInteger)arg1 visibleOnly:(BOOL)arg2;
- (id)initWithBasePath:(id)arg1;
- (void)jetsamMemoryImpl;
- (id)localizedSectionHeaderForSectionHeader:(id)arg1;
- (id)localizedSectionIndexForSectionHeader:(id)arg1;
- (NSUInteger)maximumGeniusPlaylistTrackCount;
- (NSUInteger)minimumGeniusPlaylistTrackCount;
- (void)mutatePlaylist:(id)arg1 insertEntitiesFromQuery:(id)arg2 entityIndexes:(id)arg3 atIndex:(NSUInteger)arg4 postNotifications:(BOOL)arg5;
- (void)mutatePlaylist:(id)arg1 insertTracks:(id)arg2 atIndex:(NSUInteger)arg3 postNotifications:(BOOL)arg4;
- (void)mutatePlaylist:(id)arg1 moveEntitiesFromRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 toIndex:(NSUInteger)arg3 postNotifications:(BOOL)arg4;
- (void)mutatePlaylist:(id)arg1 removeTracksInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 postNotifications:(BOOL)arg3;
- (void)mutatePlaylist:(id)arg1 replaceEntitiesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 withTracks:(id)arg3 postNotifications:(BOOL)arg4;
- (void)notePlaylistAdded:(id)arg1;
- (void)notePlaylistContentsDidMutate:(id)arg1 deletionRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 insertionRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)notePlaylistContentsDidMutate:(id)arg1 didMoveItemsFromRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 toIndex:(NSUInteger)arg3;
- (void)notePlaylistContentsDidMutate:(id)arg1 didReplaceItemsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 withInsertionCount:(NSUInteger)arg3;
- (void)notePlaylistContentsDidMutate:(id)arg1 userInfo:(id)arg2 saveableChange:(BOOL)arg3;
- (void)notePlaylistContentsWillMutate:(id)arg1 deletionRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 insertionRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)notePlaylistContentsWillMutate:(id)arg1 userInfo:(id)arg2 saveableChange:(BOOL)arg3;
- (void)notePlaylistContentsWillMutate:(id)arg1 willMoveItemsFromRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 toIndex:(NSUInteger)arg3;
- (void)notePlaylistContentsWillMutate:(id)arg1 willReplaceItemsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 withInsertionCount:(NSUInteger)arg3;
- (void)notePlaylistsRemoved:(id)arg1;
- (void)noteSaveablePlaylistAttributesMutated:(id)arg1;
- (void)noteSaveablePlaylistAttributesWillMutate:(id)arg1;
- (void)noteWillAddPlaylist;
- (void)noteWillRemovePlaylist:(id)arg1;
- (id)pathForResourceFileOrFolder:(NSInteger)arg1 createParentFolderIfNecessary:(BOOL)arg2;
- (id)pathForResourceFileOrFolder:(NSInteger)arg1;
- (void)postAvailablePlaylistsDidChangeWithUserInfo:(id)arg1;
- (void)postAvailablePlaylistsWillChangeWithUserInfo:(id)arg1;
- (void)prepareForSavingPlaylist:(id)arg1;
- (id)purchasedContentFolderMap;
- (id)purchasedContentFolders;
- (void)scheduleAutoflushWithInterval:(double)arg1;
- (void)scheduleFlushDatabase;
- (void)scheduleSavingPlaylist:(id)arg1;
- (id)sectionIndexEllipsis;
- (id)sectionIndexForSectionHeader:(id)arg1;
- (id)sectionIndices;
- (void)trackDynamicPropertyDidChange:(id)arg1 propertySelector:(SEL)arg2;
- (void)trackDynamicPropertyWillChange:(id)arg1 propertySelector:(SEL)arg2;
- (void)updateActivePlaylistNamesForCurrentLanguage;

@end
