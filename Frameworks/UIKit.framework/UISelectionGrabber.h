/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISelectionGrabberDot;

@interface UISelectionGrabber : UIView {
    BOOL m_activeFlattened;
    BOOL m_alertFlattened;
    BOOL m_animating;
    UISelectionGrabberDot *m_dotView;
    BOOL m_isDotted;
    BOOL m_isStart;
    BOOL m_navigationTransitionFlattened;
}

@property(readonly) UITextRangeView *hostView;
@property BOOL activeFlattened;
@property BOOL alertFlattened;
@property BOOL animating;
@property BOOL isDotted;
@property BOOL isStart;
@property BOOL navigationTransitionFlattened;

+ (id)_grabberDot;

- (BOOL)activeFlattened;
- (BOOL)alertFlattened;
- (BOOL)animating;
- (BOOL)autoscrolled;
- (void)canExpandAfterAlert:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hostView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDotted;
- (BOOL)isRotating;
- (BOOL)isScaling;
- (BOOL)isScrolling;
- (BOOL)isStart;
- (void)mustFlattenForAlert:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (BOOL)navigationTransitionFlattened;
- (void)removeFromSuperview;
- (void)setActiveFlattened:(BOOL)arg1;
- (void)setAlertFlattened:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIsDotted:(BOOL)arg1;
- (void)setIsStart:(BOOL)arg1;
- (void)setNavigationTransitionFlattened:(BOOL)arg1;
- (void)updateDot;

@end
