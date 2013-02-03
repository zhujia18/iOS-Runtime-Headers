/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal *_internal;
}

@property(readonly) AVCaptureDevice *device;

+ (id)deviceInputWithDevice:(id)arg1 error:(id*)arg2;

- (void)_setDevice:(id)arg1;
- (void)dealloc;
- (id)device;
- (void)didStartForSession:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (id)initWithDevice:(id)arg1 error:(id*)arg2;
- (id)notReadyError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)ports;
- (void)setDevice:(id)arg1;
- (void)setSession:(id)arg1;

@end
