/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSMutableSet;

@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {
    NSString *_destinationPath;
    NSMutableSet *_skippedPaths;
}

+ (id)_errorWithErrno:(NSInteger)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
+ (id)filesystemItemCopyOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;

- (void)_handleFTSEntry:(struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long x4; void *x5; char *x6; char *x7; NSInteger x8; NSInteger x9; unsigned short x10; unsigned short x11; unsigned long long x12; NSInteger x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; }*)arg1;
- (BOOL)_shouldCopyItemAtPath:(const char *)arg1 toPath:(const char *)arg2;
- (BOOL)_shouldProceedAfterErrno:(NSInteger)arg1 copyingItemAtPath:(const char *)arg2 toPath:(const char *)arg3;
- (BOOL)_validatePaths:(id*)arg1;
- (void)dealloc;
- (void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;
- (BOOL)shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2;
- (BOOL)shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3;

@end
