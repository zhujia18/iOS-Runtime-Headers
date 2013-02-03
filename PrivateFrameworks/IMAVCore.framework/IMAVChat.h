/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMHandle, NSData, IMPair, NSError, IMAVChatParticipant, NSDate, NSDictionary, IMAVChatFeature, NSString, NSMutableDictionary, NSMutableArray, NSTimer;

@interface IMAVChat : NSObject {
    unsigned int _securityExpectedByInitiator : 1;
    unsigned int _hasGatheredInfo : 1;
    unsigned int _isListening : 1;
    unsigned int _isCounterProposalConnect : 1;
    unsigned int _hasPendingAccept : 1;
    unsigned int _hasPendingInit : 1;
    unsigned int _isTerminating : 1;
    unsigned int _needToSendEndConferenceNotification : 1;
    unsigned int _Q8IrisOpen : 1;
    unsigned int _usingCoercedIDs : 1;
    unsigned int _silentConference : 1;
    unsigned int _suppressBeginChat : 1;
    unsigned int _isCaller : 1;
    unsigned int _isVideo : 1;
    unsigned int _dataOut : 1;
    unsigned int _dataIn : 1;
    unsigned int _didRemoteMute : 1;
    unsigned int _didRemotePause : 1;
    unsigned int _remoteNetworkStall : 1;
    unsigned int _participantOrderFinal : 1;
    NSString *_GUID;
    NSUInteger _addStatus;
    NSInteger _addableParticipants;
    IMAVChatFeature *_ard;
    NSInteger _ardRole;
    IMAVChatFeature *_auxVideo;
    NSInteger _callID;
    NSDictionary *_callerProperties;
    id _conferenceController;
    NSString *_conferenceID;
    NSData *_connectData;
    double _connectionTimeoutTime;
    NSTimer *_connectionTimeoutTimer;
    NSDate *_dateConnected;
    NSDate *_dateCreated;
    NSDate *_dateEnded;
    id _delegate;
    NSError *_error;
    NSDictionary *_errorDict;
    NSInteger _fileTransferState;
    IMHandle *_initiator;
    double _invitationTimeoutTime;
    NSTimer *_inviteTimeoutTimer;
    NSUInteger _lastPostedState;
    id _legacyDelegate;
    IMAVChatParticipant *_localParticipant;
    NSUInteger _localState;
    NSString *_participantNames;
    NSMutableArray *_participants;
    IMPair *_pendingPreemptiveRelayInitate;
    IMAVChatFeature *_recorder;
    NSTimer *_screenSaverBlockingTimer;
    NSInteger _securityLevel;
    NSUInteger _sessionID;
    NSMutableDictionary *_unknownPartyStates;
}

+ (BOOL)_anyOfTheseParticipants:(id)arg1 matchAnyOfTheseIMHandles:(id)arg2;
+ (id)_avChatArray;
+ (void)_blockConnectedConferenceByFileTransfer:(BOOL)arg1;
+ (void)_doSendUpdate;
+ (void)_sendUpdate;
+ (id)activeChat;
+ (id)allowedClassesForArchives;
+ (id)avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)avChatWithConferenceID:(id)arg1;
+ (id)avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2 ARDRole:(NSInteger)arg3;
+ (id)bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(NSUInteger)arg3 properties:(id)arg4;
+ (id)chatList;
+ (id)chatWithSessionID:(NSUInteger)arg1;
+ (id)chatsWithIMAVChatState:(NSUInteger)arg1;
+ (id)connectedChat;
+ (id)connectedChats;
+ (id)connectingChats;
+ (id)currentAVChatInfo;
+ (double)defaultConnectionTimeoutTime;
+ (double)defaultInvitationTimeoutTime;
+ (void)fileTransferDidEnd;
+ (void)fileTransferDidStart;
+ (void)getVideoStillForIMHandle:(id)arg1 data:(id*)arg2 result:(NSUInteger*)arg3;
+ (id)incomingInvitations;
+ (BOOL)isIMHandleInActiveConference:(id)arg1;
+ (BOOL)isStateActive:(NSUInteger)arg1;
+ (BOOL)isStateFinal:(NSUInteger)arg1;
+ (NSInteger)maxRemoteParticipantsVideo:(BOOL)arg1;
+ (id)nonFinalChat;
+ (id)outgoingInvitations;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (NSInteger)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;

