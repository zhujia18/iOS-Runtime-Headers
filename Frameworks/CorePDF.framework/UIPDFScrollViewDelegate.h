/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class <UIScrollViewDelegate>, UIPDFView;

@interface UIPDFScrollViewDelegate : NSObject <UIScrollViewDelegate> {
    UIPDFView *contentView;
    <UIScrollViewDelegate> *savedDelegate;
}

@property(retain) UIPDFView *contentView;
@property(retain) id savedDelegate;

- (id)contentView;
- (id)savedDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setSavedDelegate:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
