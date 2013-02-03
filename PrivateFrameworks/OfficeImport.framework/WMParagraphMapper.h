/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDParagraph, WMParagraphMapper, OIXMLElement;

@interface WMParagraphMapper : CMMapper {
    OIXMLElement *mActiveNode;
    WMParagraphMapper *mCurrentMapper;
    WDParagraph *wdParagraph;
}

+ (void)mapPlaceholderAt:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withState:(id)arg3;

- (id)activeNode;
- (BOOL)containsOfficeArt;
- (void)dealloc;
- (id)initWithBlock:(id)arg1 parent:(id)arg2;
- (BOOL)isCollapsable:(id)arg1;
- (BOOL)isTextFrame;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;
- (void)mapParagraphBodyWithState:(id)arg1;
- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;
- (id)runAtIndex:(NSInteger)arg1;

@end
