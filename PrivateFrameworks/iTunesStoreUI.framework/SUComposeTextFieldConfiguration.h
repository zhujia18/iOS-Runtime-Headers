/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUComposeTextFieldConfiguration : NSObject {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _borderInsets;
    BOOL _isRequired;
    NSString *_label;
    NSUInteger _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property(retain) NSString *label;
@property(retain) NSString *placeholder;
@property(retain) NSString *value;
@property UIEdgeInsets borderInsets;
@property NSUInteger maxLength;
@property(getter=isRequired) BOOL required;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderInsets;
- (void)dealloc;
- (BOOL)isRequired;
- (id)label;
- (NSUInteger)maxLength;
- (id)placeholder;
- (void)setBorderInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxLength:(NSUInteger)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRequired:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
