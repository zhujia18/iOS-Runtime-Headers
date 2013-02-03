/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBase64Encoder : MFBaseFilterDataConsumer {
    NSUInteger _left;
    unsigned char _leftovers[3];
    NSUInteger _line;
    NSUInteger _lineBreak;
    BOOL _padChar;
    char *_table;
}

@property BOOL allowSlash;
@property NSUInteger lineBreak;
@property BOOL padChar;

- (BOOL)allowSlash;
- (NSInteger)appendData:(id)arg1;
- (void)done;
- (id)initWithConsumers:(id)arg1;
- (unsigned long)lineBreak;
- (BOOL)padChar;
- (void)setAllowSlash:(BOOL)arg1;
- (void)setLineBreak:(unsigned long)arg1;
- (void)setPadChar:(BOOL)arg1;
- (void)setStandardLineBreak;

@end
