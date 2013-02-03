/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WMTableStyle, WDTable, WMTableColumnInfo, WMBordersProperty;

@interface WMTableMapper : CMMapper {
    WMTableColumnInfo *mColumnInfo;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WDTable *mWdTable;
}

- (id)columnInfo;
- (id)createColumnInfo;
- (id)createStopArrayForRow:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithWDTable:(id)arg1 parent:(id)arg2;
- (id)insideBorders;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setInsideBorders:(id)arg1;

@end
