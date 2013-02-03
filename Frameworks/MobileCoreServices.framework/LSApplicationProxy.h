/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSArray;

@interface LSApplicationProxy : LSResourceProxy {
    NSArray *_privateDocumentIconNames;
}

@property(readonly) NSString *applicationIdentifier;
@property(readonly) NSString *roleIdentifier;

+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1;

- (id)_initWithApplicationIdentifier:(id)arg1 roleIdentifier:(id)arg2 name:(id)arg3 resourcesDirectoryURL:(id)arg4 iconFileNames:(id)arg5 iconIsPrerendered:(BOOL)arg6;
- (id)applicationIdentifier;
- (void)dealloc;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedName;
- (id)privateDocumentIconNames;
- (id)resourcesDirectoryURL;
- (id)roleIdentifier;
- (void)setPrivateDocumentIconNames:(id)arg1;

@end
