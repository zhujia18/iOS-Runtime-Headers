/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSDictionary, NSArray;

@interface SPBundleManager : NSObject {
    NSArray *_datastores;
    NSDictionary *_domainMap;
    struct dispatch_queue_s {} **_queues;
    NSArray *_searchBundles;
}

@property(readonly) NSArray *datastores;
@property(readonly) NSArray *searchBundles;

+ (id)sharedManager;

- (void)_loadSearchBundles;
- (id)datastoreForDomain:(NSUInteger)arg1;
- (id)datastores;
- (void)dealloc;
- (id)domainMap;
- (struct dispatch_queue_s { }*)queueForDatastore:(id)arg1;
- (void)resetDatastores;
- (id)searchBundles;

@end
