/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIInputSwitcherView, UIDelayedAction;

@interface UIInputSwitcher : NSObject {
    NSString *_newMode;
    NSInteger m_state;
    UIDelayedAction *m_switcherDelay;
    UIInputSwitcherView *m_switcherView;
}

@property(copy) NSString *newMode;

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)cancelSwitcherTimer;
- (void)clearSwitcherTimer;
- (void)dealloc;
- (BOOL)handleModifiersChangedEvent:(struct __GSEvent { }*)arg1;
- (void)handleRotate:(id)arg1;
- (BOOL)handleSwitchCommand:(BOOL)arg1;
- (void)hideSwitcher;
- (id)init;
- (BOOL)isVisible;
- (id)newMode;
- (void)setNewMode:(id)arg1;
- (void)showSwitcher;
- (BOOL)switchMode:(id)arg1 withDelay:(BOOL)arg2;
- (void)touchSwitcherTimer;

@end
