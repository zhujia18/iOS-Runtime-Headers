/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVValidatorInternal;

@interface AVValidator : NSObject {
    AVValidatorInternal *_priv;
}

@property(readonly) NSURL *initialURL;
@property(readonly) NSURL *resolvedURL;
@property(readonly) float progress;
@property(readonly) BOOL resourceIsInspectable;
@property(readonly) BOOL resourceIsPlayable;
@property(readonly) NSInteger status;

+ (BOOL)_containsStreamingResource:(id)arg1;
+ (void)initialize;
+ (BOOL)isPlayableResource:(id)arg1;
+ (BOOL)isSupportedMIMEType:(id)arg1;
+ (BOOL)isSupportedType:(id)arg1;
+ (BOOL)isSupportedURL:(id)arg1;

- (void)cancelValidation;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initialURL;
- (float)progress;
- (id)resolvedURL;
- (BOOL)resourceIsInspectable;
- (BOOL)resourceIsPlayable;
- (NSInteger)status;
- (void)validateAsynchronouslyWithCompletionHandler:(id)arg1;

@end
