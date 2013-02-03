/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, LBSGLatLng, NSString;

@interface LBSGLocation : PBCodable {
    NSInteger _accuracy;
    NSInteger _altitude;
    NSInteger _confidence;
    NSMutableArray *_features;
    BOOL _hasAccuracy;
    BOOL _hasAltitude;
    BOOL _hasConfidence;
    BOOL _hasHeading;
    BOOL _hasLocType;
    BOOL _hasObsolete;
    BOOL _hasTimestamp;
    BOOL _hasVelocity;
    BOOL _hasVerticalAccuracy;
    NSInteger _heading;
    LBSGLatLng *_latLng;
    NSInteger _locType;
    NSString *_locationString;
    NSString *_misc;
    BOOL _obsolete;
    NSString *_source;
    long long _timestamp;
    NSInteger _velocity;
    NSInteger _verticalAccuracy;
}

@property(retain) NSMutableArray *features;
@property(retain) LBSGLatLng *latLng;
@property(retain) NSString *locationString;
@property(retain) NSString *misc;
@property(retain) NSString *source;
@property NSInteger accuracy;
@property NSInteger altitude;
@property NSInteger confidence;
@property(readonly) NSInteger featuresCount;
@property(readonly) BOOL hasAccuracy;
@property(readonly) BOOL hasAltitude;
@property(readonly) BOOL hasConfidence;
@property(readonly) BOOL hasHeading;
@property(readonly) BOOL hasLatLng;
@property(readonly) BOOL hasLocType;
@property(readonly) BOOL hasLocationString;
@property(readonly) BOOL hasMisc;
@property(readonly) BOOL hasObsolete;
@property(readonly) BOOL hasSource;
@property(readonly) BOOL hasTimestamp;
@property(readonly) BOOL hasVelocity;
@property(readonly) BOOL hasVerticalAccuracy;
@property NSInteger heading;
@property NSInteger locType;
@property BOOL obsolete;
@property long long timestamp;
@property NSInteger velocity;
@property NSInteger verticalAccuracy;

- (NSInteger)accuracy;
- (void)addFeature:(id)arg1;
- (NSInteger)altitude;
- (NSInteger)confidence;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureAtIndex:(NSUInteger)arg1;
- (id)features;
- (NSInteger)featuresCount;
- (BOOL)hasAccuracy;
- (BOOL)hasAltitude;
- (BOOL)hasConfidence;
- (BOOL)hasHeading;
- (BOOL)hasLatLng;
- (BOOL)hasLocType;
- (BOOL)hasLocationString;
- (BOOL)hasMisc;
- (BOOL)hasObsolete;
- (BOOL)hasSource;
- (BOOL)hasTimestamp;
- (BOOL)hasVelocity;
- (BOOL)hasVerticalAccuracy;
- (NSInteger)heading;
- (id)init;
- (id)latLng;
- (NSInteger)locType;
- (id)locationString;
- (id)misc;
- (BOOL)obsolete;
- (BOOL)readFrom:(id)arg1;
- (void)setAccuracy:(NSInteger)arg1;
- (void)setAltitude:(NSInteger)arg1;
- (void)setConfidence:(NSInteger)arg1;
- (void)setFeature:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFeatures:(id)arg1;
- (void)setHeading:(NSInteger)arg1;
- (void)setLatLng:(id)arg1;
- (void)setLocType:(NSInteger)arg1;
- (void)setLocationString:(id)arg1;
- (void)setMisc:(id)arg1;
- (void)setObsolete:(BOOL)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(long long)arg1;
- (void)setVelocity:(NSInteger)arg1;
- (void)setVerticalAccuracy:(NSInteger)arg1;
- (id)source;
- (long long)timestamp;
- (NSInteger)velocity;
- (NSInteger)verticalAccuracy;
- (void)writeTo:(id)arg1;

@end
