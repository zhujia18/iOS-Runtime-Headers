/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSFileHandle;

@interface WebCoreResourceHandleAsDelegate : NSObject {
    struct ResourceHandle { int (**x1)(); NSInteger x2; struct OwnPtr<WebCore::ResourceHandleInternal> { 
            struct ResourceHandleInternal {} *m_ptr; 
    id m_converter;
    BOOL m_finishedLoadingDataIntoConverter;
        } x3; } *m_handle;
    NSFileHandle *m_quicklookFileHandle;
}

- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willStopBufferingData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)detachHandle;
- (id)initWithHandle:(struct ResourceHandle { int (**x1)(); NSInteger x2; struct OwnPtr<WebCore::ResourceHandleInternal> { struct ResourceHandleInternal {} *x_3_1_1; } x3; }*)arg1;

@end
