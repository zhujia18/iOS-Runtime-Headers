/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSConditionLock, <VSRecognitionResultHandlingThreadDelegate>, NSMutableArray;

@interface VSRecognitionResultHandlingThread : NSObject {
    struct { 
        unsigned int running : 1; 
        unsigned int delegateDidHandleResults : 1; 
        unsigned int valid : 1; 
    <VSRecognitionResultHandlingThreadDelegate> *_delegate;
    NSConditionLock *_lock;
    NSMutableArray *_requests;
    } _resultHandlingFlags;
}

- (void)_handleRequests;
- (void)_notifyRequestHandled:(id)arg1;
- (void)dealloc;
- (void)handleResults:(id)arg1 withHandler:(id)arg2;
- (id)init;
- (void)invalidate;
- (void)setDelegate:(id)arg1;

@end
