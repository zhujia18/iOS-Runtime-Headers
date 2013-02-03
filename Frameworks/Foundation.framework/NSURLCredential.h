/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSCopying> {
    NSURLCredentialInternal *_internal;
}

+ (id)credentialForTrust:(struct __SecTrust { }*)arg1;
+ (id)credentialWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(NSUInteger)arg3;
+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(NSUInteger)arg3;

- (struct _CFURLCredential { }*)_cfurlcredential;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { }*)arg1;
- (id)certificates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasPassword;
- (NSUInteger)hash;
- (struct __SecIdentity { }*)identity;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(NSUInteger)arg3;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(NSUInteger)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)password;
- (NSUInteger)persistence;
- (id)user;

@end
