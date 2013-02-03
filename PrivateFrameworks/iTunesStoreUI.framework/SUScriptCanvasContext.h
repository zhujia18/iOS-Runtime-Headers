/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptColor, NSString;

@interface SUScriptCanvasContext : SUScriptObject {
    struct CGContext { } *_context;
    struct CGPath { } *_contextPath;
    id _fillStyle;
    NSInteger _fillStyleType;
    float _globalAlpha;
    NSString *_globalCompositeOperation;
    float _height;
    id _lineCap;
    id _lineJoin;
    float _lineWidth;
    float _miterLimit;
    float _shadowBlur;
    SUScriptColor *_shadowColor;
    float _shadowOffsetX;
    float _shadowOffsetY;
    id _strokeStyle;
    NSInteger _strokeStyleType;
    float _width;
}

@property(getter=_height) float height; /* unknown property attribute: Sset_height: */
@property(getter=_width) float width; /* unknown property attribute: Sset_width: */
@property(getter=_fillStyle,retain) id fillStyle; /* unknown property attribute: Sset_fillStyle: */
@property(getter=_strokeStyle,retain) id strokeStyle; /* unknown property attribute: Sset_strokeStyle: */
@property(getter=_globalAlpha) float globalAlpha; /* unknown property attribute: Sset_globalAlpha: */
@property(getter=_globalCompositeOperation,retain) NSString *globalCompositeOperation; /* unknown property attribute: Sset_globalCompositeOperation: */
@property(getter=_lineCap,retain) id lineCap; /* unknown property attribute: Sset_lineCap: */
@property(getter=_lineJoin,retain) id lineJoin; /* unknown property attribute: Sset_lineJoin: */
@property(getter=_lineWidth) float lineWidth; /* unknown property attribute: Sset_lineWidth: */
@property(getter=_miterLimit) float miterLimit; /* unknown property attribute: Sset_miterLimit: */
@property(getter=_shadowBlur) float shadowBlur; /* unknown property attribute: Sset_shadowBlur: */
@property(getter=_shadowColor) id shadowColor; /* unknown property attribute: Sset_shadowColor: */
@property(getter=_shadowOffsetX) float shadowOffsetX; /* unknown property attribute: Sset_shadowOffsetX: */
@property(getter=_shadowOffsetY) float shadowOffsetY; /* unknown property attribute: Sset_shadowOffsetY: */

+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_fillStyle;
- (float)_globalAlpha;
- (id)_globalCompositeOperation;
- (float)_height;
- (id)_lineCap;
- (id)_lineJoin;
- (float)_lineWidth;
- (float)_miterLimit;
- (void)_ntsApplyShadow;
- (float)_shadowBlur;
- (id)_shadowColor;
- (float)_shadowOffsetX;
- (float)_shadowOffsetY;
- (id)_strokeStyle;
- (float)_width;
- (void)arcToX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)arcWithX:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 antiClockwise:(BOOL)arg6;
- (void)beginPath;
- (void)bezierCurveToCP1X:(float)arg1 cp1y:(float)arg2 cp2x:(float)arg3 cp2y:(float)arg4 x:(float)arg5 y:(float)arg6;
- (void)clearRectWithX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (void)clip;
- (void)closePath;
- (struct CGImage { }*)copyCanvasImage;
- (struct CGPath { }*)copyCanvasPath;
- (void)dealloc;
- (void)fill;
- (void)fillRectWithX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
- (BOOL)isPointInPathWithX:(float)arg1 y:(float)arg2;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (id)makeLinearGradientWithX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4;
- (id)makeRadialGradientWithX0:(float)arg1 y0:(float)arg2 r0:(float)arg3 x1:(float)arg4 y1:(float)arg5 r1:(float)arg6;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)quadraticCurveToCPX:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4;
- (void)restoreState;
- (void)rotateWithAngle:(float)arg1;
- (void)saveState;
- (void)scaleWithX:(float)arg1 y:(float)arg2;
- (void)setTransformWithM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)set_fillStyle:(id)arg1;
- (void)set_globalAlpha:(float)arg1;
- (void)set_globalCompositeOperation:(id)arg1;
- (void)set_height:(float)arg1;
- (void)set_lineCap:(id)arg1;
- (void)set_lineJoin:(id)arg1;
- (void)set_lineWidth:(float)arg1;
- (void)set_miterLimit:(float)arg1;
- (void)set_shadowBlur:(float)arg1;
- (void)set_shadowColor:(id)arg1;
- (void)set_shadowOffsetX:(float)arg1;
- (void)set_shadowOffsetY:(float)arg1;
- (void)set_strokeStyle:(id)arg1;
- (void)set_width:(float)arg1;
- (void)stroke;
- (void)strokeRectWithX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (void)transformWithM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)translateWithX:(float)arg1 y:(float)arg2;

@end
