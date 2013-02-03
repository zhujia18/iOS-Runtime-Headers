/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, NSString, MKUserLocationSearchResult;

@interface MKUserLocationInternal : NSObject {
    CLLocation *fixedLocation;
    CLLocation *location;
    CLLocation *predictedLocation;
    MKUserLocationSearchResult *searchResult;
    NSInteger source;
    NSString *subtitle;
    double timestamp;
    NSString *title;
    BOOL updating;
}

@property(retain) CLLocation *fixedLocation;
@property(retain) CLLocation *location;
@property(retain) CLLocation *predictedLocation;
@property(readonly) MKUserLocationSearchResult *searchResult;
@property(retain) NSString *subtitle;
@property(retain) NSString *title;
@property NSInteger source;
@property double timestamp;
@property(getter=isUpdating) BOOL updating;

- (id)fixedLocation;
- (BOOL)isUpdating;
- (id)location;
- (id)predictedLocation;
- (id)searchResult;
- (void)setFixedLocation:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPredictedLocation:(id)arg1;
- (void)setSource:(NSInteger)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdating:(BOOL)arg1;
- (NSInteger)source;
- (id)subtitle;
- (double)timestamp;
- (id)title;

@end
