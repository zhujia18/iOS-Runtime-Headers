/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVAccountInfoProvider>;

@interface CoreDAVRequestLogger : NSObject {
    <CoreDAVAccountInfoProvider> *_provider;
}

- (void)dealloc;
- (void)finishCoreDAVResponse;
- (id)initWithProvider:(id)arg1;
- (void)logCoreDAVRequest:(id)arg1;
- (void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(NSInteger)arg2;
- (void)logCoreDAVResponseSnippet:(id)arg1;

@end
