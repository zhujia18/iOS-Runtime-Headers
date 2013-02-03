/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBackground, WDListDefinitionTable, OADDrawingGroup, WDStyleSheet, NSDate, WDFontTable, OADTheme, WDListTable, WDRevisionAuthorTable, WDText, NSString, NSMutableArray;

@interface WDDocument : OCDDocument {
    unsigned int mMirrorMargins : 1;
    unsigned int mBorderSurroundHeader : 1;
    unsigned int mBorderSurroundFooter : 1;
    unsigned int mAutoHyphenate : 1;
    unsigned int mEvenAndOddHeaders : 1;
    unsigned int mGraphicsInHeaderFooter : 1;
    unsigned int mBookFold : 1;
    unsigned int mShowMarkup : 1;
    unsigned int mShowComments : 1;
    unsigned int mTrackChanges : 1;
    unsigned int mShowRevisionMarksOnScreen : 1;
    unsigned int mShowInsertionsAndDeletions : 1;
    unsigned int mShowFormatting : 1;
    unsigned int mShowOutline : 1;
    NSMutableArray *mChangeTrackingEditAuthors;
    NSMutableArray *mChangeTrackingEditDates;
    NSDate *mCreationDate;
    unsigned short mDefaultTabWidth;
    OADBackground *mDocumentBackground;
    NSMutableArray *mDocumentImages;
    OADDrawingGroup *mDrawingGroup;
    WDText *mEndnoteContinuationNotice;
    WDText *mEndnoteContinuationSeparator;
    NSInteger mEndnoteNumberFormat;
    NSInteger mEndnotePosition;
    NSInteger mEndnoteRestart;
    WDText *mEndnoteSeparator;
    WDFontTable *mFontTable;
    WDText *mFootnoteContinuationNotice;
    WDText *mFootnoteContinuationSeparator;
    NSInteger mFootnoteNumberFormat;
    unsigned short mFootnoteNumberingStart;
    NSInteger mFootnotePosition;
    NSInteger mFootnoteRestart;
    WDText *mFootnoteSeparator;
    NSInteger mGutterPosition;
    WDText *mImageBulletText;
    NSMutableArray *mImageBullets;
    WDListDefinitionTable *mListDefinitionTable;
    WDListTable *mListTable;
    NSString *mOleFilename;
    WDRevisionAuthorTable *mRevisionAuthorTable;
    NSMutableArray *mSections;
    WDStyleSheet *mStyleSheet;
    OADTheme *mTheme;
    NSString *mVersion;
    NSInteger mZIndexTotalForHeaderFooterText;
    NSInteger mZIndexTotalForMainText;
    short mZoomPercentage;
}

+ (NSInteger)thumbnailCutOff;

