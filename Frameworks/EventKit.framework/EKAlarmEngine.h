/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperationQueue, EKAlarmEngineOperation, NSTimer;

@interface EKAlarmEngine : NSObject {
    struct CalDatabase { struct __CFRuntimeBase { 
            NSUInteger _cfisa; 
            unsigned char _cfinfo[4]; 
        } x1; NSInteger x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
     /* Encoded args for previous method: @12@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BBII^{__CFString}ii^{__CFString}}8 */
    EKAlarmEngineOperation *_currentOp;
        } x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; void*x8; NSUInteger x9; NSUInteger x10; struct __CFString {} *x11; NSInteger x12; NSInteger x13; struct __CFString {} *x14; } *_database;
    BOOL _pendingChanges;
    NSOperationQueue *_queue;
    NSTimer *_syncTimer;
}

- (void)_eventStoreChanged:(id)arg1;
- (void)_killSyncTimer;
- (void)_resetSyncTimer;
- (void)_syncTimerFired:(id)arg1;
- (void)_timeZoneChanged:(id)arg1;
- (void)_update;
- (void)dealloc;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { NSUInteger x_1_1_1; unsigned char x_1_1_2[4]; } x1; NSInteger x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct _opaque_pthread_mutex_t { long x_6_1_1; BOOL x_6_1_2[40]; } x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; void*x8; NSUInteger x9; NSUInteger x10; struct __CFString {} *x11; NSInteger x12; NSInteger x13; struct __CFString {} *x14; }*)arg1;
- (void)reschedule;
- (void)start;
- (void)stop;
- (void)syncDidEnd;
- (void)syncDidStart;

@end
