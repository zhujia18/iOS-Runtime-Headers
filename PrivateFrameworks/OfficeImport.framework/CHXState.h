/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCPPackagePart, EDResources, CHDChartType, CHDSeries, EXOfficeArtState, CHDChart, OADParagraphProperties, <CHAutoStyling>;

@interface CHXState : NSObject {
    <CHAutoStyling> *mAutoStyling;
    CHDChart *mChart;
    OCPPackagePart *mChartPart;
    CHDChartType *mCurrentChartType;
    CHDSeries *mCurrentSeries;
    OADParagraphProperties *mDefaultTextProperties;
    BOOL mDefaultTextPropertiesHaveExplicitFontSize;
    EXOfficeArtState *mDrawingState;
    EDResources *mResources;
}

- (id)autoStyling;
- (id)chart;
- (id)chartPart;
- (id)currentChartType;
- (id)currentSeries;
- (void)dealloc;
- (id)defaultTextProperties;
- (id)drawingState;
- (id)exState;
- (id)initWithDrawingState:(id)arg1;
- (void)popTitleTextProperties;
- (void)pushTitleTextProperties:(BOOL)arg1;
- (id)resources;
- (void)setChart:(id)arg1;
- (void)setChartPart:(id)arg1;
- (void)setCurrentChartType:(id)arg1;
- (void)setCurrentSeries:(id)arg1;
- (void)setDefaultTextProperties:(id)arg1;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)arg1;
- (void)setResources:(id)arg1;

@end
