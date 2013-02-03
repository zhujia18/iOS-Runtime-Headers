/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel, UIButton, UIView, UITextField, NSString, NSTimer, UIColor;

@interface UITableViewCell : UIView <NSCoding> {
    struct { 
        unsigned int showingDeleteConfirmation : 1; 
        unsigned int separatorStyle : 3; 
        unsigned int selectionStyle : 3; 
        unsigned int selectionFadeFraction : 11; 
        unsigned int editing : 1; 
        unsigned int editingStyle : 3; 
        unsigned int accessoryType : 3; 
        unsigned int editingAccessoryType : 3; 
        unsigned int showsAccessoryWhenEditing : 1; 
        unsigned int showsReorderControl : 1; 
        unsigned int showDisclosure : 1; 
        unsigned int showTopSeparator : 1; 
        unsigned int disclosureClickable : 1; 
        unsigned int disclosureStyle : 1; 
        unsigned int showingRemoveControl : 1; 
        unsigned int sectionLocation : 3; 
        unsigned int tableViewStyle : 1; 
        unsigned int shouldIndentWhileEditing : 1; 
        unsigned int fontSet : 1; 
        unsigned int usingDefaultSelectedBackgroundView : 1; 
        unsigned int wasSwiped : 1; 
        unsigned int highlighted : 1; 
        unsigned int separatorDirty : 1; 
        unsigned int drawn : 1; 
        unsigned int drawingDisabled : 1; 
        unsigned int style : 12; 
        unsigned int showingMenu : 1; 
        unsigned int clipsContents : 1; 
        unsigned int animatingSelection : 1; 
        unsigned int backgroundColorSet : 1; 
        unsigned int needsSetup : 1; 
    SEL _accessoryAction;
    UIButton *_accessoryView;
    UIColor *_backgroundColor;
    UIView *_backgroundView;
    UIView *_bottomShadowAnimationView;
    UIColor *_bottomShadowColor;
    UIView *_contentView;
    UIView *_customAccessoryView;
    UIView *_customEditingAccessoryView;
    NSTimer *_deselectTimer;
    UILabel *_detailTextLabel;
    SEL _editAction;
    UITextField *_editableTextField;
    UIButton *_editingAccessoryView;
    id _editingData;
    UIView *_floatingSeparatorView;
    UIImageView *_imageView;
    NSInteger _indentationLevel;
    float _indentationWidth;
    double _lastSelectionTime;
    id _layoutManager;
    id _oldEditingData;
    SEL _returnAction;
    NSString *_reuseIdentifier;
    float _rightMargin;
    UIColor *_sectionBorderColor;
    UIView *_selectedBackgroundView;
    UIView *_selectedOverlayView;
    float _selectionFadeDuration;
    UIColor *_separatorColor;
    UIView *_separatorView;
    } _tableCellFlags;
    id _target;
    float _textFieldOffset;
    UILabel *_textLabel;
    UIView *_topSeparatorView;
    UIView *_topShadowAnimationView;
    UIColor *_topShadowColor;
    UIView *_topShadowView;
    struct __CFDictionary { } *_unhighlightedStates;
}

@property(getter=_needsSetup) BOOL needsSetup; /* unknown property attribute: S_setNeedsSetup: */
@property float textFieldOffset; /* unknown property attribute: SsetTextFieldOffset: */
@property(retain) UIView *accessoryView;
@property(retain) UIView *backgroundView;
@property(retain,readonly) UIView *contentView;
@property(retain,readonly) UILabel *detailTextLabel;
@property(retain,readonly) UITextField *editableTextField;
@property(retain) UIView *editingAccessoryView;
@property(readonly) SUGridView *gridView;
@property(retain,readonly) UIImageView *imageView;
@property(retain) _UITableViewCellOldEditingData *oldEditingData;
@property(copy,readonly) NSString *reuseIdentifier;
@property(retain) UIView *selectedBackgroundView;
@property(retain,readonly) UILabel *textLabel;
@property NSInteger accessoryType;
@property(getter=isEditing) BOOL editing;
@property NSInteger editingAccessoryType;
@property(readonly) NSInteger editingStyle;
@property(getter=isHighlighted) BOOL highlighted;
@property NSInteger indentationLevel;
@property float indentationWidth;
@property(getter=isSelected) BOOL selected;
@property NSInteger selectionStyle;
@property BOOL shouldIndentWhileEditing;
@property(readonly) BOOL showingDeleteConfirmation;
@property BOOL showsReorderControl;
@property BOOL wasSwiped;

+ (BOOL)__original_resolveClassMethod:(SEL)arg1;
+ (void)_initializeSafeCategory;
+ (BOOL)resolveClassMethod:(SEL)arg1;

