/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
    NSInteger _dataNetworkType;
    BOOL _enableRSSI;
    BOOL _showRSSI;
    NSInteger _wifiStrengthBars;
    NSInteger _wifiStrengthRaw;
}

+ (void)_initializeSafeCategory;

- (id)_dataNetworkImageForStyle:(NSInteger)arg1;
- (id)_stringForRSSI;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)contentsImageForStyle:(NSInteger)arg1;
- (float)extraLeftPadding;
- (BOOL)isAccessibilityElement;
- (float)maximumOverlap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)updateForNewData:(struct { BOOL x1[20]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; NSInteger x15; NSInteger x16; unsigned int x17 : 1; BOOL x18[256]; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1 actions:(NSInteger)arg2;

@end
