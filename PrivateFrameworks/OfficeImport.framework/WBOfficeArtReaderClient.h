/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface WBOfficeArtReaderClient : NSObject <OABReaderClient> {
     /* Encoded args for previous method: B12@0:4^{EshContentProperties=^^?S^{EshContentData}}8 */
     /* Encoded args for previous method: B12@0:4^{EshContentProperties=^^?S^{EshContentData}}8 */
}

+ (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)allowOverlap:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)behindText:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (BOOL)escherIsFullySupported;
+ (NSInteger)horizontalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (void)readFrom:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1 to:(id)arg2;
+ (NSInteger)relativeHorizontalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (NSInteger)relativeVerticalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (BOOL)tablesAreAllowed;
+ (NSInteger)verticalPosition:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceBottom:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceLeft:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceRight:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;
+ (double)wrapDistanceTop:(struct EshContentProperties { int (**x1)(); unsigned short x2; struct EshContentData {} *x3; }*)arg1;

@end
