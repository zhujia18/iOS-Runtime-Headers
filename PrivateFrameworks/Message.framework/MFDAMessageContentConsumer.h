/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFMessageDataConsumerFactory>, NSMutableData, <MFCollectingDataConsumer>;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer> {
    <MFCollectingDataConsumer> *_alternatePartConsumer;
    NSMutableData *_bodyData;
    <MFMessageDataConsumerFactory> *_consumerFactory;
    <MFCollectingDataConsumer> *_dataConsumer;
    NSInteger _requestedFormat;
    BOOL _succeeded;
    double _timeOfLastActivity;
    BOOL _triedCreatingAlternatePartConsumer;
}

@property(retain) <MFCollectingDataConsumer> *alternatePartConsumer;
@property(retain,readonly) NSMutableData *bodyData;
@property(retain) <MFMessageDataConsumerFactory> *consumerFactory;
@property(retain) <MFCollectingDataConsumer> *dataConsumer;
@property NSInteger requestedFormat;
@property(readonly) double timeOfLastActivity;

- (id)alternatePartConsumer;
- (id)bodyData;
- (void)consumeData:(char *)arg1 length:(NSInteger)arg2 format:(NSInteger)arg3 mailMessage:(id)arg4;
- (id)consumerFactory;
- (id)data;
- (id)dataConsumer;
- (id)dataConsumerForPart:(id)arg1;
- (void)dealloc;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (NSInteger)requestedFormat;
- (void)setAlternatePartConsumer:(id)arg1;
- (void)setConsumerFactory:(id)arg1;
- (void)setDataConsumer:(id)arg1;
- (void)setRequestedFormat:(NSInteger)arg1;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(NSInteger)arg2;
- (BOOL)succeeded;
- (double)timeOfLastActivity;

@end
