/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADMiterLineJoin : OADLineJoin {
    unsigned int mIsLimitOverridden : 1;
    float mLimit;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDefaults;
- (BOOL)isLimitOverridden;
- (float)limit;
- (void)setLimit:(float)arg1;

@end
