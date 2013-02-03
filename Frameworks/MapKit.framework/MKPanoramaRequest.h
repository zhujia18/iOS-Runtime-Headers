/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface MKPanoramaRequest : NSObject {
    NSString *panoramaID;
    NSInteger status;
    NSInteger tilePath;
}

@property(copy) NSString *panoramaID;
@property NSInteger status;
@property NSInteger tilePath;
@property(readonly) NSInteger x;
@property(readonly) NSInteger y;
@property(readonly) NSInteger zoomLevel;

+ (id)stringWithStatus:(NSInteger)arg1;
+ (id)stringWithType:(NSInteger)arg1;

- (void)cancel;
- (void)dealloc;
- (id)panoramaID;
- (void)setPanoramaID:(id)arg1;
- (void)setStatus:(NSInteger)arg1;
- (void)setTilePath:(NSInteger)arg1;
- (NSInteger)status;
- (NSInteger)tilePath;
- (NSInteger)x;
- (NSInteger)y;
- (NSInteger)zoomLevel;

@end
