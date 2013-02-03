/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMessageViewingContext, MailMessage;

@interface _MFMailCompositionContext : MFMailCompositionContext {
    struct { 
        unsigned int loadRest : 1; 
        unsigned int includeAttachments : 1; 
    NSInteger _composeType;
    MFMessageViewingContext *_loadingContext;
    } _mailComposeFlags;
    id _originalContent;
    MailMessage *_originalMessage;
}

@property(retain) MFMessageViewingContext *loadingContext;
@property(retain,readonly) MailMessage *originalMessage;
@property(readonly) NSInteger composeType;
@property BOOL includeAttachments;
@property BOOL loadRest;
@property(retain) id originalContent;

- (NSInteger)composeType;
- (void)dealloc;
- (BOOL)includeAttachments;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initWithComposeType:(NSInteger)arg1 originalMessage:(id)arg2;
- (id)initWithComposeType:(NSInteger)arg1;
- (BOOL)loadRest;
- (id)loadingContext;
- (id)originalContent;
- (id)originalMessage;
- (void)setIncludeAttachments:(BOOL)arg1;
- (void)setLoadRest:(BOOL)arg1;
- (void)setLoadingContext:(id)arg1;
- (void)setOriginalContent:(id)arg1;

@end
