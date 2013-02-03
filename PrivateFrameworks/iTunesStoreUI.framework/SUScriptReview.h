/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString, ISReview;

@interface SUScriptReview : SUScriptObject {
    NSNumber *_adamID;
    NSString *_body;
    id _hasSavedDraft;
    NSString *_infoURL;
    NSString *_itemType;
    NSNumber *_nickname;
    id _nicknameIsConfirmed;
    NSNumber *_rating;
    ISReview *_review;
    NSString *_title;
}

@property(getter=_body,retain) NSString *body; /* unknown property attribute: Sset_body: */
@property(getter=_infoURL,retain) NSString *infoURL; /* unknown property attribute: Sset_infoURL: */
@property(getter=_itemType,retain) NSString *itemType; /* unknown property attribute: Sset_itemType: */
@property(getter=_nickname,retain) NSString *nickname; /* unknown property attribute: Sset_nickname: */
@property(getter=_nicknameIsConfirmed,retain) id nicknameIsConfirmed; /* unknown property attribute: Sset_nicknameIsConfirmed: */
@property(getter=_rating,retain) NSNumber *rating; /* unknown property attribute: Sset_rating: */
@property(getter=_title,retain) NSString *title; /* unknown property attribute: Sset_title: */
@property(getter=_adamID,retain,readonly) NSNumber *adamID;
@property(getter=_hasSavedDraft,retain,readonly) id hasSavedDraft;

+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_adamID;
- (id)_body;
- (id)_className;
- (id)_hasSavedDraft;
- (id)_infoURL;
- (id)_itemType;
- (id)_nickname;
- (id)_nicknameIsConfirmed;
- (id)_rating;
- (id)_title;
- (id)copyReview;
- (void)dealloc;
- (id)init;
- (id)initWithReview:(id)arg1;
- (id)removeDraft;
- (id)restoreFromDraft;
- (id)saveAsDraft;
- (void)set_adamID:(id)arg1;
- (void)set_body:(id)arg1;
- (void)set_hasSavedDraft:(id)arg1;
- (void)set_infoURL:(id)arg1;
- (void)set_itemType:(id)arg1;
- (void)set_nickname:(id)arg1;
- (void)set_nicknameIsConfirmed:(id)arg1;
- (void)set_rating:(id)arg1;
- (void)set_title:(id)arg1;

@end
