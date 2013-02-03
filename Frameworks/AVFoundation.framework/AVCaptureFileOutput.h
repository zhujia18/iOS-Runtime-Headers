/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureFileOutputInternal;

@interface AVCaptureFileOutput : AVCaptureOutput {
    AVCaptureFileOutputInternal *_fileOutputInternal;
}

@property(readonly) NSURL *outputFileURL;
@property ? maxRecordedDuration;
@property long long maxRecordedFileSize;
@property long long minFreeDiskSpaceLimit;
@property(readonly) ? recordedDuration;
@property(readonly) long long recordedFileSize;
@property(getter=isRecording,readonly) BOOL recording;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (BOOL)isRecording;
- (BOOL)isRecordingPaused;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })maxRecordedDuration;
- (long long)maxRecordedFileSize;
- (long long)minFreeDiskSpaceLimit;
- (id)outputFileURL;
- (void)pauseRecording;
- (BOOL)pausesRecordingOnInterruption;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })recordedDuration;
- (long long)recordedFileSize;
- (void)resumeRecording;
- (void)setMaxRecordedDuration:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (void)setMaxRecordedFileSize:(long long)arg1;
- (void)setMinFreeDiskSpaceLimit:(long long)arg1;
- (void)setPausesRecordingOnInterruption:(BOOL)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;

@end
