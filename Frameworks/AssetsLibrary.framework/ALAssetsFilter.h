/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsFilter : NSObject {
    id _internal;
}

@property(retain) ALAssetsFilterInternal *internal;

+ (id)allAssets;
+ (id)allPhotos;
+ (id)allVideos;

- (NSInteger)_filter;
- (void)_setFilter:(NSInteger)arg1;
- (void)dealloc;
- (id)init;
- (id)internal;
- (void)setInternal:(id)arg1;

@end
