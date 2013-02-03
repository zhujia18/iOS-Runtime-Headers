/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, NSArray;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol> {
    struct timeval { 
        NSInteger tv_sec; 
        NSInteger tv_usec; 
    NSInteger _cpuType;
    NSArray *_envVars;
    NSString *_firstArg;
    NSString *_name;
    BOOL _needTaskPortDealloc;
    NSInteger _pid;
    NSInteger _ppid;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    } _startTime;
    NSUInteger _task;
}

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(NSInteger)arg1;
+ (NSInteger)processParentId:(NSInteger)arg1;

- (id)_nameFromCommandLine:(NSInteger)arg1;
- (NSInteger)compare:(id)arg1;
- (NSInteger)compareByName:(id)arg1;
- (NSInteger)compareByUserAppName:(id)arg1;
- (NSInteger)cpuType;
- (void)dealloc;
- (id)description;
- (id)envVars;
- (void)finalize;
- (id)firstArgument;
- (NSUInteger)hash;
- (id)init;
- (id)initWithPid:(NSInteger)arg1;
- (id)initWithTask:(NSUInteger)arg1;
- (BOOL)isApp;
- (BOOL)isCFM;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMachO;
- (BOOL)isNative;
- (BOOL)isRunning;
- (id)name;
- (NSInteger)pid;
- (NSInteger)ppid;
- (id)procTableName;
- (id)realAppName;
- (id)requestedAppName;
- (BOOL)signal:(NSInteger)arg1;
- (struct timeval { NSInteger x1; NSInteger x2; })startTime;
- (NSUInteger)task;
- (BOOL)terminate;
- (void)update;
- (id)userAppName;

@end
