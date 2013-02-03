/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSSet, NSArray;

@interface CalendarEventAttendeesEditItem : CalendarEventEditItem {
    NSSet *_attendeeAddresses;
    NSSet *_attendeeNames;
    NSArray *_attendees;
}

- (void)absorbValueFromView:(id)arg1;
- (id)cellForSubitemAtIndex:(NSInteger)arg1 givenEditModel:(id)arg2;
- (BOOL)configureForCalendarConstraints:(id)arg1 withOccurrence:(struct CalEventOccurrence { }*)arg2;
- (void)dealloc;
- (id)detailViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;
- (id)identifier;
- (void)saveIntoEvent:(void*)arg1;
- (id)serializedValue;

@end
