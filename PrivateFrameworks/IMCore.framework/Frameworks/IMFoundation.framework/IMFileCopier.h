/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSURL, <IMFileCopierDelegate>;

@interface IMFileCopier : NSObject {
    unsigned int _inProgress : 1;
    unsigned int _shouldCancel : 1;
    unsigned int _didErrorOccur : 1;
    <IMFileCopierDelegate> *_delegate;
    id _identifier;
    NSURL *_inputURL;
    NSUInteger _operation;
    NSURL *_outputURL;
}

- (void)_fillOutputURLFromInputURL;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (BOOL)didErrorOccur;
- (id)identifier;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(NSUInteger)arg4 delegate:(id)arg5;
- (id)inputURL;
- (id)outputURL;
- (void)setDelegate:(id)arg1;
- (void)start;
- (BOOL)wasCancelled;

@end
