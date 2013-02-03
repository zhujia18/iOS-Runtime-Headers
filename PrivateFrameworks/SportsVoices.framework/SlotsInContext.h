/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class SlotSequence, SimpleSlotSequence;

@interface SlotsInContext : NSObject {
    SlotSequence *postContext;
    SlotSequence *preContext;
    SlotSequence *preContextReversed;
    SimpleSlotSequence *significantSlots;
}

@property(readonly) SimpleSlotSequence *significantSlots;

+ (id)instanceFromPlist:(id)arg1;
+ (id)slotsInContextWithSignificantSlotSequence:(id)arg1;
+ (id)test;

- (id)description;
- (id)indicesOfOccurrencesInTarget:(id)arg1;
- (id)initFromPlist:(id)arg1;
- (id)initWithArraysForSignificantSlots:(id)arg1 preContext:(id)arg2 postContext:(id)arg3;
- (id)significantSlots;

@end
