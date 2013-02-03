/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData;

@interface _PFEncodedData : NSData {
    NSData *_aData;
    NSUInteger _byteCount;
}

- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getBytes:(void*)arg1 length:(NSUInteger)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (NSUInteger)length;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateCopy;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfData:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)release;
- (id)retain;
- (NSUInteger)retainCount;
- (id)subdataWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;

@end
