/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UITableView, UILabel;

@interface UITableHeaderFooterView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIImage *_backgroundImage;
    } _frame;
    UILabel *_label;
    float _maxTitleWidth;
    BOOL _sectionHeader;
    UITableView *_tableView;
    NSInteger _tableViewStyle;
    NSInteger _textAlignment;
}

@property UITableView *tableView;
@property(retain) NSString *text;
@property float maxTitleWidth;
@property BOOL sectionHeader;
@property NSInteger tableViewStyle;
@property NSInteger textAlignment;

+ (id)_defaultFontForTableViewStyle:(NSInteger)arg1 isSectionHeader:(BOOL)arg2;

- (id)_label:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (id)_scriptingInfo;
- (struct CGSize { float x1; float x2; })_textSizeForWidth:(float)arg1;
- (void)_updateBackgroundImage;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)maxTitleWidth;
- (BOOL)sectionHeader;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMaxTitleWidth:(float)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setSectionHeader:(BOOL)arg1;
- (void)setTableView:(id)arg1;
- (void)setTableViewStyle:(NSInteger)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tableView;
- (id)text;
- (NSInteger)textAlignment;

@end