- (id)__original_forwardingTargetForSelector:(SEL)arg1;
- (BOOL)_accessibilityAlwaysReturnsChild;
- (id)_accessibilityChildren;
- (void)_accessibilityClearChildren;
- (void)_accessibilityHandleRemoveConfirm;
- (void)_accessibilityHandleRemoveSwitch;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityIndexPath;
- (id)_accessibilityInternalData;
- (BOOL)_accessibilityIsRemoveConfirmVisible;
- (BOOL)_accessibilityIsRemoveControlVisible;
- (id)_accessibilityMockParent;
- (id)_accessibilityOverrideChildren;
- (id)_accessibilityRetrieveTableViewCellText;
- (id)_accessibilityRetrieveTableViewIvarsText;
- (void)_accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2;
- (void)_accessibilitySwitchMockView:(id)arg1 toParent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityTextElementFrame;
- (id)_accessibilityTextElementText;
- (void)_accessibilityUpdateRemoveControl;
- (SEL)_accessoryAction;
- (id)_accessoryView:(BOOL)arg1;
- (void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(NSInteger)arg2;
- (void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(NSInteger)arg2;
- (BOOL)_backgroundColorSet;
- (float)_backgroundInset;
- (id)_backgroundView:(BOOL)arg1;
- (BOOL)_canDrawContent;
- (void)_cancelInternalPerformRequests;
- (void)_clearOpaqueViewState:(id)arg1;
- (id)_contentBackgroundColor;
- (id)_createRemoveControlForStyle:(NSInteger)arg1;
- (void)_createReorderControlIfNeeded;
- (id)_currentAccessoryView:(BOOL)arg1;
- (id)_customAccessoryView:(BOOL)arg1;
- (id)_customEditingAccessoryView:(BOOL)arg1;
- (id)_defaultFont;
- (void)_delayedDeselect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_delegateConfirmationRect;
- (void)_deselectAnimationFinished;
- (id)_detailTextLabel:(BOOL)arg1;
- (id)_detailTextLabel;
- (void)_didAddContentSubview:(id)arg1;
- (void)_didCreateContentView;
- (id)_disclosureImage:(BOOL)arg1;
- (id)_disclosurePressedImage:(BOOL)arg1;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)_drawSeparatorInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_editableTextField:(BOOL)arg1;
- (id)_editableTextField;
- (id)_editingAccessoryView:(BOOL)arg1;
- (float)_editingButtonOffset;
- (void)_editingTransitionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_finishedFadingGrabber:(id)arg1 finished:(BOOL)arg2;
- (void)_grabberBeganReorder:(id)arg1;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;
- (void)_grabberReleased:(id)arg1;
- (BOOL)_hasAccessoryView;
- (BOOL)_hasEditingAccessoryView;
- (struct CGSize { float x1; float x2; })_imageInsetSize;
- (id)_imageView:(BOOL)arg1;
- (id)_imageView;
- (BOOL)_isCurrentlyConsideredHighlighted;
- (BOOL)_isHighlighted;
- (BOOL)_isReorderable;
- (void)_layoutSubviewsAnimated:(BOOL)arg1;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_menuDismissed:(id)arg1;
- (id)_multiselectBackgroundColor;
- (void)_multiselectColorChanged;
- (BOOL)_needsSetup;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_releaseRemoveControl;
- (void)_releaseReorderingControl;
- (id)_removeControl;
- (void)_removeFloatingSeparator;
- (void)_removeInnerShadow;
- (void)_removeRemoveControl;
- (id)_reorderingControl;
- (id)_reorderingSeparatorView;
- (void)_resetSelectionTimer;
- (void)_saveOpaqueViewState:(id)arg1;
- (id)_scriptingInfo;
- (id)_selectedBackgroundView:(BOOL)arg1;
- (void)_setAccessibilityMockParent:(id)arg1;
- (void)_setAccessoryAction:(SEL)arg1;
- (void)_setDrawsTopSeparator:(BOOL)arg1;
- (void)_setEditingStyle:(NSInteger)arg1;
- (void)_setFont:(id)arg1 layout:(BOOL)arg2;
- (void)_setGrabberHidden:(BOOL)arg1;
- (void)_setNeedsSetup:(BOOL)arg1;
- (void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2;
- (void)_setShouldIndentWhileEditing:(BOOL)arg1;
- (void)_setShowingDeleteConfirmation:(BOOL)arg1;
- (void)_setShowsReorderControl:(BOOL)arg1;
- (void)_setTableBackgroundCGColor:(struct CGColor { }*)arg1;
- (void)_setTarget:(id)arg1;
- (void)_setUnhighlightedBackgroundColor:(id)arg1 forSubview:(id)arg2;
- (void)_setupMenuGesture;
- (void)_setupSelectedBackgroundView;
- (void)_setupTableViewCellCommon;
- (void)_showReorderControl;
- (void)_startToEditTextField;
- (void)_syncAccessoryViewsIfNecessary;
- (id)_tableView;
- (id)_target;
- (struct CGSize { float x1; float x2; })_textInsetSize;
- (id)_textLabel:(BOOL)arg1;
- (id)_textLabel;
- (id)_titleForDeleteConfirmationButton;
- (void)_topShadowDidFadeOut;
- (id)_topShadowView:(BOOL)arg1;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1;
- (void)_updateContentClip;
- (void)_updateHighlightColors;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (void)_updateSeparatorContent;
- (void)_updateTopShadowView:(BOOL)arg1;
- (void)_willBeDeleted;
- (void)_willRemoveContentSubview:(id)arg1;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (id)accessibilityTableViewCellText;
- (unsigned long long)accessibilityTraits;
- (SEL)accessoryAction;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessoryRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)accessoryType;
- (id)accessoryView;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)backgroundView;
- (id)bottomShadowColor;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)clipsContents;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForState:(NSUInteger)arg1;
- (id)contentView;
- (void)copy:(id)arg1;
- (NSUInteger)currentStateMask;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)deleteConfirmationControlWasCancelled:(id)arg1;
- (void)deleteConfirmationControlWasClicked:(id)arg1;
- (id)detailTextLabel;
- (void)didMoveToSuperview;
- (void)didTransitionToState:(NSUInteger)arg1;
- (BOOL)drawingEnabled;
- (SEL)editAction;
- (void)editControlWasClicked:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)editableTextField;
- (NSInteger)editingAccessoryType;
- (id)editingAccessoryView;
- (id)editingData:(BOOL)arg1;
- (NSInteger)editingStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gridView;
- (BOOL)hidesAccessoryWhenEditing;
- (id)image;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)imageView;
- (NSInteger)indentationLevel;
- (float)indentationWidth;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;
- (BOOL)isAccessibilityElement;
- (BOOL)isAtLeastHalfSelected;
- (BOOL)isEditing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isHighlighted;
- (BOOL)isSelected;
- (id)layoutManager;
- (void)layoutSubviews;
- (NSInteger)lineBreakMode;
- (BOOL)longPressGestureCanTransitionToRecognizedState:(id)arg1;
- (id)oldEditingData;
- (void)paste:(id)arg1;
- (void)prepareForReuse;
- (void)registerMockChild:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })removeControl:(id)arg1 endFrameForTarget:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })removeControl:(id)arg1 startFrameForTarget:(id)arg2;
- (void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)removeEditingData;
- (void)removeFromSuperview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reorderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (SEL)returnAction;
- (id)reuseIdentifier;
- (id)sectionBorderColor;
- (NSInteger)sectionLocation;
- (void)selectAll:(id)arg1;
- (id)selectedBackgroundView;
- (void)selectedBackgroundViewChange:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)selectedImage;
- (id)selectedTextColor;
- (float)selectionFadeDuration;
- (float)selectionPercent;
- (NSInteger)selectionStyle;
- (id)separatorColor;
- (NSInteger)separatorStyle;
- (void)setAccessoryAction:(SEL)arg1;
- (void)setAccessoryType:(NSInteger)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBottomShadowColor:(id)arg1;
- (void)setClipsContents:(BOOL)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setEditAction:(SEL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setEditingAccessoryType:(NSInteger)arg1;
- (void)setEditingAccessoryView:(id)arg1;
- (void)setEditingBySwiping:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditingStyle:(NSInteger)arg1;
- (void)setEditingStyle:(NSInteger)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidesAccessoryWhenEditing:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setIndentationLevel:(NSInteger)arg1;
- (void)setIndentationWidth:(float)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setLineBreakMode:(NSInteger)arg1;
- (void)setOldEditingData:(id)arg1;
- (void)setPlaceHolderValue:(id)arg1;
- (void)setReturnAction:(SEL)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (void)setSectionBorderColor:(id)arg1;
- (void)setSectionLocation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setSectionLocation:(NSInteger)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectedBackgroundView:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setSelectedTextColor:(id)arg1;
- (void)setSelectionFadeDuration:(float)arg1;
- (void)setSelectionStyle:(NSInteger)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorStyle:(NSInteger)arg1;
- (void)setShouldIndentWhileEditing:(BOOL)arg1;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (void)setShowsReorderControl:(BOOL)arg1;
- (void)setTableBackgroundColor:(id)arg1;
- (void)setTableViewStyle:(NSInteger)arg1;
- (void)setTarget:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(NSInteger)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextFieldOffset:(float)arg1;
- (void)setTopShadowColor:(id)arg1;
- (void)setWasSwiped:(BOOL)arg1;
- (BOOL)shouldIndentWhileEditing;
- (void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)showingDeleteConfirmation;
- (BOOL)showsReorderControl;
- (NSInteger)style;
- (id)tableBackgroundColor;
- (NSInteger)tableViewStyle;
- (id)target;
- (id)text;
- (NSInteger)textAlignment;
- (id)textColor;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (float)textFieldOffset;
- (id)textLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)topShadowColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)unregisterMockChild:(id)arg1;
- (BOOL)wasSwiped;
- (void)willMoveToSuperview:(id)arg1;
- (void)willTransitionToState:(NSUInteger)arg1;

@end
