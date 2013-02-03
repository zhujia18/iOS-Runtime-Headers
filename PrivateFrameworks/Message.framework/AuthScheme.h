/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface AuthScheme : NSObject {
}

+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (void)initialize;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)schemeWithName:(id)arg1;

- (Class)authenticatorClass;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (NSUInteger)defaultPortForAccount:(id)arg1;
- (BOOL)hasEncryption;
- (id)humanReadableName;
- (id)name;
- (void)release;
- (BOOL)requiresPassword;
- (id)retain;
- (NSUInteger)retainCount;

@end
