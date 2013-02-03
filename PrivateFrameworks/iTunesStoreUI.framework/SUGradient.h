/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSLock;

@interface SUGradient : NSObject <NSCoding, NSCopying> {
    struct SUGradientPoint { 
        struct CGPoint { 
            float x; 
            float y; 
        } point; 
        float radius; 
    struct SUGradientPoint { 
        struct CGPoint { 
            float x; 
            float y; 
        } point; 
        float radius; 
    NSMutableArray *_colorStops;
    NSLock *_lock;
    } _p0;
    } _p1;
    BOOL _sorted;
    NSInteger _type;
}

@property(readonly) NSArray *colorStopColors;
@property(readonly) NSArray *colorStopOffsets;
@property(readonly) NSInteger gradientType;
@property(readonly) NSInteger numberOfColorStops;
@property(readonly) SUGradientPoint p0;
@property(readonly) SUGradientPoint p1;

+ (id)gradientWithColor:(id)arg1;

- (void)addColorStopWithOffset:(float)arg1 color:(struct CGColor { }*)arg2;
- (id)colorStopColors;
- (id)colorStopOffsets;
- (struct CGGradient { }*)copyCGGradient;
- (struct CGShading { }*)copyShading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (NSInteger)gradientType;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint0:(struct SUGradientPoint { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1 point1:(struct SUGradientPoint { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg2 type:(NSInteger)arg3;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithType:(NSInteger)arg1;
- (NSInteger)numberOfColorStops;
- (struct SUGradientPoint { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })p0;
- (struct SUGradientPoint { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })p1;

@end
