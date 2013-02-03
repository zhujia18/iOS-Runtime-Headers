/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableArray, NSTimer;

@interface IMAVHandler : NSObject {
    NSTimer *_wiFiQueueTimer;
    NSMutableArray *_wifiActivationQueue;
}

- (void)_checkWiFiQueue:(id)arg1;
- (void)_clearWiFiActivationQueue;
- (void)_enqueueIMAVChatForWiFiActivation:(id)arg1;
- (void)_handleIncomingAVChatForNotification:(id)arg1;
- (void)_notifyInvitationFor:(id)arg1;
- (void)_notifyMissedInvitationFor:(id)arg1;
- (void)_notifyOfIncomingInvitationFor:(id)arg1 notifyInvitationListeners:(BOOL)arg2;
- (void)_setWiFiActivationTimer;
- (oneway void)account:(id)arg1 conference:(id)arg2 cancelRequestInvitationWithBuddy:(id)arg3;
- (oneway void)account:(id)arg1 conference:(id)arg2 changedToNewConferenceID:(id)arg3;
- (oneway void)account:(id)arg1 conference:(id)arg2 notifyMissedInvitationWithBuddy:(id)arg3;
- (oneway void)account:(id)arg1 conference:(id)arg2 peerIDChangedFromID:(id)arg3 toID:(id)arg4;
- (oneway void)account:(id)arg1 conference:(id)arg2 receivedAVMessage:(NSUInteger)arg3 from:(id)arg4 sessionID:(NSUInteger)arg5 userInfo:(id)arg6;
- (oneway void)account:(id)arg1 conference:(id)arg2 receivedCancelInvitationFrom:(id)arg3 properties:(id)arg4;
- (oneway void)account:(id)arg1 conference:(id)arg2 receivedCounterProposalFrom:(id)arg3 properties:(id)arg4;
- (oneway void)account:(id)arg1 conference:(id)arg2 receivedInvitationFrom:(id)arg3 properties:(id)arg4;
- (oneway void)account:(id)arg1 conference:(id)arg2 receivedResponseToInvitationFrom:(id)arg3 properties:(id)arg4;
- (oneway void)account:(id)arg1 conference:(id)arg2 receivedUpdateFrom:(id)arg3 data:(id)arg4;
- (oneway void)account:(id)arg1 conference:(id)arg2 requestInvitationWithBuddy:(id)arg3;
- (oneway void)account:(id)arg1 conference:(id)arg2 requestSendResponseWithResult:(NSInteger)arg3 toPerson:(id)arg4;
- (oneway void)account:(id)arg1 postedError:(id)arg2;
- (oneway void)account:(id)arg1 relay:(id)arg2 handleCancel:(id)arg3 fromPerson:(id)arg4;
- (oneway void)account:(id)arg1 relay:(id)arg2 handleInitate:(id)arg3 fromPerson:(id)arg4;
- (oneway void)account:(id)arg1 relay:(id)arg2 handleUpdate:(id)arg3 fromPerson:(id)arg4;
- (oneway void)audioReflectorRequested:(BOOL)arg1 transactionID:(NSUInteger)arg2;
- (oneway void)currentAVChatInfoRequestedWithTransactionID:(NSUInteger)arg1;
- (void)dealloc;
- (oneway void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (oneway void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (oneway void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3;
- (oneway void)setupComplete;
- (oneway void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (oneway void)videoStillForPersonRequested:(id)arg1 withTransactionID:(NSUInteger)arg2;

@end
