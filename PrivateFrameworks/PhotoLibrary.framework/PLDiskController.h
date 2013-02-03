/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLDiskController : NSObject {
    struct { 
        unsigned int needToCheckDiskSpace : 1; 
        unsigned int probablyLowOnDiskSpace : 1; 
        unsigned int isPhotosApp : 1; 
        unsigned int extra : 28; 
    unsigned long _bytesRequiredForPhoto;
    } _flags;
    double _lastFSCheck;
}

+ (long long)diskSpaceAvailableForUse;
+ (long long)freeDiskSpaceThreshold;
+ (id)sharedInstance;

- (void)_actuallyUpdateCookie;
- (void)_diskSpaceDidBecomeLow;
- (void)_updateCookie;
- (void)dealloc;
- (BOOL)hasEnoughDiskToTakePicture;
- (id)init;
- (void)updateAvailableDiskSpace;

@end
