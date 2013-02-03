/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class DOMNode;

@interface DDRange : NSObject {
    NSInteger _endOffset;
    DOMNode *_node;
    NSInteger _startOffset;
}

@property(retain) DOMNode *node;
@property NSInteger endOffset;
@property NSInteger startOffset;

+ (id)rangeWithDOMRange:(id)arg1;

- (void)dealloc;
- (id)description;
- (long)endOffset;
- (id)initWithDOMRange:(id)arg1;
- (id)node;
- (void)setEndOffset:(long)arg1;
- (void)setNode:(id)arg1;
- (void)setStartOffset:(long)arg1;
- (long)startOffset;

@end
