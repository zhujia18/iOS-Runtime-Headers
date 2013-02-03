/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class CNFServiceHandler, NSURL, APSConnection, NSTimer, NSMutableArray, IMAVChat;

@interface CNFConferenceController : NSObject <IMAVControllerDelegate, IMAVInvitationControllerDelegate, IMAVChatDelegate> {
    IMAVChat *_activeAVChat;
    APSConnection *_apsConnection;
    NSMutableArray *_avChatList;
    struct __CTCall { } *_call;
    NSURL *_delayedInvitationURL;
    BOOL _fullConferenceCapable;
    BOOL _isConnected;
    BOOL _needsPushReliability;
    CNFServiceHandler *_serviceHandler;
    BOOL _waitingForFirstRemoteFrame;
    NSTimer *_waitingForFirstRemoteFrameTimer;
}

@property(readonly) IMAVChat *avChat;
@property(readonly) BOOL isFullConferenceCapable;

+ (BOOL)conferencingIsEnabled;
+ (BOOL)conferencingIsRestricted;
+ (BOOL)conferencingIsSupported;
+ (BOOL)conferencingRegistrationIsSupported;
+ (BOOL)connect;
+ (BOOL)disconnect;
+ (BOOL)isConnected;
+ (void)reconcileDaemonControllerConnection;
+ (void)reconcileHarlequinAccountStatus;
+ (id)registrationStatusSettingsString;
+ (void)setConferencingEnabled:(BOOL)arg1;
+ (id)sharedExistingInstance;
+ (id)sharedFullConferenceInstance;
+ (id)sharedInstance;

- (BOOL)_activeChatExists;
- (BOOL)_blockingIsInConference;
- (void)_cancelWaitingForFirstRemoteFrameTimer;
- (void)_cleanUpAfterAVChat;
- (void)_createMissedCallEntryForConferenceURL:(id)arg1 isOriginator:(BOOL)arg2;
- (void)_fakeFirstRemoteFrameNotification:(id)arg1;
- (void)_finalizeRecentCallEntryForConference:(id)arg1;
- (void)_handleAVChatStateChangeFromState:(NSUInteger)arg1 to:(NSUInteger)arg2;
- (void)_handleAccountNotRegisteredForURL:(id)arg1 registrationInProgress:(BOOL)arg2;
- (void)_handleChangeForRemoteIsMuted:(BOOL)arg1;
- (void)_handleChangeForRemoteIsPaused:(BOOL)arg1;
- (void)_handleConferenceConnected:(id)arg1;
- (void)_handleConferenceConnecting:(id)arg1;
- (void)_handleConferenceDidStart;
- (void)_handleConferenceEnded:(id)arg1 withReason:(NSUInteger)arg2 withError:(NSInteger)arg3;
- (void)_handleConferenceInviteSent:(id)arg1;
- (void)_handleEndConferenceWithReason:(NSUInteger)arg1 error:(NSInteger)arg2;
- (void)_handleInitiationOfAVConference;
- (void)_handleInvitationFrom:(id)arg1 conferenceID:(id)arg2;
- (void)_handleMissedInvitationFrom:(id)arg1 conferenceID:(id)arg2;
- (id)_imHandleFromURL:(id)arg1;
- (id)_initFullConferenceCapable:(BOOL)arg1;
- (void)_postSimpleNotificationName:(id)arg1;
- (void)_presentCallScreenForIMAVChat:(id)arg1;
- (void)_sendPresentConferenceNotification;
- (void)_setupWaitingForFirstRemoteFrameTimerForAVChat:(id)arg1;
- (void)_startRecentCallEntryForConference:(id)arg1;
- (void)_updateEnabledStatusChanged;
- (void)acceptConferenceInvitationFrom:(id)arg1 conferenceID:(id)arg2;
- (BOOL)accountsAreLoggedIn;
- (id)apsConnection;
- (void)avChat:(id)arg1 didSendInvitationForParticipant:(id)arg2;
- (void)avChat:(id)arg1 remoteOrientationChanged:(NSUInteger)arg2;
- (void)avChat:(id)arg1 remoteParticipant:(id)arg2 muteChanged:(BOOL)arg3;
- (void)avChat:(id)arg1 remoteParticipant:(id)arg2 pauseChanged:(BOOL)arg3;
- (void)avChat:(id)arg1 stateChanged:(NSUInteger)arg2;
- (id)avChat;
- (void)avChatStateChangedFrom:(NSUInteger)arg1 to:(NSUInteger)arg2;
- (id)availableConferenceURLs;
- (BOOL)canInitiateConferenceForPhoneNumber:(id)arg1;
- (BOOL)canSendConferenceInvitationTo:(id)arg1;
- (void)conference:(id)arg1 handleMissedInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 receivedCancelledInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 receivedInvitationFromIMHandle:(id)arg2;
- (BOOL)conferenceMuted;
- (BOOL)conferencePaused;
- (id)conferenceURLForPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (id)conferenceURLForPhoneNumber:(id)arg1;
- (BOOL)conferencingIsAvailable;
- (void)connectToService;
- (BOOL)contactCanBeConferenced:(void*)arg1;
- (id)contactConferenceURLForABRecord:(void*)arg1;
- (void)dealloc;
- (void)disconnectFromService;
- (void)endConference;
- (void)hangUpConference;
- (BOOL)havePreviouslyConferencedWithID:(id)arg1;
- (void)iChatAgentConnected;
- (void)iChatAgentDisconnected;
- (id)init;
- (void)inviteFailedFromIMHandle:(id)arg1 reason:(NSInteger)arg2;
- (void)invitedToIMAVChat:(id)arg1;
- (BOOL)isFullConferenceCapable;
- (BOOL)isInConference;
- (void)receivedFirstPreviewForAVChat:(id)arg1;
- (void)receivedFirstRemoteFrameForAVChat:(id)arg1;
- (void)rejectConferenceInvitationFrom:(id)arg1 conferenceID:(id)arg2;
- (void)remoteCameraBeingChangedForAVChat:(id)arg1;
- (void)remoteCameraDidChangeForAVChat:(id)arg1 newCameraType:(NSUInteger)arg2;
- (void)sendConferenceInvitationTo:(id)arg1;
- (void)setConferenceMuted:(BOOL)arg1;
- (void)setConferencePaused:(BOOL)arg1;
- (void)setHavePreviouslyConferenced:(BOOL)arg1 withID:(id)arg2;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setNeedsPushReliability:(BOOL)arg1;

@end
