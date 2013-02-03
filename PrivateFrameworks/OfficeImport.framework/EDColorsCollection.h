/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface EDColorsCollection : EDCollection <OADColorPalette> {
     /* Encoded args for previous method: B12@0:4I8 */
     /* Encoded args for previous method: @12@0:4B8 */
    NSUInteger mDefaultColorsCount;
}

+ (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isSystemColorId:(NSUInteger)arg1;
+ (NSInteger)oadSchemeColorIdFromThemeIndex:(NSInteger)arg1;
+ (NSInteger)systemColorIdFromIndex:(NSUInteger)arg1;
+ (NSUInteger)xlColorIndexFromCPSystemColorIDEnum:(NSInteger)arg1;

- (void)addColors:(const NSUInteger*)arg1 count:(unsigned long)arg2 defaultColors:(const NSUInteger*)arg3 defaultCount:(NSUInteger)arg4;
- (void)addDefaultPalette;
- (NSUInteger)addOrEquivalentColorExcludingDefaults:(id)arg1;
- (void)addPalette:(const NSUInteger*)arg1 paletteSize:(unsigned long)arg2 paletteX:(const NSUInteger*)arg3 paletteXSize:(NSUInteger)arg4;
- (id)colorWithIndex:(NSUInteger)arg1;
- (NSUInteger)defaultColorsCount;
- (id)initWithDefaultSetup:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setupDefaults;

@end
