/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {
    unsigned int keyboardType : 8;
    unsigned int keyboardAppearance : 8;
    BOOL acceptsEmoji;
    NSInteger autocapitalizationType;
    NSInteger autocorrectionType;
    BOOL contentsIsSingleValue;
    NSInteger emptyContentReturnKeyType;
    BOOL enablesReturnKeyAutomatically;
    UIColor *insertionPointColor;
    NSUInteger insertionPointWidth;
    BOOL returnKeyGoesToNextResponder;
    NSInteger returnKeyType;
    BOOL secureTextEntry;
    NSInteger textLoupeVisibility;
    NSInteger textSelectionBehavior;
    id textSuggestionDelegate;
    struct __CFCharacterSet { } *textTrimmingSet;
}

@property(retain) UIColor *insertionPointColor;
@property __CFCharacterSet *textTrimmingSet;
@property BOOL acceptsEmoji;
@property NSInteger autocapitalizationType;
@property NSInteger autocorrectionType;
@property BOOL contentsIsSingleValue;
@property NSInteger emptyContentReturnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property NSUInteger insertionPointWidth;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property BOOL returnKeyGoesToNextResponder;
@property NSInteger returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property NSInteger textLoupeVisibility;
@property NSInteger textSelectionBehavior;
@property id textSuggestionDelegate;

+ (id)defaultTextInputTraits;
+ (BOOL)keyboardTypeRequiresASCIICapable:(NSInteger)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;

- (BOOL)acceptsEmoji;
- (NSInteger)autocapitalizationType;
- (NSInteger)autocorrectionType;
- (BOOL)contentsIsSingleValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (NSInteger)emptyContentReturnKeyType;
- (BOOL)enablesReturnKeyAutomatically;
- (id)init;
- (id)insertionPointColor;
- (NSUInteger)insertionPointWidth;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSecureTextEntry;
- (NSInteger)keyboardAppearance;
- (NSInteger)keyboardType;
- (BOOL)returnKeyGoesToNextResponder;
- (NSInteger)returnKeyType;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (void)setAutocapitalizationType:(NSInteger)arg1;
- (void)setAutocorrectionType:(NSInteger)arg1;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (void)setEmptyContentReturnKeyType:(NSInteger)arg1;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
- (void)setInsertionPointColor:(id)arg1;
- (void)setInsertionPointWidth:(NSUInteger)arg1;
- (void)setKeyboardAppearance:(NSInteger)arg1;
- (void)setKeyboardType:(NSInteger)arg1;
- (void)setReturnKeyGoesToNextResponder:(BOOL)arg1;
- (void)setReturnKeyType:(NSInteger)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setTextLoupeVisibility:(NSInteger)arg1;
- (void)setTextSelectionBehavior:(NSInteger)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setToDefaultValues;
- (void)setToSecureValues;
- (void)takeTraitsFrom:(id)arg1;
- (NSInteger)textLoupeVisibility;
- (NSInteger)textSelectionBehavior;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;

@end
