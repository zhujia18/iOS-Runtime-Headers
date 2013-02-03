/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSMutableDictionary, AVCallbackRegistry;

@interface AVCMNotificationDispatcher : NSObject {
    AVCallbackRegistry *_callbackRegistry;
    struct opaqueCMNotificationCenter { } *_cmNotificationCenter;
    NSMutableDictionary *_listenerObjectsPassedToFig;
    struct dispatch_queue_s { } *_listenerObjectsQueue;
}

@property(readonly) opaqueCMNotificationCenter *CMNotificationCenter;

+ (void)initialize;
+ (id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;

- (struct opaqueCMNotificationCenter { }*)CMNotificationCenter;
- (id)_callbackRegistry;
- (void)addListenerWithWeakReference:(id)arg1 callback:(int (*)())arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4 flags:(unsigned long)arg5;
- (void)dealloc;
- (void)finalize;
- (id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter { }*)arg1;
- (void)removeListenerWithWeakReference:(id)arg1 callback:(int (*)())arg2 name:(struct __CFString { }*)arg3 object:(const void*)arg4;

@end
