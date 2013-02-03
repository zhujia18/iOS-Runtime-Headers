/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDSheet, CHDDefaultTextProperties, NSMutableArray, CHDTitle, EDWorkbook, CHDPlotArea, CHDLegend, OADGraphicProperties, CHDView3D;

@interface CHDChart : OADGraphic <OADDrawableContainer> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
    OADGraphicProperties *mBackWallGraphicProperties;
    OADGraphicProperties *mChartAreaGraphicProperties;
    NSInteger mChartDirection;
    CHDDefaultTextProperties *mDefaultTextProperties;
    NSInteger mDisplayBlankCellsAs;
    NSMutableArray *mDrawables;
    EDWorkbook *mExternalData;
    OADGraphicProperties *mFloorGraphicProperties;
    CHDLegend *mLegend;
    } mLogicalBounds;
    CHDPlotArea *mPlotArea;
    EDSheet *mSheet;
    OADGraphicProperties *mSideWallGraphicProperties;
    NSInteger mStyleId;
    CHDTitle *mTitle;
    CHDView3D *mView3D;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAutoTitleDeleted;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDirectionChanged;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mMSGraph;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mPlotVisibleCellsOnly;
}

+ (id)binaryEffects:(BOOL)arg1;

- (void)addChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)backWallGraphicProperties;
- (id)chartAreaGraphicProperties;
- (id)childAtIndex:(NSUInteger)arg1;
- (NSUInteger)childCount;
- (id)children;
- (void)dealloc;
- (id)defaultContentFormat;
- (id)defaultDataLabelFont;
- (NSUInteger)defaultFontIndex;
- (id)defaultFontWithResources:(id)arg1;
- (NSInteger)defaultLabelPosition;
- (id)defaultSeriesTitleFont;
- (id)defaultTextFont;
- (id)defaultTextProperties;
- (id)defaultThemeFont;
- (NSInteger)direction;
- (NSInteger)displayBlankAs;
- (id)externalData;
- (id)floorGraphicProperties;
- (id)init;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)is3D;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAutoTitleDeleted;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isBinary;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDirectionChanged;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isMSGraph;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isPlotVisibleCellsOnly;
- (id)legend;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logicalBounds;
- (id)mainType;
- (id)plotArea;
- (id)processors;
- (NSUInteger)seriesCount;
- (void)setAutoTitleDeleted:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setBackWallGraphicProperties:(id)arg1;
- (void)setChartAreaGraphicProperties:(id)arg1;
- (void)setDefaultTextProperties:(id)arg1;
- (void)setDirection:(NSInteger)arg1;
- (void)setDirectionChanged:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setDisplayBlankAs:(NSInteger)arg1;
- (void)setExternalData:(id)arg1;
- (void)setFloorGraphicProperties:(id)arg1;
- (void)setLegend:(id)arg1;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMSGraph:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setPlotArea:(id)arg1;
- (void)setPlotVisibleCellsOnly:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setSheet:(id)arg1;
- (void)setSideWallGraphicProperties:(id)arg1;
- (void)setStyleId:(NSInteger)arg1;
- (void)setTitle:(id)arg1;
- (void)setView3D:(id)arg1;
- (id)sheet;
- (id)sideWallGraphicProperties;
- (NSInteger)styleId;
- (id)styleMatrix;
- (id)title;
- (id)view3D;
- (id)workbook;

@end
