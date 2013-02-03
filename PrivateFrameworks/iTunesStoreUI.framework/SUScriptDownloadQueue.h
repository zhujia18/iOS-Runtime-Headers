/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, SUPreOrderQueue, SSDownloadQueue, NSSet, NSString;

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadQueueObserver, SUPreOrderQueueObserver> {
    NSSet *_downloadKinds;
    SSDownloadQueue *_downloadQueue;
    NSArray *_downloads;
    SUPreOrderQueue *_preOrderQueue;
    NSString *_queueType;
}

@property(getter=_downloads,retain) NSArray *downloads; /* unknown property attribute: Sset_downloads: */
@property(getter=_queueType,retain) NSString *queueType; /* unknown property attribute: Sset_queueType: */

+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)_checkQueues;
- (id)_className;
- (id)_downloads;
- (void)_handleDownloadsChanged;
- (id)_ntsCopyScriptDownloads;
- (void)_ntsResetDownloads;
- (void)_ntsTearDownQueues;
- (id)_queueType;
- (void)checkQueue;
- (void)dealloc;
- (void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;
- (void)downloadQueue:(id)arg1 downloadStatesChangedAtIndexes:(id)arg2;
- (void)downloadQueuePreOrdersChanged:(id)arg1;
- (void)finalizeForWebScript;
- (id)initWithQueueType:(id)arg1;
- (void)preOrderQueueChanged:(id)arg1;
- (void)set_downloads:(id)arg1;
- (void)set_queueType:(id)arg1;

@end
