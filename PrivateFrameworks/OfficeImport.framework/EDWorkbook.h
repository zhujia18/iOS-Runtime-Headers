/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ECMappingContext, OADDrawingGroup, OADTheme, EDResources, NSMutableArray, EDProcessors, ESDContainer, EDReference, NSString, EDWarnings, NSDate;

@interface EDWorkbook : OCDDocument {
     /* Encoded args for previous method: @16@0:4I8B12 */
     /* Encoded args for previous method: @12@0:4B8 */
    NSUInteger mActiveSheetIndex;
    NSUInteger mDateBase;
    NSDate *mDateBaseDate;
    OADDrawingGroup *mDrawingGroup;
    ESDContainer *mEscherDrawingGroup;
    NSString *mFileName;
    ECMappingContext *mMappingContext;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    NSUInteger mRealSheetCount;
    EDResources *mResources;
    NSMutableArray *mSheets;
    NSString *mTemporaryDirectory;
    OADTheme *mTheme;
    EDReference *mVisibleRange;
    EDWarnings *mWarnings;
}

- (id)activeSheet;
- (NSUInteger)activeSheetIndex;
- (void)addOtherResources:(id)arg1;
- (void)addSheet:(id)arg1;
- (void)applyProcessors;
- (NSUInteger)dateBase;
- (id)dateBaseDate;
- (void)dealloc;
- (id)drawingGroup;
- (id)escherDrawingGroup;
- (id)fileName;
- (NSUInteger)indexOfSheet:(id)arg1;
- (NSUInteger)indexOfSheetWithName:(id)arg1;
- (id)init;
- (id)initWithFileName:(id)arg1;
- (id)initWithStringOptimization:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (id)mappingContext;
- (id)processors;
- (void)reduceMemoryIfPossible;
- (void)removeWorksheetAtIndex:(NSUInteger)arg1;
- (id)resources;
- (void)setActiveSheet:(id)arg1;
- (void)setActiveSheetIndex:(NSUInteger)arg1;
- (void)setDateBase:(NSUInteger)arg1;
- (void)setEscherDrawingGroup:(id)arg1;
- (void)setMappingContext:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setTemporaryDirectory:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setVisibleRange:(id)arg1;
- (id)sheetAtIndex:(NSUInteger)arg1 loadIfNeeded:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
- (id)sheetAtIndex:(NSUInteger)arg1;
- (NSUInteger)sheetCount;
- (id)temporaryDirectory;
- (id)theme;
- (void)trashSheetAtIndex:(NSUInteger)arg1;
- (id)visibleRange;
- (id)warnings;
- (id)workbookName;

@end
