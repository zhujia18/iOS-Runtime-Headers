/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSNumber, NSString, NSSet;

@interface CoreDAVContainer : CoreDAVItem <CoreDAVParsingIgnoreUnknownItems> {
    NSString *_containerTitle;
    NSInteger _containerType;
    NSString *_href;
    NSNumber *_isUnauthenticated;
    NSSet *_privileges;
}

@property(retain) NSString *containerTitle;
@property(readonly) NSString *href;
@property(retain) NSNumber *isUnauthenticated;
@property(retain) NSSet *privileges;
@property NSInteger containerType;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)ignoresUnknownChildren;
+ (BOOL)parsingWithSubItems;

- (id)containerTitle;
- (NSInteger)containerType;
- (id)copyCoreDAVParseRules;
- (void)dealloc;
- (id)description;
- (id)href;
- (id)initWithXMLParser:(id)arg1 nameSpace:(id)arg2 elementName:(id)arg3 nodeAttributes:(id)arg4 root:(id)arg5 parent:(id)arg6 parentSetter:(SEL)arg7 ruleForMe:(id)arg8;
- (id)isUnauthenticated;
- (void)noteIgnoredItem:(id)arg1;
- (id)privileges;
- (void)setAddressBookNode:(id)arg1;
- (void)setContainerTitle:(id)arg1;
- (void)setContainerType:(NSInteger)arg1;
- (void)setIsUnauthenticated:(id)arg1;
- (void)setPrivileges:(id)arg1;
- (void)setSearchAddressBookNode:(id)arg1;

@end
