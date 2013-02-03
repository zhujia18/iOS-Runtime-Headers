/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDPane, EDColumnInfoCollection, EDRowBlocks, SFUPointerKeyDictionary, EDMergedCellCollection, EDReference, EDCollection, EDWarnings;

@interface EDWorksheet : EDSheet {
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    EDCollection *mHyperlinks;
    EDReference *mImplicitCellArea;
    EDReference *mMaxCellReferencedInFormulas;
    NSUInteger mMaxColumnOutlineLevel;
    NSUInteger mMaxRowOutlineLevel;
    EDMergedCellCollection *mMergedCells;
    SFUPointerKeyDictionary *mMergedCols;
    SFUPointerKeyDictionary *mMergedRows;
    EDPane *mPane;
    EDCollection *mPivotTables;
    EDRowBlocks *mRowBlocks;
    EDCollection *mTables;
    EDWarnings *mWorksheetWarnings;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mFitToPage;
}

- (id)columnInfos;
- (id)conditionalFormattings;
- (double)defaultColumnWidth;
- (unsigned short)defaultRowHeight;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)fitToPage;
- (BOOL)hasMergedCol;
- (BOOL)hasMergedRow;
- (id)hyperlinks;
- (id)implicitCellArea;
- (BOOL)isColMerged:(NSUInteger)arg1;
- (BOOL)isRowMerged:(NSUInteger)arg1;
- (id)maxCellReferencedInFormulas;
- (NSUInteger)maxColumnOutlineLevel;
- (NSUInteger)maxRowOutlineLevel;
- (id)mergedCells;
- (id)mergedColRef:(NSUInteger)arg1;
- (id)mergedRowRef:(NSUInteger)arg1;
- (id)pane;
- (id)pivotTables;
- (void)reduceMemoryIfPossible;
- (id)rowBlocks;
- (void)setDefaultColumnWidth:(double)arg1;
- (void)setDefaultRowHeight:(unsigned short)arg1;
- (void)setFitToPage:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setImplicitCellArea:(id)arg1;
- (void)setMaxColumnOutlineLevel:(NSUInteger)arg1;
- (void)setMaxRowOutlineLevel:(NSUInteger)arg1;
- (void)setMergedColsRef:(id)arg1 from:(NSUInteger)arg2 to:(NSUInteger)arg3;
- (void)setMergedRowsRef:(id)arg1 from:(NSUInteger)arg2 to:(NSUInteger)arg3;
- (void)setPane:(id)arg1;
- (void)setup;
- (id)tables;
- (void)teardown;
- (void)updateMaxColumnOutlineLevelIfNeeded:(NSUInteger)arg1;
- (void)updateMaxRowOutlineLevelIfNeeded:(NSUInteger)arg1;
- (id)worksheetWarnings;

@end