- (id)GUID;
- (void)_VCCounterProposal:(id)arg1;
- (BOOL)_allParticipantsCanBeSecure;
- (BOOL)_allParticipantsUsingICE;
- (void)_blockByFileTransfer:(BOOL)arg1;
- (void)_blockScreenSaver:(id)arg1;
- (BOOL)_checkVCResponseDict:(id)arg1;
- (void)_clearConnectionTimeoutTimer;
- (void)_clearInvitationTimeoutTimer;
- (void)_clearScreenSaverBlockingTimer;
- (id)_conferenceController;
- (void)_configureVCC;
- (void)_configureVCCRecv;
- (void)_connectTo:(id)arg1 withData:(id)arg2;
- (void)_connectionTimeout:(id)arg1;
- (void)_counterPropose:(id)arg1;
- (id)_currentAVChatInfo;
- (NSInteger)_currentSecurityLevel;
- (void)_endChatWithReason:(NSUInteger)arg1 andError:(NSInteger)arg2;
- (void)_finalizeParticipantOrder:(id)arg1 andNotify:(BOOL)arg2;
- (void)_handleAVError:(id)arg1;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (void)_imHandleStatusChanged:(id)arg1;
- (BOOL)_imHandlesRequireCoercedIDs:(id)arg1;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (void)_initParticipantsWithNuggets:(id)arg1;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(NSInteger)arg3 sessionID:(NSUInteger)arg4 video:(BOOL)arg5 extraProperties:(id)arg6;
- (NSInteger)_initialRelayStatus;
- (void)_initiatorInfoChanged:(id)arg1;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_invitationTimeout:(id)arg1;
- (void)_inviteeInfoChanged:(id)arg1;
- (void)_mainThreadFinishPrepareConnectionForInvitedParty:(id)arg1;
- (BOOL)_moveVCPartyID:(id)arg1 toIndex:(NSUInteger)arg2 inCount:(NSUInteger)arg3;
- (void)_noteConferenceConnected:(id)arg1;
- (void)_noteInviteDeliveredForParticipant:(id)arg1;
- (void)_noteStatusChangesForParticipant:(id)arg1;
- (id)_participantMatchingVCPartyID:(id)arg1;
- (void)_participantsChanged:(id)arg1;
- (BOOL)_participantsCheckOut;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (void)_postStateToDelegateIfNecessary;
- (void)_prepareConnectionForParticipant:(id)arg1;
- (void)_refreshAddableParticipants;
- (void)_relayPropose:(id)arg1;
- (void)_removeRemoteParticipant:(id)arg1;
- (void)_reportError:(id)arg1;
- (void)_responseToVCInvite:(id)arg1;
- (void)_sendVCUpdateTo:(id)arg1 skipConnected:(BOOL)arg2;
- (void)_serviceCapsChanged:(id)arg1;
- (void)_setActiveConference;
- (void)_setCallerProperties:(id)arg1;
- (void)_setConferenceController:(id)arg1;
- (void)_setConferenceID:(id)arg1;
- (void)_setConnectionTimeoutTimer;
- (void)_setCreationDate;
- (void)_setErrorDictionary:(id)arg1;
- (void)_setInvitationTimeoutTimer;
- (void)_setScreenSaverBlockingTimer;
- (void)_setStateDisconnected;
- (void)_setupIdentity;
- (void)_subscribeToVCNotifications;
- (NSInteger)_theoreticalSecurityLevel;
- (void)_threadedPrepareConnectionForInvitedParty:(id)arg1;
- (void)_unknownParty:(id)arg1 didConnect:(BOOL)arg2;
- (void)_unknownParty:(id)arg1 muteOrPause:(NSUInteger)arg2 didChange:(BOOL)arg3;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_updateParticipantsWithData:(id)arg1;
- (void)_updateSecurity;
- (void)_vccInitDidFinish;
- (void)acceptInvitation;
- (id)account;
- (NSUInteger)addStatus;
- (NSUInteger)addStatusForIMHandle:(id)arg1 asVideo:(BOOL)arg2 ardRole:(NSInteger)arg3;
- (NSInteger)addableParticipants;
- (float)audioVolume;
- (void)beginChat;
- (NSInteger)callID;
- (id)callerProperties;
- (NSUInteger)cameraOrientation;
- (BOOL)canAddIMHandle:(id)arg1;
- (BOOL)canUseRelay;
- (void)cancelInvitation;
- (void)conferenceHasTimedOut;
- (void)conferenceHasVideoError;
- (void)conferenceHungUpByPersonWithID:(id)arg1;
- (id)conferenceID;
- (void)conferencePersonWithID:(id)arg1 certificateRejected:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 completedWithInfo:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 didCancel:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didConnect:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 hasInfoForInsufficientBandwidth:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 hasInfoForNoPackets:(id)arg2;
- (BOOL)conferencePersonWithID:(id)arg1 hasValidRemoteCertificate:(struct __SecCertificate { }*)arg2;
- (void)conferencePersonWithID:(id)arg1 securityDidChange:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)conferencePersonWithIDChangedSendingAudio:(id)arg1;
- (void)conferencePersonWithIDChangedSendingVideo:(id)arg1;
- (void)connectProc:(id)arg1;
- (double)connectionTimeoutTime;
- (BOOL)dataIn;
- (BOOL)dataOut;
- (id)dateConnected;
- (id)dateCreated;
- (id)dateEnded;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(NSUInteger)arg1;
- (id)delegate;
- (id)description;
- (BOOL)didRemoteMute;
- (BOOL)didRemotePause;
- (void)endChat;
- (void)endChatWithError:(NSInteger)arg1;
- (void)endChatWithReason:(NSUInteger)arg1 error:(NSInteger)arg2;
- (void)endChatWithReason:(NSUInteger)arg1;
- (NSInteger)endedError;
- (NSUInteger)endedReason;
- (id)error;
- (id)errorDictionary;
- (void)finalizeOrderWithVideoFrom:(id)arg1;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(NSUInteger)arg2 userInfo:(id)arg3;
- (void)handleVideoConferenceNotification:(id)arg1;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 ARDRole:(NSInteger)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (id)initPersistentAVChatWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(NSInteger)arg3 sessionID:(NSUInteger)arg4 video:(BOOL)arg5;
- (id)initiatorIMHandle;
- (id)initiatorParticipant;
- (void)invalidateParticipantNames;
- (double)invitationTimeoutTime;
- (void)invite:(id)arg1;
- (void)inviteAll;
- (id)inviteesInfoAsPlist:(BOOL)arg1 account:(id)arg2;
- (BOOL)isAOLInterop;
- (BOOL)isActive;
- (BOOL)isBlockedByFileTransfer;
- (BOOL)isCaller;
- (BOOL)isChatMute;
- (BOOL)isChatPaused;
- (BOOL)isConferenceSilent;
- (BOOL)isLocalNetworkStalled;
- (BOOL)isMute;
- (BOOL)isOneWay;
- (BOOL)isPaused;
- (BOOL)isQ8IrisOpen;
- (BOOL)isRemoteMute;
- (BOOL)isRemoteNetworkStalled;
- (BOOL)isRemotePaused;
- (BOOL)isSendingAudio;
- (BOOL)isSendingVideo;
- (BOOL)isStateFinal;
- (BOOL)isVideo;
- (id)legacyDelegate;
- (id)localParticipant;
- (void)notifySystemVC:(BOOL)arg1;
- (NSInteger)numActiveParticipants;
- (id)orderedRemotePartyIDs;
- (id)otherIMHandle;
- (void)participant:(id)arg1 changedFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)participantNames;
- (id)participantWithID:(id)arg1;
- (id)participants;
- (id)participantsNotInNuggets:(id)arg1;
- (id)remoteParticipants;
- (void)removeParticipantWithID:(id)arg1;
- (NSInteger)securityLevel;
- (void)sendARDFileTransferAuthorization:(id)arg1 to:(id)arg2;
- (NSUInteger)sessionID;
- (void)setAudioVolume:(float)arg1;
- (void)setCallID:(NSInteger)arg1;
- (void)setCameraOrientation:(NSUInteger)arg1;
- (void)setConferenceSilent:(BOOL)arg1;
- (void)setConnectionTimeoutTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setInvitationTimeoutTime:(double)arg1;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setLegacyDelegate:(id)arg1;
- (void)setMute:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setRemoteMute:(BOOL)arg1;
- (void)setRemotePaused:(BOOL)arg1;
- (BOOL)shouldConferenceAcceptIncomingRequestFromUser:(id)arg1 onLocalSubnetOnly:(BOOL*)arg2;
- (void)startVCOnMainThread:(id)arg1;
- (NSUInteger)state;
- (id)stringForAddStatus:(NSUInteger)arg1;
- (id)stringForAddStatus;
- (void)toggleChatMute;
- (void)toggleChatPaused;
- (void)toggleMute;
- (void)togglePaused;
- (void)toggleRemoteMute;
- (void)toggleRemotePaused;
- (void)toggleSendingAudio;
- (void)toggleSendingVideo;
- (id)vcErrorReport;
- (id)vcPartyIDForIMHandle:(id)arg1;

@end
