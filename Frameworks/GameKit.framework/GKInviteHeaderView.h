/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, UIColor, UIImage;

@interface GKInviteHeaderView : UIView {
    UIImage *_gameIcon;
    NSString *_gameTitle;
    NSInteger _maxPlayers;
    NSInteger _minPlayers;
    NSString *_playersString;
    BOOL _showsPlayerString;
    UIColor *_tintColor;
}

@property(retain) NSString *playersString;
@property(retain) UIColor *tintColor;
@property NSInteger maxPlayers;
@property NSInteger minPlayers;
@property BOOL showsPlayerString;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)maxPlayers;
- (NSInteger)minPlayers;
- (id)playersString;
- (void)setMaxPlayers:(NSInteger)arg1;
- (void)setMinPlayers:(NSInteger)arg1;
- (void)setPlayersString:(id)arg1;
- (void)setShowsPlayerString:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (BOOL)showsPlayerString;
- (id)tintColor;

@end
