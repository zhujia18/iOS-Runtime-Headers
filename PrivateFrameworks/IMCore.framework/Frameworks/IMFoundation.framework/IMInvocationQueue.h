/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSProtocolChecker, NSMutableArray;

@interface IMInvocationQueue : NSObject {
    unsigned int _holdQueue : 1;
    id _delegate;
    double _dequeueRate;
    NSMutableArray *_options;
    NSProtocolChecker *_protocolChecker;
    NSMutableArray *_queue;
    id _target;
}

- (BOOL)_acceptsOptions:(NSUInteger)arg1;
- (void)_checkQueue;
- (id)_dequeueInvocation;
- (NSInteger)_enqueueInvocation:(id)arg1 options:(NSUInteger)arg2;
- (void)_holdQueueNotification:(id)arg1;
- (BOOL)_insertInvocation:(id)arg1 options:(NSUInteger)arg2;
- (BOOL)_invokeInvocation:(id)arg1;
- (NSInteger)_maxQueueLimitSize;
- (NSInteger)_numberOfLimitedMessagesInQueue;
- (NSUInteger)_optionsForInvocation:(id)arg1;
- (void)_releaseQueueNotification:(id)arg1;
- (BOOL)_replaceSimilarInvocation:(id)arg1;
- (void)_setQueueTimer;
- (void)_stepQueueNotification:(id)arg1;
- (NSUInteger)count;
- (void)dealloc;
- (id)delegate;
- (double)dequeueRate;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)invokeAll;
- (BOOL)isEmpty;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)peek;
- (id)protocol;
- (void)removeAllInvocations;
- (void)setDelegate:(id)arg1;
- (void)setDequeueRate:(double)arg1;
- (void)setProtocol:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
