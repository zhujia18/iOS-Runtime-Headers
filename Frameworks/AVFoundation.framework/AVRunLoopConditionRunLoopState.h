/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRunLoopConditionRunLoopState : NSObject {
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_signalSource;
    BOOL _signaled;
}

@property(readonly) __CFRunLoop *runLoop;
@property __CFRunLoopSource *signalSource;
@property BOOL signaled;

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop { }*)arg1;

- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop { }*)arg1;
- (struct __CFRunLoop { }*)runLoop;
- (void)setSignalSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setSignaled:(BOOL)arg1;
- (struct __CFRunLoopSource { }*)signalSource;
- (BOOL)signaled;

@end
