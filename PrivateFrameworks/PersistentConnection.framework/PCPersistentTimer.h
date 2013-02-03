/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString, NSTimer;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate> {
    BOOL _disableSystemWaking;
    NSTimer *_fireRunLoopTimer;
    double _fireTime;
    double _lastUpdateTime;
    double _minimumEarlyFireProportion;
    struct IONotificationPort { } *_pmNotificationPort;
    NSUInteger _pmNotifier;
    NSUInteger _pmRootDomainConnect;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    NSUInteger _powerAssertionID;
    NSTimer *_preventSleepRunLoopTimer;
    SEL _selector;
    NSString *_serviceIdentifier;
    BOOL _sleepIsImminent;
    double _startTime;
    id _target;
    id _timeChangeSource;
    BOOL _triggerOnGMTChange;
    id _userInfo;
    BOOL _wakeIsScheduled;
}

@property(readonly) NSString *loggingIdentifier;
@property BOOL disableSystemWaking;
@property double minimumEarlyFireProportion;

+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;

- (id)_earlyFireDate;
- (void)_fireTimerFired;
- (id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(BOOL)arg6;
- (double)_nextForcedAlignmentAbsoluteTime;
- (void)_powerChangedMessageType:(NSUInteger)arg1 notificationID:(void*)arg2;
- (void)_preventSleepFired;
- (id)_scheduleWakeDate;
- (void)_setPowerMonitoringEnabledForRunLoop:(id)arg1 mode:(id)arg2;
- (void)_setSignificantTimeChangeMonitoringEnabledForRunLoop:(id)arg1 mode:(id)arg2;
- (void)_updateTimers;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)disableSystemWaking;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (id)loggingIdentifier;
- (double)minimumEarlyFireProportion;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1;
- (void)setDisableSystemWaking:(BOOL)arg1;
- (void)setMinimumEarlyFireProportion:(double)arg1;
- (id)userInfo;

@end
