/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, MailMessageLibrary;

@interface MFSqliteMessageIDStore : NSObject {
    MailMessageLibrary *_library;
    NSInteger _mailboxRowid;
    NSString *_url;
}

- (void)_loadMailboxRowidIfNecessary:(struct sqlite3 { }*)arg1;
- (void)dealloc;
- (void)deleteAllUIDs;
- (void)deleteUIDsNotInArray:(id)arg1;
- (unsigned long long)flagsForUID:(id)arg1;
- (id)initWithLibrary:(id)arg1 URLString:(id)arg2;
- (id)knownMessageIDsFromSet:(id)arg1;
- (id)messageIDsAddedBeforeDate:(double)arg1;
- (NSUInteger)numberOfMessageIDs;

@end
