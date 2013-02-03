/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCPPackagePart, NSMutableArray, SFUNoCopyDictionary, WXOAVState, OAXDrawingState, WDDocument, <OCCancelDelegate>;

@interface WXState : NSObject {
    struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; NSInteger x23; NSInteger x24; } *mAnnotationDocument;
    OCPPackagePart *mAnnotationPart;
    struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } *mAnnotations;
    <OCCancelDelegate> *mCancelDelegate;
    unsigned long mCurrentCellCNFStyle;
    NSInteger mCurrentOfficeArtTextType;
    unsigned long mCurrentRowCNFStyle;
    BOOL mCurrentTableWraps;
    NSMutableArray *mDeleteAuthorStack;
    NSMutableArray *mDeleteDateStack;
    WDDocument *mDocument;
    OAXDrawingState *mDrawingState;
    NSMutableArray *mEditAuthorStack;
    NSMutableArray *mEditDateStack;
    struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; NSInteger x23; NSInteger x24; } *mEndnoteDocument;
    struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } *mEndnotes;
    struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; NSInteger x23; NSInteger x24; } *mFootnoteDocument;
    struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; } *mFootnotes;
    NSMutableArray *mFormatAuthorStack;
    NSMutableArray *mFormatDateStack;
    BOOL mIsThumbnail;
    SFUNoCopyDictionary *mMapAnnotationIdToAnnotation;
    SFUNoCopyDictionary *mMapBookmarkIdToName;
    BOOL mNewSectionRequested;
    OCPPackagePart *mPackagePart;
    SFUNoCopyDictionary *mTextNodesToBeAdded;
    WXOAVState *mWXOavState;
}

@property(retain) <OCCancelDelegate> *cancelDelegate;
@property NSInteger currentOfficeArtTextType;

- (void)addAnnotationID:(long)arg1 annotation:(id)arg2;
- (void)addBookmarkId:(NSInteger)arg1 name:(id)arg2;
- (void)addText:(id)arg1 node:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2;
- (id)annotationPart;
- (id)annotationWithID:(long)arg1;
- (id)bookmarkName:(NSInteger)arg1;
- (id)cancelDelegate;
- (void)clearOutNodesToBeAdded:(id)arg1;
- (unsigned long)currentCellCNFStyle;
- (id)currentDeleteAuthor;
- (id)currentDeleteDate;
- (id)currentEditAuthor;
- (id)currentEditDate;
- (id)currentFormatAuthor;
- (id)currentFormatDate;
- (NSInteger)currentOfficeArtTextType;
- (unsigned long)currentRowCNFStyle;
- (BOOL)currentTableWraps;
- (void)dealloc;
- (id)document;
- (id)drawingState;
- (id)init;
- (id)initNoStacksWith:(id)arg1;
- (BOOL)isNewSectionRequested;
- (BOOL)isThumbnail;
- (id)nodesToBeAdded:(id)arg1;
- (id)packagePart;
- (void)popDeleteAuthorDate;
- (void)popEditAuthorDate;
- (void)popFormatAuthorDate;
- (void)pushDeleteAuthor:(id)arg1 date:(id)arg2;
- (void)pushEditAuthor:(id)arg1 date:(id)arg2;
- (void)pushFormatAuthor:(id)arg1 date:(id)arg2;
- (void)setAnnotationPart:(id)arg1;
- (void)setCancelDelegate:(id)arg1;
- (void)setCurrentCellCNFStyle:(unsigned long)arg1;
- (void)setCurrentOfficeArtTextType:(NSInteger)arg1;
- (void)setCurrentRowCNFStyle:(unsigned long)arg1;
- (void)setCurrentTableWraps:(BOOL)arg1;
- (void)setDocument:(id)arg1;
- (void)setDocumentPart:(id)arg1;
- (void)setIsThumbnail:(BOOL)arg1;
- (void)setNewSectionRequested:(BOOL)arg1;
- (void)setPackagePart:(id)arg1;
- (id)wxoavState;
- (struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)xmlAnnotationWithID:(long)arg1;
- (struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)xmlEndnoteWithID:(long)arg1;
- (struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)xmlFootnoteWithID:(long)arg1;

@end
