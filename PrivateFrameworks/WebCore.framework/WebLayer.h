/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface WebLayer : CALayer {
    struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x3; struct IntSize { 
            NSInteger m_width; 
            NSInteger m_height; 
        } x4; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x5; struct FloatPoint3D { 
            float m_x; 
            float m_y; 
            float m_z; 
        } x6; struct FloatSize { 
            float m_width; 
            float m_height; 
        } x7; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x8; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x9; struct Color { 
            NSUInteger m_color; 
            /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*m_valid; 
        } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; NSInteger x22; NSInteger x23; struct Vector<WebCore::GraphicsLayer*,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { 
                struct GraphicsLayer {} **m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x29; struct IntRect { 
            struct IntPoint { 
                NSInteger m_x; 
                NSInteger m_y; 
            } m_location; 
            struct IntSize { 
                NSInteger m_width; 
                NSInteger m_height; 
            } m_size; 
     /* Encoded args for previous method: v20@0:4^{GraphicsLayer=^^?^{GraphicsLayerClient}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{IntSize=ii}{FloatPoint=ff}{FloatPoint3D=fff}{FloatSize=ff}{TransformationMatrix=[4[4d]]}{TransformationMatrix=[4[4d]]}{Color=IB}fffb1b1b1b1b1b1b1iii{Vector<WebCore::GraphicsLayer*,0ul>=I{VectorBuffer<WebCore::GraphicsLayer*,0ul>=^^{GraphicsLayer}I}}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}{FloatPoint=ff}{IntRect={IntPoint=ii}{IntSize=ii}}i}8@12^{CGContext=}16 */
     /* Encoded args for previous method: ^{GraphicsLayer=^^?^{GraphicsLayerClient}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{IntSize=ii}{FloatPoint=ff}{FloatPoint3D=fff}{FloatSize=ff}{TransformationMatrix=[4[4d]]}{TransformationMatrix=[4[4d]]}{Color=IB}fffb1b1b1b1b1b1b1iii{Vector<WebCore::GraphicsLayer*,0ul>=I{VectorBuffer<WebCore::GraphicsLayer*,0ul>=^^{GraphicsLayer}I}}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}{FloatPoint=ff}{IntRect={IntPoint=ii}{IntSize=ii}}i}8@0:4 */
     /* Encoded args for previous method: v12@0:4^{GraphicsLayer=^^?^{GraphicsLayerClient}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}{IntSize=ii}{FloatPoint=ff}{FloatPoint3D=fff}{FloatSize=ff}{TransformationMatrix=[4[4d]]}{TransformationMatrix=[4[4d]]}{Color=IB}fffb1b1b1b1b1b1b1iii{Vector<WebCore::GraphicsLayer*,0ul>=I{VectorBuffer<WebCore::GraphicsLayer*,0ul>=^^{GraphicsLayer}I}}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}^{GraphicsLayer}{FloatPoint=ff}{IntRect={IntPoint=ii}{IntSize=ii}}i}8 */
        } x30; NSInteger x31; } *m_layerOwner;
}

+ (void)drawContents:(struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { NSInteger x_4_1_1; NSInteger x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { NSUInteger x_10_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_10_1_2; } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; NSInteger x22; NSInteger x23; struct Vector<WebCore::GraphicsLayer*,0ul> { NSUInteger x_24_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; NSUInteger x_2_2_2; } x_24_1_2; } x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct FloatPoint { float x_29_1_1; float x_29_1_2; } x29; struct IntRect { struct IntPoint { NSInteger x_1_2_1; NSInteger x_1_2_2; } x_30_1_1; struct IntSize { NSInteger x_2_2_1; NSInteger x_2_2_2; } x_30_1_2; } x30; NSInteger x31; }*)arg1 ofLayer:(id)arg2 intoContext:(struct CGContext { }*)arg3;

- (struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { NSInteger x_4_1_1; NSInteger x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { NSUInteger x_10_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_10_1_2; } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; NSInteger x22; NSInteger x23; struct Vector<WebCore::GraphicsLayer*,0ul> { NSUInteger x_24_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; NSUInteger x_2_2_2; } x_24_1_2; } x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct FloatPoint { float x_29_1_1; float x_29_1_2; } x29; struct IntRect { struct IntPoint { NSInteger x_1_2_1; NSInteger x_1_2_2; } x_30_1_1; struct IntSize { NSInteger x_2_2_1; NSInteger x_2_2_2; } x_30_1_2; } x30; NSInteger x31; }*)layerOwner;
- (id)actionForKey:(id)arg1;
- (void)display;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (void)setLayerOwner:(struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { NSInteger x_4_1_1; NSInteger x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { NSUInteger x_10_1_1; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_10_1_2; } x10; float x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; NSInteger x21; NSInteger x22; NSInteger x23; struct Vector<WebCore::GraphicsLayer*,0ul> { NSUInteger x_24_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; NSUInteger x_2_2_2; } x_24_1_2; } x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct FloatPoint { float x_29_1_1; float x_29_1_2; } x29; struct IntRect { struct IntPoint { NSInteger x_1_2_1; NSInteger x_1_2_2; } x_30_1_1; struct IntSize { NSInteger x_2_2_1; NSInteger x_2_2_2; } x_30_1_2; } x30; NSInteger x31; }*)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
