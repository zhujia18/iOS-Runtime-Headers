/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableDictionary;

@interface MKUsage : NSObject {
    NSMutableDictionary *_requests;
}

+ (id)sharedUsage;

- (void)dealloc;
- (id)init;
- (void)logRequest:(id)arg1 count:(NSUInteger)arg2;
- (void)submitUsageNow;

@end
