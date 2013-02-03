/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBSlideMaster : PBSlideBase {
}

+ (id)createMasterStyleMap:(id)arg1 state:(id)arg2;
+ (void)flattenBaseMasterStyleType:(NSInteger)arg1 masterStyleMap:(id)arg2;
+ (void)flattenMasterStyleType:(NSInteger)arg1 baseType:(NSInteger)arg2 masterStyleMap:(id)arg3;
+ (void)flattenPlaceholderTextStylesIntoLayout:(id)arg1 layoutType:(NSInteger)arg2 masterStyleMap:(id)arg3;
+ (void)flattenTextStyle:(id)arg1 intoTextBox:(id)arg2;
+ (void)padMissingLevels:(id)arg1;
+ (void)readMasterDrawables:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)readSlideLayout:(id)arg1 slideHolder:(id)arg2 layoutType:(NSInteger)arg3 state:(id)arg4;
+ (void)readSlideMasterStyles:(id)arg1 slideHolder:(id)arg2 state:(id)arg3;
+ (void)setCannedOtherTextListStyle:(id)arg1;
+ (void)setFont:(id)arg1 fromCharacterProperties:(id)arg2;
+ (id)textBodyForPlaceholderType:(NSInteger)arg1 slideLayout:(id)arg2;
+ (NSInteger)textTypeFor:(NSInteger)arg1 placeholderType:(NSInteger)arg2;

@end
