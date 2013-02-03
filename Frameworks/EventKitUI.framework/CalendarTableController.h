/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSIndexPath, NSArray, UITableView, NSMutableSet, CalendarModel;

@interface CalendarTableController : NSObject <UITableViewDataSource, UITableViewDelegate> {
    unsigned int _listIsFlat : 1;
    unsigned int _showAll : 1;
    unsigned int _showColors : 1;
    unsigned int _allSelected : 1;
    NSIndexPath *_checkedRow;
    id _delegate;
    struct CalFilter { } *_filter;
    NSMutableSet *_filterCalendars;
    NSMutableSet *_filterStores;
    NSArray *_groups;
    CalendarModel *_model;
    NSMutableSet *_selectedCalendars;
    NSMutableSet *_selectedStores;
    struct __CFDictionary { } *_storeGroupMap;
    NSMutableSet *_stores;
    NSInteger _style;
    UITableView *_table;
}

@property id delegate;
@property(readonly) NSInteger style;

- (void)_applyFilter;
- (id)_calendarsForStore:(void*)arg1;
- (id)_groupForStore:(void*)arg1;
- (id)_indexPathForCalendar:(void*)arg1 store:(void*)arg2;
- (BOOL)_isCalendarInFilter:(void*)arg1;
- (BOOL)_isStoreInFilter:(void*)arg1;
- (NSInteger)_numSelectedGroups;
- (void)_sanitizeFilter;
- (void)_selectAllCalendarsAndStores:(BOOL)arg1 adjustFilter:(BOOL)arg2;
- (void)_selectCalendar:(id)arg1 selected:(BOOL)arg2 adjustFilter:(BOOL)arg3;
- (void)_selectGroup:(id)arg1 selected:(BOOL)arg2 adjustFilter:(BOOL)arg3;
- (id)_selectedCalendars;
- (void)_setSelectedCalendars:(id)arg1;
- (void*)checkedCalendar;
- (struct CalFilter { }*)createFilterFromSelection;
- (void)dealloc;
- (id)delegate;
- (id)indexPathForCalendar:(void*)arg1;
- (id)indexPathForStore:(void*)arg1;
- (id)initWithStyle:(NSInteger)arg1;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)setCalendars:(struct __CFArray { }*)arg1 withModel:(id)arg2;
- (void)setCheckedRow:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectionFromFilter:(struct CalFilter { }*)arg1;
- (void)setTableView:(id)arg1;
- (NSInteger)style;
- (BOOL)tableIsFlat;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;

@end
