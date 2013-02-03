/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

@interface CelesteCaptionRenderer : FigCaptionRenderer {
    struct CelesteCaptionRendererState { char *x1; struct __GSFont {} *x2; struct __GSFont {} *x3; } *_priv2;
}

- (void)_acquireFontsForPointSize:(float)arg1;
- (void)_releaseCachedFonts;
- (void)dealloc;
- (void)drawUnichar:(unsigned short)arg1 color:(struct CGColor { }*)arg2 italics:(BOOL)arg3 underline:(BOOL)arg4 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 inContext:(struct CGContext { }*)arg6 orientation:(NSInteger)arg7;
- (id)init;
- (void)setFontName:(id)arg1;

@end
