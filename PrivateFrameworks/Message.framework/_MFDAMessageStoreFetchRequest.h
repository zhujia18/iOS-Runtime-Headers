/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory>, MimePart, Message, MFDAMessageStore;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> *consumer;
    NSInteger format;
    Message *message;
    MimePart *part;
    BOOL partial;
    MFDAMessageStore *store;
}

- (unsigned long long)generationNumber;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)shouldSend;

@end
