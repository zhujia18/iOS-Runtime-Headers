/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetReaderAudioMixOutputInternal;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
    AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;
}

@property(copy) AVAudioMix *audioMix;
@property(readonly) NSDictionary *audioSettings;
@property(readonly) NSArray *audioTracks;

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
+ (BOOL)canRequestCompressedSamplesForAudioTracks:(id)arg1 withAudioSettings:(id)arg2;

- (id)_asset;
- (id)_audioVolumeCurveForTrack:(id)arg1;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2;
- (id)audioMix;
- (id)audioSettings;
- (id)audioTracks;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
- (id)mediaType;
- (void)setAudioMix:(id)arg1;

@end
