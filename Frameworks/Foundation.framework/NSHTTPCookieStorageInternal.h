/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject {
    NSRecursiveLock *dataLock;
    BOOL privateBrowsing;
    struct OpaqueCFHTTPCookieStorage { } *privateStorage;
    struct OpaqueCFHTTPCookieStorage { } *storage;
}

- (void)dealloc;
- (id)init;
- (id)initWithStorageLocation:(id)arg1;

@end
