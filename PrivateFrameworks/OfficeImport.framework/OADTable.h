/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTableProperties, OADTableGrid, NSMutableArray;

@interface OADTable : OADDrawable {
    OADTableGrid *mGrid;
    OADTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)addRow;
- (id)cellAtPos:(struct OADTMatrixPos { NSInteger x1; NSInteger x2; })arg1;
- (void)dealloc;
- (id)grid;
- (id)init;
- (id)masterCellOfPos:(struct OADTMatrixPos { NSInteger x1; NSInteger x2; })arg1;
- (struct OADTMatrixPos { NSInteger x1; NSInteger x2; })masterPosOfPos:(struct OADTMatrixPos { NSInteger x1; NSInteger x2; })arg1;
- (id)rowAtIndex:(NSUInteger)arg1;
- (NSUInteger)rowCount;
- (void)setParentTextListStyle:(id)arg1;
- (id)tableProperties;

@end
