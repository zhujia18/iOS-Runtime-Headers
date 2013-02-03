/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIView;

@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSString *m_correction;
    UIView *m_correctionAnimationView;
    UIView *m_correctionShadowView;
    UIView *m_correctionView;
    id m_delegate;
    BOOL m_fits;
    NSUInteger m_index;
    BOOL m_mouseDown;
    } m_originalTypedTextRect;
    NSInteger m_promptTextType;
    NSString *m_typedText;
    UIView *m_typedTextAnimationView;
    UIView *m_typedTextView;
}

+ (void)_initializeSafeCategory;

- (void)_candidateSelected:(id)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)candidateAcceptedAtIndex:(NSUInteger)arg1;
- (id)candidateAtIndex:(NSUInteger)arg1;
- (void)configureKeyboard:(id)arg1;
- (id)correction;
- (id)correctionAnimationView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })correctionFrameFromDesiredFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textHeight:(NSInteger)arg2 withExtraGap:(float)arg3;
- (id)correctionShadowView;
- (id)correctionView;
- (NSUInteger)count;
- (id)currentCandidate;
- (NSUInteger)currentIndex;
- (void)dealloc;
- (void)dismiss;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })horizontallySquishedCorrectionFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSUInteger)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAcceptableTextEffectsFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 afterScrollBy:(float)arg2;
- (BOOL)isAccessibilityElement;
- (void)layout;
- (float)maximumCandidateWidth;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (NSUInteger)numberOfShownItems;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)prepareForAnimation:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removePromptSubviews;
- (void)setCandidateObject:(id)arg1 type:(NSInteger)arg2 typedText:(id)arg3 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(NSInteger)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4;
- (void)setSelectedItem:(NSUInteger)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shadowFrameForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)showCandidateAtIndex:(NSUInteger)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showPageAtIndex:(NSUInteger)arg1;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (NSInteger)textEffectsVisibilityLevel;
- (NSInteger)textEffectsVisibilityLevelWhenKey;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)typedText;
- (id)typedTextAnimationView;
- (id)typedTextView;

@end
