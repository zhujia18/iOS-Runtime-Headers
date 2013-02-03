/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDTableRowProperties, WDTable;

@interface WDTableRow : NSObject {
    NSMutableArray *mCells;
    NSInteger mIndex;
    WDTableRowProperties *mProperties;
    WDTable *mTable;
}

- (id)addCell;
- (id)addCellWithIndex:(NSInteger)arg1;
- (id)cellAt:(NSInteger)arg1;
- (NSInteger)cellCount;
- (id)cellIterator;
- (void)dealloc;
- (NSInteger)index;
- (id)initWithTable:(id)arg1 at:(NSInteger)arg2;
- (id)newCellIterator;
- (id)properties;
- (id)table;

@end
