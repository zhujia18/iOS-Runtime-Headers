/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSObject<CKContentEntryBridgeClient>;

@interface CKContentEntryBridge : NSObject {
    NSObject<CKContentEntryBridgeClient> *_entryView;
}

@property NSObject<CKContentEntryBridgeClient> *contentEntryView;

+ (id)newContentEntryBridge;

- (id)attachments;
- (id)contentEntryView;
- (void)dealloc;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1 inTextContentView:(id)arg2;
- (BOOL)hasContent;
- (void)insertMessagePart:(id)arg1;
- (id)messageComposition;
- (id)messageCompositionIfTextOnly;
- (id)messageParts;
- (id)newContentViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentEntryView:(id)arg1;
- (void)setMessageComposition:(id)arg1;
- (void)setMessageParts:(id)arg1;

@end
