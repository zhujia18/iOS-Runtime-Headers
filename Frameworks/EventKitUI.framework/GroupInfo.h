/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, NSString;

@interface GroupInfo : NSObject {
    NSMutableArray *_calendars;
    BOOL _selected;
    void *_store;
    NSString *_title;
}

@property(retain,readonly) NSArray *calendarInfos;
@property(copy,readonly) NSSet *calendarSet;
@property(copy,readonly) NSSet *selectedCalendarSet;
@property void *store;
@property(copy) NSString *title;
@property(copy,readonly) NSString *typeTitle;
@property(readonly) BOOL isSubscribed;
@property(readonly) NSInteger numCalendars;
@property(readonly) NSInteger numSelectedCalendars;
@property BOOL selected;
@property(readonly) BOOL showCalendarNameIfSolitary;
@property(readonly) NSInteger sortOrder;

- (void*)calendarAtIndex:(NSInteger)arg1;
- (id)calendarInfos;
- (id)calendarSet;
- (id)copyCalendars;
- (void)dealloc;
- (id)init;
- (id)initWithStore:(void*)arg1;
- (id)initWithTitle:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (BOOL)isSubscribed;
- (NSInteger)numCalendars;
- (NSInteger)numSelectedCalendars;
- (void)removeCalendar:(id)arg1;
- (void)selectAll;
- (void)selectNone;
- (BOOL)selected;
- (id)selectedCalendarSet;
- (void)setSelected:(BOOL)arg1;
- (void)setStore:(void*)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)showCalendarNameIfSolitary;
- (NSInteger)sortOrder;
- (void*)store;
- (id)title;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
- (id)typeTitle;

@end