- (void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(NSInteger)arg2;
- (id)addImageBulletText;
- (void)addImageBullets;
- (id)addList:(id)arg1;
- (id)addListDefinition;
- (void)addRevisionAuthor:(id)arg1;
- (id)addSection;
- (id)annotationBlockIterator;
- (id)annotationIterator;
- (id)applicationName;
- (BOOL)autoHyphenate;
- (BOOL)bookFold;
- (BOOL)borderSurroundFooter;
- (BOOL)borderSurroundHeader;
- (id)changeTrackingEditAuthors;
- (id)changeTrackingEditDates;
- (id)creationDate;
- (void)dealloc;
- (unsigned short)defaultTabWidth;
- (id)documentBackground;
- (id)drawingGroup;
- (id)endnoteBlockIterator;
- (id)endnoteContinuationNotice;
- (id)endnoteContinuationSeparator;
- (id)endnoteIterator;
- (NSInteger)endnoteNumberFormat;
- (NSInteger)endnotePosition;
- (NSInteger)endnoteRestart;
- (id)endnoteSeparator;
- (BOOL)evenAndOddHeaders;
- (id)fontTable;
- (id)footnoteBlockIterator;
- (id)footnoteContinuationNotice;
- (id)footnoteContinuationSeparator;
- (id)footnoteIterator;
- (NSInteger)footnoteNumberFormat;
- (unsigned short)footnoteNumberingStart;
- (NSInteger)footnotePosition;
- (NSInteger)footnoteRestart;
- (id)footnoteSeparator;
- (BOOL)graphicsInHeaderFooter;
- (NSInteger)gutterPosition;
- (id)imageBulletParagraph;
- (id)imageBulletText;
- (id)imageBulletWithCharacterOffset:(NSInteger)arg1;
- (id)imageBullets;
- (id)init;
- (BOOL)isFromBinary;
- (id)lastSection;
- (id)listAt:(NSInteger)arg1;
- (NSInteger)listCount;
- (id)listDefinitionAt:(NSInteger)arg1;
- (NSInteger)listDefinitionCount;
- (id)listDefinitionTable;
- (id)listDefinitionWithId:(NSInteger)arg1;
- (id)listTable;
- (id)mainBlocksIterator;
- (id)mainRunsIterator;
- (BOOL)mirrorMargins;
- (id)newAnnotationBlockIterator;
- (id)newAnnotationIterator;
- (id)newEndnoteBlockIterator;
- (id)newEndnoteIterator;
- (id)newFootnoteBlockIterator;
- (id)newFootnoteIterator;
- (id)newMainBlocksIterator;
- (id)newMainRunsIterator;
- (id)newSectionIterator;
- (id)oleFilename;
- (void)removeEmptySections;
- (NSInteger)revisionAuthorAddLookup:(id)arg1;
- (id)revisionAuthorAt:(NSInteger)arg1;
- (NSInteger)revisionAuthorCount;
- (id)revisionAuthorTable;
- (id)sectionAt:(NSInteger)arg1;
- (NSInteger)sectionCount;
- (id)sectionIterator;
- (id)sections;
- (void)setAutoHyphenate:(BOOL)arg1;
- (void)setBookFold:(BOOL)arg1;
- (void)setBorderSurroundFooter:(BOOL)arg1;
- (void)setBorderSurroundHeader:(BOOL)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDefaultTabWidth:(unsigned short)arg1;
- (void)setDocumentBackground:(id)arg1;
- (void)setEndnoteNumberFormat:(NSInteger)arg1;
- (void)setEndnotePosition:(NSInteger)arg1;
- (void)setEndnoteRestart:(NSInteger)arg1;
- (void)setEvenAndOddHeaders:(BOOL)arg1;
- (void)setFootnoteNumberFormat:(NSInteger)arg1;
- (void)setFootnoteNumberingStart:(unsigned short)arg1;
- (void)setFootnotePosition:(NSInteger)arg1;
- (void)setFootnoteRestart:(NSInteger)arg1;
- (void)setGraphicsInHeaderFooter:(BOOL)arg1;
- (void)setGutterPosition:(NSInteger)arg1;
- (void)setMirrorMargins:(BOOL)arg1;
- (void)setOleFilename:(id)arg1;
- (void)setShowComments:(BOOL)arg1;
- (void)setShowFormatting:(BOOL)arg1;
- (void)setShowInsertionsAndDeletions:(BOOL)arg1;
- (void)setShowMarkup:(BOOL)arg1;
- (void)setShowOutline:(BOOL)arg1;
- (void)setShowRevisionMarksOnScreen:(BOOL)arg1;
- (void)setTrackChanges:(BOOL)arg1;
- (void)setVersion:(id)arg1;
- (void)setZIndexTotalForHeaderFooterText:(NSInteger)arg1;
- (void)setZIndexTotalForMainText:(NSInteger)arg1;
- (void)setZoomPercentage:(short)arg1;
- (BOOL)showComments;
- (BOOL)showFormatting;
- (BOOL)showInsertionsAndDeletions;
- (BOOL)showMarkup;
- (BOOL)showOutline;
- (BOOL)showRevisionMarksOnScreen;
- (id)styleSheet;
- (id)theme;
- (BOOL)trackChanges;
- (id)version;
- (NSInteger)zIndexTotalForHeaderFooterText;
- (NSInteger)zIndexTotalForMainText;
- (short)zoomPercentage;

@end
