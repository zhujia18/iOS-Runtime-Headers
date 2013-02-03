/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSString;

@interface AVChatParticipantStatusNugget : NSObject <NSCoding> {
    NSUInteger _ardRole;
    NSInteger _error;
    NSString *_imHandleID;
    NSString *_imHandleName;
    NSString *_invitedBy;
    NSUInteger _reason;
    BOOL _sendingAudio;
    BOOL _sendingVideo;
    NSUInteger _state;
    BOOL _usingICE;
    NSString *_vcPartyID;
}

+ (id)filterNuggets:(id)arg1 filterEndedState:(BOOL)arg2 convertFromDict:(BOOL)arg3;
+ (id)nuggetWithDictionaryDescription:(id)arg1;

- (id)ID;
- (void)_configureWithDictionaryDescription:(id)arg1;
- (NSUInteger)ardRole;
- (void)dealloc;
- (id)dictionaryDescription;
- (void)encodeWithCoder:(id)arg1;
- (NSInteger)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipant:(id)arg1;
- (id)invitedBy;
- (BOOL)isUsingICE;
- (id)name;
- (NSUInteger)reason;
- (BOOL)sendingAudio;
- (BOOL)sendingVideo;
- (void)setVCPartyID:(id)arg1;
- (NSUInteger)state;
- (id)vcPartyID;

@end
