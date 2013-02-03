/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableArray, NSString;

@interface GKVoiceChatServiceFocus : GKVoiceChatServicePrivate {
    NSString *currentFocus;
    BOOL hasMic;
    NSMutableArray *incomingCallDictList;
    NSInteger incomingUID;
    NSMutableArray *outgoingCallDictList;
    NSInteger packetsPerBundle;
}

@property(retain) NSString *currentFocus;
@property BOOL hasMic;
@property NSInteger packetsPerBundle;

+ (id)defaultVoiceChatService;

- (BOOL)acceptCallID:(NSInteger)arg1 error:(id*)arg2;
- (id)currentFocus;
- (void)denyCallID:(NSInteger)arg1;
- (id)dictionaryForCallID:(NSInteger)arg1 isIncomingDictonary:(BOOL)arg2;
- (id)dictionaryForNonce:(NSInteger)arg1 participantID:(id)arg2 isIncomingDictonary:(BOOL)arg3;
- (id)dictionaryForParticipantID:(id)arg1 isIncomingDictonary:(BOOL)arg2;
- (double)getLocalBitrate;
- (double)getLocalFramerate;
- (double)getRemoteBitrate;
- (double)getRemoteFramerate;
- (BOOL)hasMic;
- (id)incomingDictionaryMatchingOriginalCallID:(NSInteger)arg1 participantID:(id)arg2;
- (id)init;
- (id)localDisplayNameForCallID:(NSInteger)arg1;
- (void*)localVideoLayer;
- (id)openOutgoingDictionaryForParticipantID:(id)arg1;
- (NSInteger)packetsPerBundle;
- (BOOL)processCancelDict:(id)arg1;
- (BOOL)processFocusChange:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)processFocusDict:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)processInviteDictionary:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)processInviteDictionaryForTie:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)processReplyDict:(id)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)remoteCancelled:(id)arg1;
- (void)remoteCancelledProc:(id)arg1;
- (id)remoteDisplayNameForCallID:(NSInteger)arg1;
- (void*)remoteVideoLayer;
- (void)sendFocusChange:(BOOL)arg1;
- (void)setChatMode:(NSInteger)arg1;
- (void)setCurrentFocus:(id)arg1;
- (void)setFocus:(BOOL)arg1;
- (void)setHasMic:(BOOL)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setPacketsPerBundle:(NSInteger)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)setSpeakingDelegate:(id)arg1;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)stopVoiceChatProc:(id)arg1 participantDidCancel:(BOOL)arg2;
- (void)stopVoiceChatProc:(id)arg1;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(NSInteger)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(NSInteger)arg2 error:(id)arg3;

@end
