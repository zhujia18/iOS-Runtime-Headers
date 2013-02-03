/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIPasscodeField;

@interface NumericPINView : PINView {
    UIPasscodeField *_passcodeField;
}

- (void)appendString:(id)arg1;
- (void)deleteLastCharacter;
- (void)hidePasscodeField:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)setStringValue:(id)arg1;
- (void)showFailedAttempts:(NSInteger)arg1;
- (id)stringValue;

@end
