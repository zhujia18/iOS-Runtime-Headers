/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDResources, NSMutableArray, EDWorkbook;

@interface EDProcessor : NSObject {
     /* Encoded args for previous method: B12@0:4@8 */
    NSMutableArray *mObjects;
    EDResources *mResources;
    EDWorkbook *mWorkbook;
}

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (void)applyProcessorWithSheet:(id)arg1;
- (void)dealloc;
- (id)initWithWorkbook:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isObjectSupported:(id)arg1;
- (void)markObjectForPostProcessing:(id)arg1;

@end
