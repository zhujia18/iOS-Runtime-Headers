/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLRow : NSExternalRefCountedData {
    unsigned short _fk_count;
    void *_keySlots;
    struct _NSScalarObjectID { Class x1; } *_oid;
    long long _optLock;
    unsigned short _property_count;
}

+ (id)allocForSQLEntity:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (NSUInteger)newBatchRowAllocation:(id*)arg1 count:(NSUInteger)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(struct _NSScalarObjectID {}**)arg4 andTimestamp:(double)arg5;

- (void)_validateToOnes;
- (NSUInteger)_versionNumber;
- (id)attributeValueForSlot:(NSUInteger)arg1;
- (id)copy;
- (void)dealloc;
- (id)description;
- (id)entity;
- (NSUInteger)entityID;
- (NSUInteger)foreignEntityKeyForSlot:(NSUInteger)arg1;
- (long long)foreignKeyForSlot:(NSUInteger)arg1;
- (id)initWithSQLEntity:(id)arg1 objectID:(struct _NSScalarObjectID { Class x1; }*)arg2;
- (id)initWithSQLEntity:(id)arg1 ownedObjectID:(struct _NSScalarObjectID { Class x1; }*)arg2 andTimestamp:(double)arg3;
- (BOOL)isEqual:(id)arg1;
- (const id*)knownKeyValuesPointer;
- (struct __CFBitVector { }*)newCalculatedDeltaMaskFrom:(id)arg1;
- (struct _NSScalarObjectID { Class x1; }*)newObjectIDForToOne:(id)arg1;
- (struct _NSScalarObjectID { Class x1; }*)objectID;
- (long long)optLock;
- (long long)pk64;
- (void)setAttributeSlotNoRetain:(NSUInteger)arg1 withObject:(id)arg2;
- (void)setForeignEntityKeySlot:(NSUInteger)arg1 unsigned:(NSUInteger)arg2;
- (void)setForeignKeySlot:(NSUInteger)arg1 int64:(long long)arg2;
- (void)setObjectID:(struct _NSScalarObjectID { Class x1; }*)arg1;
- (void)setOptLock:(long long)arg1;
- (id)valueForKey:(id)arg1;

@end
