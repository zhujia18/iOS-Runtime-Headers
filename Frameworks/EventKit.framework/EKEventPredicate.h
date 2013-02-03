/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, NSString, NSDate, NSTimeZone;

@interface EKEventPredicate : NSPredicate {
    NSArray *_calendars;
    NSDate *_endDate;
    NSDate *_startDate;
    NSTimeZone *_timeZone;
    NSString *_uid;
}

@property(readonly) NSArray *calendars;
@property(readonly) NSDate *endDate;
@property(readonly) NSString *eventIdentifier;
@property(readonly) NSDate *startDate;
@property(readonly) NSTimeZone *timeZone;

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventIdentifier:(id)arg4 calendars:(id)arg5;

- (id)calendars;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)eventIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventIdentifier:(id)arg4 calendars:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)startDate;
- (id)timeZone;

@end
