/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;

@interface SUTouchCaptureView : UIControl {
    NSArray *_passThroughViews;
}

@property(retain) NSArray *passThroughViews;

+ (void)_initializeSafeCategory;

- (BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
- (BOOL)_accessibilityEscape;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)accessibilityActivate;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)isAccessibilityElement;
- (id)passThroughViews;
- (void)setPassThroughViews:(id)arg1;

@end
