/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableDictionary, NSMutableData, NSMutableArray;

@interface MLPhotoBakedThumbnails : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    NSInteger _count;
    NSInteger _format;
    BOOL _missingHeader;
    NSMutableDictionary *_options;
    BOOL _optionsAccessed;
    NSInteger _singleThumbnailImageLength;
    } _size;
    NSMutableData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
}

@property(retain,readonly) NSMutableDictionary *options;
@property(readonly) NSUInteger bitmapInfo;
@property(readonly) NSInteger bitsPerComponent;
@property(readonly) NSInteger bytesPerPixel;
@property(readonly) NSInteger format;
@property(readonly) CGRect imageRect;
@property(readonly) CGSize size;

+ (BOOL)saveBakedThumbnailsOfAlbumVideoImages:(id)arg1 toFile:(id)arg2 format:(NSInteger)arg3 orientation:(NSInteger*)arg4 options:(id)arg5 delegate:(id)arg6;
+ (BOOL)saveBakedThumbnailsOfImages:(id)arg1 toFile:(id)arg2 format:(NSInteger)arg3 orientation:(NSInteger*)arg4 options:(id)arg5 delegate:(id)arg6;
+ (id)thumbnailsForAlbumVideo:(id)arg1 format:(NSInteger)arg2;
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(NSInteger)arg2;

- (NSUInteger)bitmapInfo;
- (NSInteger)bitsPerComponent;
- (NSInteger)bytesPerPixel;
- (NSInteger)count;
- (void)dealloc;
- (id)description;
- (NSInteger)format;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRect;
- (id)initWithAlbumVideo:(id)arg1 format:(NSInteger)arg2;
- (id)initWithAlbumVideoImages:(id)arg1 format:(NSInteger)arg2 orientation:(NSInteger*)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)initWithContentsOfFile:(id)arg1 format:(NSInteger)arg2;
- (id)initWithData:(id)arg1 format:(NSInteger)arg2;
- (id)initWithImages:(id)arg1 format:(NSInteger)arg2 orientation:(NSInteger*)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)options;
- (BOOL)saveToAlbumVideoFile:(id)arg1;
- (BOOL)saveToFile:(id)arg1;
- (id)serializedData;
- (struct CGSize { float x1; float x2; })size;
- (char *)thumbnailBytesAtIndex:(NSInteger)arg1;
- (id)thumbnailDataAtIndex:(NSInteger)arg1;
- (struct CGImage { }*)thumbnailImageAtIndex:(NSInteger)arg1;
- (BOOL)writeBorderedThumbnailOfImage:(struct CGImage { }*)arg1 toBuffer:(void*)arg2 orientation:(NSInteger*)arg3 format:(NSInteger)arg4 formatInfo:(const struct BorderedFormatInfo { NSInteger x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_4_1_2; } x4; NSUInteger x5; NSInteger x6; NSInteger x7; float x8[4]; float x9[4]; NSUInteger x10; }*)arg5 delegate:(id)arg6;

@end
