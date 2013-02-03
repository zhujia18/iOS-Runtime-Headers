/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CHBGraphicProperties : NSObject {
     /* Encoded args for previous method: @20@0:4r^{XlChartMarkerStyle=^^?i{CsColour=SSSS}{CsColour=SSSS}ISSBBB}8B12@16 */
     /* Encoded args for previous method: @20@0:4r^{XlChartFillStyle=^^?{CsColour=SSSS}{CsColour=SSSS}SSSBBB}8r^{XlChartPicF=^^?{XlHeader=IsC}diiiC}12@16 */
     /* Encoded args for previous method: @20@0:4r^{XlChartMarkerStyle=^^?i{CsColour=SSSS}{CsColour=SSSS}ISSBBB}8B12@16 */
     /* Encoded args for previous method: @16@0:4r^{XlChartSeriesFormat=^^?^{XlChartLineStyle}^{XlChartFillStyle}^{XlChartMarkerStyle}^{XlChartPicF}iSSSiBBBBBBBBBB}8@12 */
     /* Encoded args for previous method: @16@0:4^{XlChartFrameType=^^?ffffiiii^{XlChartLineStyle}^{XlChartFillStyle}^{XlChartPicF}BBB}8@12 */
     /* Encoded args for previous method: @12@0:4r^{XlChartLineStyle=^^?{CsColour=SSSS}iiSBBBfi}8 */
     /* Encoded args for previous method: @20@0:4@8r^{XlChartLineStyle=^^?{CsColour=SSSS}iiSBBBfi}12r^{XlChartFillStyle=^^?{CsColour=SSSS}{CsColour=SSSS}SSSBBB}16 */
}

+ (NSInteger)lineWeightEnumFromWidth:(float)arg1;
+ (id)mapAssociatedEscherObjectstate:(id)arg1;
+ (id)mapFillStyle:(const struct XlChartFillStyle { int (**x1)(); struct CsColour { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; } x2; struct CsColour { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned short x_3_1_4; } x3; unsigned short x4; unsigned short x5; unsigned short x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; void*x8; void*x9; }*)arg1 xlPictureFormat:(const struct XlChartPicF { int (**x1)(); struct XlHeader { NSUInteger x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; double x3; NSInteger x4; NSInteger x5; NSInteger x6; unsigned char x7; }*)arg2 state:(id)arg3;
+ (id)mapFillStyleForMarker:(const struct XlChartMarkerStyle { int (**x1)(); NSInteger x2; struct CsColour { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned short x_3_1_4; } x3; struct CsColour { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned short x_4_1_4; } x4; NSUInteger x5; unsigned short x6; unsigned short x7; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x8; void*x9; void*x10; }*)arg1 complex:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2 state:(id)arg3;
+ (id)mapPresetDashFromPattern:(NSInteger)arg1;
+ (NSInteger)oaPresetDashTypeFromLinePatternEnum:(NSInteger)arg1;
+ (id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const struct XlChartLineStyle { int (**x1)(); struct CsColour { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; } x2; NSInteger x3; NSInteger x4; unsigned short x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; void*x7; void*x8; float x9; NSInteger x10; }*)arg2 xlFillStyle:(const struct XlChartFillStyle { int (**x1)(); struct CsColour { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; } x2; struct CsColour { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned short x_3_1_4; } x3; unsigned short x4; unsigned short x5; unsigned short x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; void*x8; void*x9; }*)arg3;
+ (id)oadGraphicPropertiesFromXlChartFrameType:(struct XlChartFrameType { int (**x1)(); float x2; float x3; float x4; float x5; NSInteger x6; NSInteger x7; NSInteger x8; NSInteger x9; struct XlChartLineStyle {} *x10; struct XlChartFillStyle {} *x11; struct XlChartPicF {} *x12; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x13; void*x14; void*x15; }*)arg1 state:(id)arg2;
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; NSInteger x6; unsigned short x7; unsigned short x8; unsigned short x9; NSInteger x10; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; }*)arg1 state:(id)arg2;
+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const struct XlChartMarkerStyle { int (**x1)(); NSInteger x2; struct CsColour { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned short x_3_1_4; } x3; struct CsColour { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned short x_4_1_4; } x4; NSUInteger x5; unsigned short x6; unsigned short x7; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x8; void*x9; void*x10; }*)arg1 complex:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2 state:(id)arg3;
+ (id)oadStrokeFrom:(const struct XlChartLineStyle { int (**x1)(); struct CsColour { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; } x2; NSInteger x3; NSInteger x4; unsigned short x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; void*x7; void*x8; float x9; NSInteger x10; }*)arg1;
+ (NSInteger)presetLinePatternEnumFromDash:(id)arg1;
+ (float)widthFromLineWeightEnum:(NSInteger)arg1;

@end
