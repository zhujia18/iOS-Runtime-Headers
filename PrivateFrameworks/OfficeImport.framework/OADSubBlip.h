/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData;

@interface OADSubBlip : OCDDelayedMedia {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
     /* Encoded args for previous method: B8@0:4 */
    NSData *mData;
    } mFrame;
    NSInteger mSizeInBytes;
    } mSizeInPoints;
    NSInteger mType;
}

- (id)data;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (NSUInteger)hash;
- (id)initWithData:(id)arg1 type:(NSInteger)arg2;
- (BOOL)isEqual:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isLoaded;
- (void)setData:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSizeInBytes:(long)arg1;
- (void)setSizeInPoints:(struct CGSize { float x1; float x2; })arg1;
- (long)sizeInBytes;
- (struct CGSize { float x1; float x2; })sizeInPoints;
- (NSInteger)type;

@end
