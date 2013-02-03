/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString, NSData, NSDictionary;

@interface MCSCEPPayload : MCCertificatePayload {
    NSArray *_CACaps;
    NSData *_CAFingerprint;
    NSString *_CAInstanceName;
    NSString *_URLString;
    NSString *_challenge;
    NSUInteger _keySize;
    NSUInteger _retries;
    NSUInteger _retryDelay;
    NSArray *_subject;
    NSDictionary *_subjectAltName;
    NSInteger _usageFlags;
}

@property(readonly) NSArray *CACaps;
@property(readonly) NSData *CAFingerprint;
@property(readonly) NSString *CAInstanceName;
@property(readonly) NSString *URLString;
@property(readonly) NSString *challenge;
@property(readonly) NSArray *subject;
@property(readonly) NSDictionary *subjectAltName;
@property(readonly) NSUInteger keySize;
@property(readonly) NSUInteger retries;
@property(readonly) NSUInteger retryDelay;
@property(readonly) NSInteger usageFlags;

+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;
+ (id)typeStrings;

- (id)CACaps;
- (id)CAFingerprint;
- (id)CAInstanceName;
- (id)URLString;
- (id)challenge;
- (struct __SecCertificate { }*)copyCertificate;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (BOOL)isIdentity;
- (BOOL)isRoot;
- (NSUInteger)keySize;
- (NSUInteger)retries;
- (NSUInteger)retryDelay;
- (id)stubDictionary;
- (id)subject;
- (id)subjectAltName;
- (NSInteger)usageFlags;

@end
