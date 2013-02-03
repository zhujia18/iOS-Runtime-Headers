/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIView, NSArray;

@interface UIAccentedCharacterView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    NSArray *m_caps;
    NSArray *m_characters;
    NSUInteger m_count;
    } m_dragPoint;
    BOOL m_dragged;
    NSInteger m_expansion;
    UIImage *m_grabberImage;
    } m_grabberRect;
    NSInteger m_orientation;
    UIView *m_popupView;
    NSUInteger m_selectedIndex;
    UIView *m_selectedView;
    float m_stringWidth;
    UIImage *m_tubeImage;
    } m_tubeRect;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 variants:(id)arg2 expansion:(NSInteger)arg3 orientation:(NSInteger)arg4;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (NSUInteger)moveCharactersAndCapsToAltSide:(NSUInteger)arg1 position:(NSUInteger)arg2 expansion:(NSInteger)arg3;
- (void)sendSelectedString;
- (void)setSelectedIndex:(NSInteger)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
