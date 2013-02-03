/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, NSMutableDictionary, NSMutableSet;

@interface MKTransitIconCache : NSObject {
    NSMutableDictionary *_IDToImage;
    NSString *_cacheFolderPath;
    NSMutableSet *_iconIDs;
    NSUInteger _iconSize;
    NSInteger _iconVersion;
    BOOL _isEnabled;
}

@property(retain) NSString *cacheFolderPath;
@property(readonly) NSArray *iconIDs;
@property NSUInteger iconSize;
@property NSInteger iconVersion;
@property BOOL isEnabled;

+ (id)sharedTransitIconCache;

- (void)_addImage:(id)arg1 withID:(long long)arg2;
- (id)_iconPathForID:(long long)arg1;
- (id)_infoPath;
- (void)_resetCache;
- (id)cacheFolderPath;
- (id)iconForID:(long long)arg1;
- (id)iconIDs;
- (NSUInteger)iconSize;
- (NSInteger)iconVersion;
- (id)init;
- (BOOL)isEnabled;
- (void)setCacheFolderPath:(id)arg1;
- (void)setIconData:(id)arg1 forID:(long long)arg2;
- (void)setIconSize:(NSUInteger)arg1;
- (void)setIconVersion:(NSInteger)arg1;
- (void)setIsEnabled:(BOOL)arg1;

@end
