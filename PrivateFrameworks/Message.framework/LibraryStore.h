/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageLibrary, NSMutableSet, MessageCriterion;

@interface LibraryStore : MailMessageStore {
    MessageCriterion *_criterion;
    double _lastUpdated;
    MessageLibrary *_library;
    BOOL _mailboxUnreadCountUpdatePending;
    NSMutableSet *_memberMessageIDs;
    NSUInteger _messageAvailabilityCount;
    NSUInteger _openOptions;
    NSUInteger _serverMessageCount;
    NSUInteger _serverUnreadCount;
}

+ (id)_storeCacheMapTable;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (NSUInteger)defaultLoadOptions;
+ (void)initialize;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (BOOL)storeAtPathIsWritable:(id)arg1;
+ (id)storeWithCriterion:(id)arg1;
+ (id)storeWithMailbox:(id)arg1;

- (id)URLString;
- (void)_addInvocationToQueue:(id)arg1;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_copyDataFromMimePart:(id)arg1 threshold:(NSUInteger)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (id)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3;
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)_flushAllCachesLocking:(BOOL)arg1;
- (void)_flushAllMessageData;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (void)_newMessagesAvailable:(id)arg1;
- (void)_rebuildTableOfContentsSynchronously;
- (void)_setNeedsAutosave;
- (void)_updateMailboxUnreadCount;
- (void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(BOOL)arg2;
- (BOOL)allowsAppend;
- (NSInteger)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3;
- (BOOL)canCompact;
- (void)compactMessages:(id)arg1;
- (struct __CFSet { }*)copyLibraryIDsWithoutConversationHashes;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(NSUInteger)arg2;
- (id)copyMessagesMatchingText:(id)arg1 options:(NSUInteger)arg2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(NSUInteger)arg1 limit:(NSUInteger)arg2;
- (id)copyOfAllMessagesWithOptions:(NSUInteger)arg1;
- (id)copyOfMessageInfos;
- (id)copyOfMessagesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 options:(NSUInteger)arg2 generation:(NSUInteger*)arg3;
- (id)copyOfMessagesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 options:(NSUInteger)arg2;
- (id)criterion;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (void)dealloc;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(NSInteger)arg1 compact:(BOOL)arg2;
- (void)doCompact;
- (id)filterMessagesByMembership:(id)arg1;
- (void)forceResync;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 usePartDatas:(BOOL)arg5;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (void)handleMessageFlagsChanged:(id)arg1;
- (void)handleMessagesAdded:(id)arg1;
- (void)handleMessagesCompacted:(id)arg1;
- (BOOL)hasMessageForAccount:(id)arg1;
- (NSUInteger)indexOfMessage:(id)arg1;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;
- (id)initWithCriterion:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (id)library;
- (void)libraryFinishedSendingMessages;
- (NSUInteger)locationOfMessage:(id)arg1;
- (id)mailbox;
- (void)messageFlagsChanged:(id)arg1;
- (id)messageForMessageID:(id)arg1;
- (id)messageWithLibraryID:(NSUInteger)arg1;
- (void)messagesAdded:(id)arg1;
- (void)messagesCompacted:(id)arg1;
- (void)messagesWereAdded:(id)arg1 forIncrementalLoading:(BOOL)arg2;
- (id)mutableCopyOfAllMessages;
- (void)newMessagesAvailable:(id)arg1;
- (NSUInteger)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (void)openAsynchronouslyWithOptions:(NSUInteger)arg1;
- (void)openSynchronously;
- (void)purgeMessages:(id)arg1;
- (void)purgeMessagesBeyond:(NSUInteger)arg1;
- (id)serverSearchResults;
- (void)setData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setLibrary:(id)arg1;
- (void)setNumberOfAttachments:(NSUInteger)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (BOOL)shouldCancel;
- (NSUInteger)totalCount;
- (NSUInteger)unreadCount;
- (void)updateMetadata;
- (void)updateUserInfoToLatestValues;
- (void)writeUpdatedMessageDataToDisk;

@end
