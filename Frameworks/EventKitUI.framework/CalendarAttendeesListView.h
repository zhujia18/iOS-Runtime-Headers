/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, UIImage, CalendarModel;

@interface CalendarAttendeesListView : UITableView <CalendarView, UITableViewDelegate, UITableViewDataSource> {
    id _attendeeDelegate;
    NSArray *_attendees;
    UIImage *_attendingImage;
    UIImage *_maybeImage;
    CalendarModel *_model;
    UIImage *_notAttendingImage;
    UIImage *_pendingImage;
    BOOL _shouldShowStatusImages;
}

+ (id)navigationTitleForModel:(id)arg1;

- (id)_attendingImage;
- (id)_imageForStatus:(NSInteger)arg1;
- (id)_maybeImage;
- (id)_notAttendingImage;
- (id)_pendingImage;
- (void)_selectedAttendeeChanged:(id)arg1;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)_setShouldShowImagesForEvent:(void*)arg1;
- (void)cleanUp;
- (void)dealloc;
- (void)finishedTransitionIn;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAttendeeDelegate:(id)arg1;
- (void)setDisplayedOccurrence:(struct CalEventOccurrence { }*)arg1;
- (void)setModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;

@end
