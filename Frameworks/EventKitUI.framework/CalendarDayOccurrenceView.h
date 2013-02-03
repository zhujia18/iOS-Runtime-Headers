/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSIndexSet, NSString, UIColor;

@interface CalendarDayOccurrenceView : UIControl {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _tentative : 1;
    unsigned int _cancelled : 1;
    unsigned int _selected : 1;
    unsigned int _darkensSelection : 1;
    unsigned int _dimmed : 1;
    unsigned int _colorType : 2;
    UIColor *_color;
    id _delegate;
    NSString *_location;
    NSIndexSet *_locationMetrics;
    } _locationRect;
    struct CalEventOccurrence { } *_occurrence;
    float _textEndY;
    NSString *_title;
    } _titleEndPoint;
    NSIndexSet *_titleMetrics;
    } _titleRect;
    NSUInteger _touchKeptInsideOccurrence;
    float _visibleHeight;
}

+ (void)_clearViewCache;
+ (id)_viewCache;
+ (NSUInteger)_viewCacheSize;
+ (float)bottomShadowMargin;
+ (void)clearCaches;
+ (float)minimumHeight;
+ (id)occurrenceViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 tentative:(BOOL)arg2 cancelled:(BOOL)arg3 color:(id)arg4 selected:(BOOL)arg5 title:(id)arg6 location:(id)arg7;

- (id)_accessibilityCalEventOccurrence;
- (id)_cachedImageForColor:(id)arg1 height:(float)arg2;
- (void)_drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_getTitleMetrics:(id*)arg1 endPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (id)_imageForColor:(id)arg1 height:(float)arg2;
- (void)_invalidateMetrics;
- (id)_locationFont;
- (id)_locationMetrics;
- (id)_titleFont;
- (id)_wildcatTentativeOutline;
- (BOOL)cancelled;
- (id)color;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 tentative:(BOOL)arg2 cancelled:(BOOL)arg3 color:(id)arg4 selected:(BOOL)arg5 title:(id)arg6 location:(id)arg7;
- (id)location;
- (struct CalEventOccurrence { }*)occurrence;
- (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 withCornerRadius:(float)arg3;
- (void)removeFromSuperview;
- (void)setCancelled:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (void)setDarkensSelection:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLocation:(id)arg1;
- (void)setOccurrence:(struct CalEventOccurrence { }*)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisibleHeight:(float)arg1;
- (BOOL)shouldTrack;
- (BOOL)tentative;
- (id)title;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
