/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, NSString, OADTableStyle;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
    BOOL mBandColumn;
    BOOL mBandRow;
    NSArray *mEffects;
    BOOL mFirstColumn;
    BOOL mFirstRow;
    BOOL mLastColumn;
    BOOL mLastRow;
    BOOL mRightToLeft;
    OADTableStyle *mStyle;
    NSString *mStyleId;
}

+ (id)defaultProperties;

- (BOOL)bandColumn;
- (BOOL)bandRow;
- (void)dealloc;
- (id)effects;
- (BOOL)firstColumn;
- (BOOL)firstRow;
- (BOOL)hasBandsNormalToDir:(NSInteger)arg1;
- (BOOL)hasEffects;
- (BOOL)hasVectorNormalToDir:(NSInteger)arg1 atExtremePos:(NSInteger)arg2;
- (id)initWithDefaults;
- (BOOL)lastColumn;
- (BOOL)lastRow;
- (BOOL)rightToLeft;
- (void)setBandColumn:(BOOL)arg1;
- (void)setBandRow:(BOOL)arg1;
- (void)setEffects:(id)arg1;
- (void)setFirstColumn:(BOOL)arg1;
- (void)setFirstRow:(BOOL)arg1;
- (void)setLastColumn:(BOOL)arg1;
- (void)setLastRow:(BOOL)arg1;
- (void)setRightToLeft:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleId:(id)arg1;
- (id)style;
- (id)styleId;

@end
