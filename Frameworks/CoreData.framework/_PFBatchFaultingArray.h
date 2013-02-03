/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class _PFArray, NSFetchRequest, NSManagedObjectContext;

@interface _PFBatchFaultingArray : NSArray {
    struct _PFBatchFaultingArrayFlags { 
        unsigned int _LRUIndex : 8; 
        unsigned int _uniformEntity : 1; 
        unsigned int _RESERVED : 23; 
    NSUInteger *_LRUBatches;
    _PFArray *_array;
    NSUInteger _batchSize;
    NSInteger _cd_rc;
    NSUInteger _count;
    NSUInteger *_entryFlags;
    } _flags;
    NSManagedObjectContext *_moc;
    NSFetchRequest *_request;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (id)arrayFromObjectIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)dealloc;
- (id)description;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)getObjects:(id*)arg1;
- (id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3;
- (BOOL)isEqualToArray:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newArrayFromObjectIDs;
- (id)objectAtIndex:(NSUInteger)arg1;
- (void)release;
- (id)retain;
- (NSUInteger)retainCount;

@end
