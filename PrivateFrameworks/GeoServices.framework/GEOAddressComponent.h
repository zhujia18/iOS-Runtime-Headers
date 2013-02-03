/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOAddressComponent : PBCodable {
    NSInteger _featureType;
    NSString *_locale;
    NSString *_name;
}

@property(retain) NSString *locale;
@property(retain) NSString *name;
@property NSInteger featureType;
@property(readonly) BOOL hasLocale;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (NSInteger)featureType;
- (BOOL)hasLocale;
- (id)init;
- (id)locale;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setFeatureType:(NSInteger)arg1;
- (void)setLocale:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
