/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSTimeZone, NSString;

@interface NSCalendarDate : NSDate {
    NSString *_formatString;
    void *_reserved;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSUInteger refCount;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)calendarDate;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2;
+ (id)dateWithYear:(NSInteger)arg1 month:(NSUInteger)arg2 day:(NSUInteger)arg3 hour:(NSUInteger)arg4 minute:(NSUInteger)arg5 second:(NSUInteger)arg6 timeZone:(id)arg7;
+ (id)distantFuture;
+ (id)distantPast;

- (id)addTimeInterval:(double)arg1;
- (id)calendarFormat;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingYears:(NSInteger)arg1 months:(NSInteger)arg2 days:(NSInteger)arg3 hours:(NSInteger)arg4 minutes:(NSInteger)arg5 seconds:(NSInteger)arg6;
- (NSInteger)dayOfCommonEra;
- (NSInteger)dayOfMonth;
- (NSInteger)dayOfWeek;
- (NSInteger)dayOfYear;
- (void)dealloc;
- (id)description;
- (id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)ekmsuidGMTDateToDateInTimeZone:(id)arg1;
- (id)ekmsuidStringForYearMonthDay;
- (void)encodeWithCoder:(id)arg1;
- (NSInteger)hourOfDay;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)initWithYear:(NSInteger)arg1 month:(NSUInteger)arg2 day:(NSUInteger)arg3 hour:(NSUInteger)arg4 minute:(NSUInteger)arg5 second:(NSUInteger)arg6 timeZone:(id)arg7;
- (NSInteger)microsecondOfSecond;
- (NSInteger)minuteOfHour;
- (NSInteger)monthOfYear;
- (oneway void)release;
- (NSInteger)secondOfMinute;
- (void)setCalendarFormat:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)timeZone;
- (id)timeZoneDetail;
- (NSInteger)yearOfCommonEra;
- (void)years:(NSInteger*)arg1 months:(NSInteger*)arg2 days:(NSInteger*)arg3 hours:(NSInteger*)arg4 minutes:(NSInteger*)arg5 seconds:(NSInteger*)arg6 sinceDate:(id)arg7;

@end
