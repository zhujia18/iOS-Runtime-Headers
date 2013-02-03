/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReference;

@interface EMCellMapper : CMMapper {
    NSInteger columnSpan;
    double columnWidth;
    struct EDCellHeader { unsigned short x1; NSUInteger x2; } *edCell;
    EDReference *edMergedCellReference;
    BOOL firstCellFlag;
    NSInteger firstColumn;
    NSInteger lastColumn;
    NSInteger rowNumber;
    BOOL spreadLeftFlag;
}

- (void)adjustColumnSpanForGrid:(double*)arg1 columnCount:(NSUInteger)arg2 nextCell:(struct EDCellHeader { unsigned short x1; NSUInteger x2; }*)arg3 withState:(id)arg4;
- (NSInteger)columnSpan;
- (double)columnWidth;
- (NSInteger)firstColumn;
- (id)initWithEDCell:(struct EDCellHeader { unsigned short x1; NSUInteger x2; }*)arg1 rowInfo:(struct EDRowInfo { NSUInteger x1; NSUInteger x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; }*)arg2 parent:(id)arg3 state:(id)arg4;
- (id)initWithParent:(id)arg1;
- (BOOL)isCellEmpty;
- (BOOL)isCellMerged;
- (BOOL)isCellSpreading:(id)arg1;
- (BOOL)isFirstCell;
- (NSInteger)lastColumn;
- (void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)mapHyperlinkAt:(id)arg1;
- (void)mapRowColSpansAt:(id)arg1 withState:(id)arg2;
- (void)resetColumnSpan:(NSInteger)arg1;
- (void)setFirstCellFlag;
- (void)setFirstColumn:(NSInteger)arg1;
- (void)setLastColumn:(NSInteger)arg1;

@end
