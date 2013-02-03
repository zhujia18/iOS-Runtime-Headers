/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
}

@property(readonly) NSDictionary *videoCompressionProperties;
@property(readonly) void *videoEncoderSpecification;
@property(readonly) NSDictionary *videoScalingProperties;
@property(readonly) NSInteger height;
@property(readonly) NSUInteger videoCodecType;
@property(readonly) NSInteger width;

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1;

- (NSInteger)height;
- (id)initWithAVVideoSettingsDictionary:(id)arg1;
- (unsigned long)videoCodecType;
- (id)videoCompressionProperties;
- (void*)videoEncoderSpecification;
- (id)videoScalingProperties;
- (NSInteger)width;
- (BOOL)willYieldCompressedSamples;

@end
