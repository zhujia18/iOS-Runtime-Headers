/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser {
    NSUInteger _existingRecordType;
    NSMutableDictionary *_unknownAttributes;
}

- (BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (void*)createRecordInSource:(void*)arg1 outRecordType:(NSUInteger*)arg2;
- (void)dealloc;
- (id)defaultADRLabel;
- (id)defaultLabel;
- (id)defaultURLLabel;
- (id)genericLabel;
- (BOOL)importToGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (BOOL)importToPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (id)initWithData:(id)arg1;
- (BOOL)parseUID;

@end
