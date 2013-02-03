/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSString, NSDictionary;

@interface NSException : NSObject <NSCopying, NSCoding> {
    NSString *name;
    NSString *reason;
    id reserved;
    NSDictionary *userInfo;
}

+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(void*)arg3;
+ (void)raise:(id)arg1 format:(id)arg2;

- (id)_crashReporterString;
- (BOOL)_installStackTraceKeyIfNeeded;
- (id)callStackReturnAddresses;
- (id)callStackSymbols;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)raise;
- (id)reason;
- (id)userInfo;

@end
