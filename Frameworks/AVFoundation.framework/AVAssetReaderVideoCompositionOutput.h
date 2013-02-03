/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetReaderVideoCompositionOutputInternal;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

@property(copy) AVVideoComposition *videoComposition;
@property(readonly) NSDictionary *videoSettings;
@property(readonly) NSArray *videoTracks;

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
+ (BOOL)canRequestCompressedSamplesForVideoTracks:(id)arg1 withVideoSettings:(id)arg2;

- (id)_asset;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (id)mediaType;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (id)videoSettings;
- (id)videoTracks;

@end
