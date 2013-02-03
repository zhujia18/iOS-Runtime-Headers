/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationTargetElement;

@interface PDCommonMediaNodeData : PDCommonTimeNodeData {
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long mNumberOfSlides;
    PDAnimationTargetElement *mTarget;
    long mVolume;
}

- (void)dealloc;
- (id)init;
- (BOOL)isMuted;
- (BOOL)isShowWhenStopped;
- (long)numberOfSlides;
- (void)setIsMuted:(BOOL)arg1;
- (void)setIsShowWhenStopped:(BOOL)arg1;
- (void)setNumberOfSlides:(long)arg1;
- (void)setTarget:(id)arg1;
- (void)setVolume:(long)arg1;
- (id)target;
- (long)volume;

@end
