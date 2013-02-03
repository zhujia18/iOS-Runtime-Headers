/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class <APSConnectionDelegate>, NSArray, NSString, NSLock, NSMutableDictionary;

@interface APSConnection : NSObject {
    NSUInteger _connectionPort;
    NSString *_connectionPortName;
    NSUInteger _connectionServerPort;
    struct __CFMachPort { } *_connectionSeverCFMachPort;
    NSArray *_darwinNotificationNames;
    <APSConnectionDelegate> *_delegate;
    BOOL _enableCriticalReliability;
    NSArray *_enabledTopics;
    NSString *_environmentName;
    NSArray *_ignoredTopics;
    NSLock *_lock;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSInteger _serverPID;
    NSMutableDictionary *_subtopics;
}

@property <APSConnectionDelegate> *delegate;
@property(readonly) NSInteger serverPID;

+ (struct __SecIdentity { }*)copyIdentity;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)launchDaemonWithNamedDelegatePort:(id)arg1;

- (void)_connect;
- (void)_connectionServerPortInvalidated;
- (id)_dataForPropertyList:(id)arg1;
- (void)_deliverDarwinNotificationNamed:(id)arg1;
- (void)_deliverMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (void)_deliverPublicToken:(id)arg1;
- (void)_disconnect;
- (void)_sendDarwinNotificationNames;
- (void)_sendEnableCriticalReliability;
- (void)_sendEnabledTopics;
- (void)_sendIgnoredTopics;
- (void)dealloc;
- (id)delegate;
- (BOOL)hasIdentity;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1;
- (id)publicToken;
- (void)removeFromRunLoop;
- (void)scheduleInRunLoop:(id)arg1;
- (NSInteger)serverPID;
- (void)setDelegate:(id)arg1;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (void)setEnabledTopics:(id)arg1;
- (void)setIgnoredTopics:(id)arg1;
- (void)setLaunchingDarwinNotificationNames:(id)arg1;
- (void)setSubtopic:(id)arg1 forEnabledTopic:(id)arg2;

@end
