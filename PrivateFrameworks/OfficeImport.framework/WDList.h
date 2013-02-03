/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDListDefinition, NSMutableArray, WDDocument;

@interface WDList : NSObject {
    WDDocument *mDocument;
    NSInteger mIndex;
    NSMutableArray *mLevelOverrides;
    WDListDefinition *mListDefinition;
}

- (id)addLevelOverride;
- (void)dealloc;
- (id)document;
- (NSInteger)index;
- (id)initWithDocument:(id)arg1 listDefinition:(id)arg2;
- (id)levelOverrideAt:(NSInteger)arg1;
- (NSInteger)levelOverrideCount;
- (id)levelOverrides;
- (id)listDefinition;
- (NSInteger)listId;
- (void)setIndex:(NSInteger)arg1;

@end
