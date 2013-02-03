/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSURL, NSString;

@interface OADHyperlink : NSObject {
    NSString *mAction;
    BOOL mDoAddToHistory;
    BOOL mDoEndSound;
    NSString *mInvalidUrl;
    BOOL mIsVisited;
    NSString *mTargetFrame;
    NSURL *mTargetLocation;
    NSInteger mTargetMode;
    NSString *mTooltip;
}

@property BOOL doAddToHistory;
@property BOOL doEndSound;
@property BOOL isVisited;

- (id)action;
- (void)dealloc;
- (BOOL)doAddToHistory;
- (BOOL)doEndSound;
- (NSUInteger)hash;
- (id)init;
- (id)invalidUrl;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isVisited;
- (void)setAction:(id)arg1;
- (void)setDoAddToHistory:(BOOL)arg1;
- (void)setDoEndSound:(BOOL)arg1;
- (void)setInvalidUrl:(id)arg1;
- (void)setIsVisited:(BOOL)arg1;
- (void)setTargetFrame:(id)arg1;
- (void)setTargetLocation:(id)arg1;
- (void)setTargetMode:(NSInteger)arg1;
- (void)setTooltip:(id)arg1;
- (id)targetFrame;
- (id)targetLocation;
- (NSInteger)targetMode;
- (id)tooltip;

@end
