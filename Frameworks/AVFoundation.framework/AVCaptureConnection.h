/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureConnectionInternal;

@interface AVCaptureConnection : NSObject {
    AVCaptureConnectionInternal *_internal;
}

@property(readonly) NSArray *audioChannels;
@property(readonly) NSArray *inputPorts;
@property(readonly) AVCaptureOutput *output;
@property(getter=isActive,readonly) BOOL active;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isVideoMirroringSupported,readonly) BOOL supportsVideoMirroring;
@property(getter=isVideoOrientationSupported,readonly) BOOL supportsVideoOrientation;
@property(getter=isVideoMirrored) BOOL videoMirrored;
@property NSInteger videoOrientation;

+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;

- (void)addInputPort:(id)arg1;
- (id)audioChannels;
- (void)dealloc;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (id)inputPorts;
- (void)invalidate;
- (BOOL)isActive;
- (BOOL)isEnabled;
- (BOOL)isVideoMirrored;
- (BOOL)isVideoMirroringSupported;
- (BOOL)isVideoOrientationSupported;
- (id)mediaType;
- (id)output;
- (void)removeInputPort:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setVideoMirrored:(BOOL)arg1;
- (void)setVideoOrientation:(NSInteger)arg1;
- (void)updateAudioChannelsArray;
- (void)updateAudioLevelsArray;
- (NSInteger)videoOrientation;

@end
