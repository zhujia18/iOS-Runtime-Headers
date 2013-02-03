/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSKeyValueProperty, NSPointerArray;

@interface NSKeyValueObservance : NSObject {
    struct auto_weak_callback_block { 
        struct auto_weak_callback_block {} *next; 
        int (*callback_function)(); 
        void *arg1; 
        void *arg2; 
    BOOL _cachedIsShareable;
    NSUInteger _cachedUnrotatedHashComponent;
    void *_context;
    NSPointerArray *_observationInfos;
    NSObject *_observer;
    } _observerWentAwayCallback;
    NSUInteger _options;
    NSObject *_originalObservable;
    NSKeyValueProperty *_property;
    NSInteger _retainCountMinusOne;
}

- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(NSUInteger)arg3 context:(void*)arg4 originalObservable:(id)arg5;
- (void)dealloc;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (oneway void)release;
- (id)retain;
- (NSUInteger)retainCount;

@end
