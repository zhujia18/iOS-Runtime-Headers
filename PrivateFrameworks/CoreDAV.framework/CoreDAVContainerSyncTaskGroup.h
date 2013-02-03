/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableDictionary, NSString, NSArray;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup {
    NSArray *_actions;
    Class _appSpecificDataItemClass;
    void *_context;
    NSString *_folderID;
    NSString *_nextCTag;
    NSMutableDictionary *_pathToETag;
    NSInteger _phase;
    NSString *_previousCTag;
}

@property(readonly) void *context;
@property(readonly) NSString *folderID;
@property(readonly) NSString *previousTag;

- (void)_getCTag;
- (void)_getDataPayloads;
- (void)_getETags;
- (id)_initWithFolderID:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 context:(void*)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 delegate:(id)arg7;
- (void)_pushActions;
- (void)containerMultiGetTask:(id)arg1 parsedContents:(id)arg2 error:(id)arg3;
- (void*)context;
- (id)dataContentType;
- (void)dealloc;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (id)description;
- (id)folderID;
- (id)initWithFolderID:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 context:(void*)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 delegate:(id)arg7;
- (id)previousTag;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (void)syncAway;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
