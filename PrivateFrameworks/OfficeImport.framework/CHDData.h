/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDResources, CHDDataValuesCollection, CHDFormula;

@interface CHDData : NSObject {
     /* Encoded args for previous method: B8@0:4 */
    NSUInteger mContentFormatId;
    NSUInteger mDataValueIndexCount;
    CHDDataValuesCollection *mDataValues;
    CHDFormula *mFormula;
    EDResources *mResources;
}

+ (id)dataWithDataPointCount:(NSUInteger)arg1 resources:(id)arg2;
+ (id)dataWithResources:(id)arg1;

- (NSUInteger)averageDataPointDecimalCount;
- (id)contentFormat;
- (NSUInteger)contentFormatId;
- (NSUInteger)countOfCellsBeingReferenced;
- (NSUInteger)dataValueIndexCount;
- (id)dataValues;
- (void)dealloc;
- (id)firstValueContentFormatWithWorkbook:(id)arg1;
- (id)formula;
- (id)initWithDataPointCount:(NSUInteger)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isEmpty;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(NSUInteger)arg1;
- (void)setDataValueIndexCount:(NSUInteger)arg1;
- (void)setFormula:(id)arg1 chart:(id)arg2;

@end
