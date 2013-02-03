/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSLock, NSMutableDictionary, MLPhotoLibrary;

@interface PLBakedVideoFilesCacheCreator : NSObject <MLPhotoBakedThumbnailsDelegate, PLCachedFilesManagerPlugin> {
    BOOL _cancelPostProcessing;
    NSLock *_cancellationLock;
    NSMutableDictionary *_optionsDictionary;
    MLPhotoLibrary *_photoLibrary;
}

- (void)_addBakedThumbnailsForVideo:(id)arg1 toCollection:(id)arg2 sourceFormat:(NSInteger)arg3 bakedFormats:(id)arg4;
- (void)_createNewVideoCachedFiles;
- (void)_garbageCollectCachedFiles;
- (void)_initUIComponents;
- (id)_pathToVideosMetadataFile;
- (void)_removeOldAlbumVideosBakedThumbnails;
- (void)cancel;
- (void)createBakedThumbnailsForVideo:(id)arg1;
- (void)dealloc;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (BOOL)recreateCachedFilesIfNecessary;

@end
