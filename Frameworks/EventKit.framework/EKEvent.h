/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKCalendar, EKParticipant, NSTimeZone, NSArray, NSMutableArray, EKEventStore, NSString, NSURL, NSDate, NSNumber;

@interface EKEvent : NSObject {
    NSMutableArray *_alarms;
    BOOL _allDay;
    NSMutableArray *_attendees;
    NSInteger _availability;
    EKCalendar *_calendar;
    NSNumber *_calendarId;
    NSDate *_dateStamp;
    BOOL _detached;
    unsigned long long _dirtyFlags;
    double _duration;
    NSDate *_endDate;
    void *_event;
    NSString *_eventId;
    NSArray *_exceptionDates;
    unsigned long long _loadFlags;
    NSString *_location;
    NSString *_notes;
    NSDate *_occurrenceDate;
    EKParticipant *_organizer;
    NSDate *_originalStartDate;
    NSInteger _partStatus;
    NSArray *_recurrenceRules;
    NSString *_responseComment;
    NSDate *_startDate;
    NSInteger _status;
    EKEventStore *_store;
    NSTimeZone *_timeZone;
    NSString *_title;
    BOOL _unread;
    NSURL *_url;
}

@property(copy) NSArray *alarms;
@property(readonly) NSArray *attendees;
@property(retain) EKCalendar *calendar;
@property(copy) NSDate *endDate;
@property(readonly) NSString *eventIdentifier;
@property(readonly) NSDate *lastModifiedDate;
@property(copy) NSString *location;
@property(copy) NSString *notes;
@property(readonly) EKParticipant *organizer;
@property(retain) EKRecurrenceRule *recurrenceRule;
@property(copy) NSDate *startDate;
@property(copy) NSString *title;
@property(getter=isAllDay) BOOL allDay;
@property NSInteger availability;
@property(readonly) BOOL isDetached;
@property(readonly) NSInteger status;

+ (id)eventWithEventStore:(id)arg1;

- (id)URL;
- (id)_alarms;
- (BOOL)_areAlarmsDirty;
- (BOOL)_areRecurrenceRulesDirty;
- (id)_attendees;
- (id)_canMoveToCalendar:(id)arg1;
- (BOOL)_checkStartDateConstraintAgainstDate:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 error:(id*)arg2;
- (void)_clearCachedData;
- (BOOL)_commitAlarms:(id*)arg1;
- (BOOL)_commitAttendees:(id*)arg1;
- (BOOL)_commitRecurrenceRule:(id*)arg1;
- (void)_disassociate;
- (BOOL)_occurrenceExistsOnDate:(double)arg1;
- (void)_reconnectCalendar;
- (void)_reconnectEvent;
- (void)_reconnectToServer;
- (id)_recurrenceRules;
- (void)_sendModifiedNote;
- (void)_setStoreInternal:(id)arg1;
- (void)_storeClosed;
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(NSInteger)arg1;
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(NSInteger)arg1 error:(id*)arg2;
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;
- (void)addAlarm:(id)arg1;
- (NSInteger)alarmCount;
- (id)alarms;
- (id)allRecurrenceRules;
- (NSInteger)attendeeCount;
- (id)attendees;
- (NSInteger)availability;
- (id)calendar;
- (BOOL)canAddAttendees;
- (BOOL)canAddRecurrence;
- (BOOL)canBeRespondedTo;
- (BOOL)canDetachSingleOccurrence;
- (BOOL)canSetAlarms;
- (BOOL)canSetAvailability;
- (void)clearUnreadState;
- (BOOL)commit:(NSInteger)arg1 error:(id*)arg2;
- (NSInteger)compareStartDateWithEvent:(id)arg1;
- (id)copyState;
- (void)dealloc;
- (id)description;
- (id)detachedEvents;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDateGr;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;
- (id)eventIdentifier;
- (id)exceptionDates;
- (id)externalId;
- (BOOL)hasActionWithExternalAndFolderID;
- (BOOL)hasAlarm;
- (BOOL)hasSelfAttendee;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventStore:(id)arg1 event:(void*)arg2 occurrenceDate:(id)arg3 eventIdentifier:(id)arg4;
- (id)initWithEventStore:(id)arg1 event:(void*)arg2 occurrenceDate:(id)arg3;
- (id)initWithEventStore:(id)arg1;
- (id)initialEndDate;
- (id)initialStartDate;
- (BOOL)isAllDay;
- (BOOL)isDetached;
- (BOOL)isDirty;
- (BOOL)isDirtyIgnoringCalendar;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFloating;
- (BOOL)isInvite;
- (BOOL)isRecurring;
- (BOOL)isStatusDirty;
- (BOOL)isUnread;
- (id)lastModifiedDate;
- (id)location;
- (id)nextAlarmDate;
- (id)notes;
- (void*)objectRef;
- (id)occurrenceDate;
- (id)organizer;
- (id)originalEvent;
- (NSInteger)participationStatus;
- (NSInteger)pendingParticipationStatus;
- (id)recurrenceRule;
- (NSInteger)recurrenceRuleCount;
- (NSInteger)recurrenceRuleCountInDB;
- (BOOL)refresh;
- (BOOL)remove:(NSInteger)arg1 error:(id*)arg2;
- (void)removeAlarm:(id)arg1;
- (BOOL)requiresDetach;
- (id)responseComment;
- (BOOL)responseMustApplyToAll;
- (void)restoreState:(id)arg1;
- (void)revert;
- (id)rowId;
- (void)setAlarms:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (void)setAttendees:(id)arg1;
- (void)setAvailability:(NSInteger)arg1;
- (void)setCalendar:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setParticipationStatus:(NSInteger)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)startDate;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDateGr;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (NSInteger)status;
- (id)store;
- (id)timeZone;
- (id)title;

@end
