/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, MediaPickerModalContext, MPRemoteView;

@interface MPMediaPickerControllerServer : NSObject {
    unsigned int _allowsPickingMultipleItems : 1;
    unsigned int _wantsNavigationButtons : 1;
    unsigned int _wantsSheetBarStyle : 1;
    NSInteger _mediaTypes;
    MediaPickerModalContext *_modalContext;
    NSString *_prompt;
    MPRemoteView *_remoteViewForHosting;
    NSUInteger _replyPort;
    struct __CFMachPort { } *_replyPortRef;
}

+ (void)_initializeSafeCategory;
+ (void)_setBarStyle:(NSInteger)arg1;
+ (NSInteger)barStyle;
+ (id)sharedInstance;
+ (void)startMediaPickerControllerServer;

- (void)_makeRemoteContextVisible;
- (void)_replyPortInvalidated;
- (void)_updateBarStyleForViewControllers;
- (void)cancel;
- (NSUInteger)createRemoteViewForHosting;
- (void)dealloc;
- (void)didPickMediaItems:(id)arg1;
- (void)mediaPickerModalContext:(id)arg1 didPickMediaItems:(id)arg2;
- (void)modalContextDidDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (void)orderFront;
- (void)orderOut;
- (void)releaseRemoteView;
- (void)runMigServer;
- (void)scrollToTop;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (void)setMediaTypes:(NSInteger)arg1;
- (void)setPrompt:(id)arg1;
- (void)setReplyPort:(NSUInteger)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setWantsNavigationButtons:(BOOL)arg1;
- (void)setWantsSheetBarStyle:(BOOL)arg1;

@end
