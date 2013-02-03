/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSMutableData, SWBluetoothMessageHandler, SWPacketUnscrambler, NSTimer;

@interface SWBluetoothRemote : SWRemote {
    NSMutableData *_bluetoothInputData;
    NSTimer *_leftKeyTimer;
    BOOL _leftKeyWasDown;
    SWBluetoothMessageHandler *_messageHandler;
    NSTimer *_nikeKeyTimer;
    BOOL _nikeKeyWasDown;
    SWPacketUnscrambler *_packetUnscrambler;
    NSTimer *_playKeyTimer;
    BOOL _playKeyWasDown;
    NSTimer *_remoteLeftKeyLongPressTimer;
    NSTimer *_remoteNikeKeyLongPressTimer;
    NSTimer *_remotePlayKeyLongPressTimer;
    NSTimer *_remoteRightKeyLongPressTimer;
    NSTimer *_rightKeyTimer;
    BOOL _rightKeyWasDown;
    NSTimer *_volumeDownKeyTimer;
    BOOL _volumeDownKeyWasDown;
    NSTimer *_volumeUpKeyTimer;
    BOOL _volumeUpKeyWasDown;
}

- (void)_connectToDeviceWithAddress:(struct { unsigned char x1[6]; })arg1;
- (struct { unsigned char x1[6]; })_deviceAddressForSerialNumber:(id)arg1;
- (void)_discoverDevice;
- (void)_handleNikeKeyIsDown:(BOOL)arg1;
- (void)_handleNikeKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemoteLeftKeyIsDown:(BOOL)arg1;
- (void)_handleSimpleRemoteLeftKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemotePlayKeyIsDown:(BOOL)arg1;
- (void)_handleSimpleRemotePlayKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemoteRightKeyIsDown:(BOOL)arg1;
- (void)_handleSimpleRemoteRightKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemoteVolumeDownKeyIsDown:(BOOL)arg1;
- (void)_handleSimpleRemoteVolumeDownKeyUpTimer:(id)arg1;
- (void)_handleSimpleRemoteVolumeUpKeyIsDown:(BOOL)arg1;
- (void)_handleSimpleRemoteVolumeUpKeyUpTimer:(id)arg1;
- (void)_postBeginMusicFastForwardNotification:(id)arg1;
- (void)_postBeginMusicRewindNotification:(id)arg1;
- (void)_postEndWorkoutNotification:(id)arg1;
- (void)_postFirePowersongNotification:(id)arg1;
- (void)_receivedActivationNotification:(id)arg1;
- (void)_receivedConnectionFailureNotification:(id)arg1;
- (void)_receivedConnectionNotification:(id)arg1;
- (void)_receivedDiscoveryNotification:(id)arg1;
- (void)_receivedInputReadNotification:(id)arg1;
- (void)_registerToReadInput;
- (id)_serialNumberForPacket:(id)arg1 timestamp:(NSUInteger)arg2 radioId:(NSUInteger*)arg3;
- (void)beginLinking;
- (void)beginSearching;
- (void)cancelLinking;
- (void)cancelSearching;
- (void)dealloc;
- (id)init;
- (void)unlink;

@end
