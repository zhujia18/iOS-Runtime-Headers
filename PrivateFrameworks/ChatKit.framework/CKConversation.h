/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableDictionary, NSArray, NSString, CKService, CKMessage, NSMutableArray;

@interface CKConversation : NSObject {
    NSMutableArray *_failedMessages;
    NSInteger _groupAddStack;
    NSInteger _groupID;
    NSMutableDictionary *_groupMessages;
    BOOL _hasPlaceholder;
    CKMessage *_latestIncomingMessage;
    NSInteger _limitToLoad;
    NSMutableArray *_messages;
    BOOL _moreMessagesToLoad;
    NSString *_name;
    NSArray *_names;
    NSMutableArray *_pendingMessages;
    CKMessage *_placeholderMessage;
    NSMutableArray *_queuedGroupMessages;
    NSArray *_recipients;
    CKService *_service;
    NSInteger _unreadCount;
    BOOL _updatesDisabled;
}

@property(readonly) NSMutableArray *failedMessages;
@property(readonly) CKService *service;
@property(retain) CKMessageComposition *unsentComposition;
@property BOOL updatesDisabled;

- (void)_addGroupMessage:(id)arg1;
- (void)_beginGroupAdd;
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1;
- (NSInteger)_endGroupAdd:(BOOL)arg1;
- (void)_postUpdate;
- (void)_recalculateUnreadCounts;
- (void)_reloadMessagesToLimit;
- (void)_setPlaceholderMessage:(id)arg1;
- (id)_trulyLatestMessage;
- (void*)abRecord;
- (NSInteger)addMessage:(id)arg1 incrementUnreadCount:(BOOL)arg2;
- (NSInteger)compareByDateDescending:(id)arg1;
- (id)date;
- (void)dealloc;
- (void)deleteAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (id)failedMessages;
- (NSInteger)groupID;
- (id)groupMessageWithAssociationID:(NSInteger)arg1;
- (BOOL)hasUnreadMessages;
- (NSInteger)identifier;
- (id)initWithGroupID:(NSInteger)arg1 service:(id)arg2;
- (BOOL)isEmpty;
- (BOOL)isPlaceholder;
- (id)latestIncomingMessage;
- (id)latestMessage;
- (void)loadAllMessages;
- (void)loadLastMessage;
- (void)loadMoreMessages;
- (void)markAllMessagesAsRead;
- (id)messages;
- (BOOL)moreMessagesToLoad;
- (id)name;
- (id)pendingMessages;
- (void)pendingMessagesTotalMessages:(NSInteger*)arg1 percentComplete:(float*)arg2;
- (id)placeholderMessage;
- (NSInteger)propertyType;
- (id)recipient;
- (id)recipients;
- (void)removeAllMessages;
- (void)removeMessage:(id)arg1;
- (void)resetCaches;
- (void)resetPendingMessages;
- (id)service;
- (void)setName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setUnreadCount:(NSInteger)arg1;
- (void)setUnsentComposition:(id)arg1;
- (void)setUpdatesDisabled:(BOOL)arg1;
- (NSInteger)unreadCount;
- (id)unsentComposition;
- (void)updateMessage:(id)arg1;
- (BOOL)updatesDisabled;

@end
