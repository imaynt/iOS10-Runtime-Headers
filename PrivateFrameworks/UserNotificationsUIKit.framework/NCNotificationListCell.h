/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCell : UICollectionViewCell <NCContentSizeCategoryAdjusting, UIScrollViewDelegate> {
    bool  _actionButtonsFullyRevealed;
    NCNotificationListCellActionButtonsView * _actionButtonsView;
    bool  _adjustsFontForContentSizeCategory;
    bool  _backgroundBlurred;
    NCNotificationListCellScrollView * _cellScrollView;
    UIView * _clippingRevealView;
    bool  _configured;
    NCNotificationViewController * _contentViewController;
    <NCNotificationListCellDelegate> * _delegate;
    bool  _executingDefaultAction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _fullActionsRevealContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialContentOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insetMargins;
    bool  _supportsSwipeToDefaultAction;
}

@property (getter=isActionButtonsFullyRevealed, nonatomic) bool actionButtonsFullyRevealed;
@property (nonatomic, retain) NCNotificationListCellActionButtonsView *actionButtonsView;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic, retain) NCNotificationListCellScrollView *cellScrollView;
@property (nonatomic, retain) UIView *clippingRevealView;
@property (getter=isConfigured, nonatomic) bool configured;
@property (nonatomic, retain) NCNotificationViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExecutingDefaultAction, nonatomic) bool executingDefaultAction;
@property (nonatomic) struct CGPoint { double x1; double x2; } fullActionsRevealContentOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialContentOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insetMargins;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsSwipeToDefaultAction;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_absoluteContentOffsetForLogicalOffset:(double)arg1;
- (double)_actionButtonsViewAlphaForPercentRevealed:(double)arg1;
- (double)_actionButtonsViewPercentRevealedForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (double)_actionButtonsViewWidthWithMargin;
- (void)_adjustCellScrollViewAfterLayout;
- (double)_cellWidth;
- (void)_configureActionButtonsViewHierarchyForPercentRevealed:(double)arg1;
- (void)_configureActionButtonsViewIfNecessary;
- (void)_configureCellScrollViewIfNecessary;
- (void)_configureClippingRevealViewIfNecessary;
- (void)_configureContentOffsets;
- (void)_configureFullActionsRevealContentOffset;
- (void)_configureInitialContentOffset;
- (double)_defaultActionExecuteThreshold;
- (double)_defaultActionOvershootContentOffset;
- (double)_defaultActionTriggerThreshold;
- (bool)_disableRasterizeInAnimations;
- (void)_executeDefaultActionIfCompleted;
- (void)_layoutActionButtonsView;
- (void)_layoutClippingRevealView;
- (void)_layoutContentView;
- (void)_layoutScrollView;
- (double)_logicalContentOffsetForAbsoluteOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_revealActionButtonsViewForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_scrollViewDidFinishScrolling:(id)arg1;
- (id)actionButtonsView;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (void)cellActionButtonPressed:(id)arg1;
- (void)cellClearButtonPressed:(id)arg1;
- (void)cellOpenButtonPressed:(id)arg1;
- (id)cellScrollView;
- (id)clippingRevealView;
- (id)contentViewController;
- (void)dealloc;
- (id)delegate;
- (struct CGPoint { double x1; double x2; })fullActionsRevealContentOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })initialContentOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetMargins;
- (bool)isActionButtonsFullyRevealed;
- (bool)isBackgroundBlurred;
- (bool)isConfigured;
- (bool)isExecutingDefaultAction;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)resetCellScrollPositionAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setActionButtonsFullyRevealed:(bool)arg1;
- (void)setActionButtonsView:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setCellScrollView:(id)arg1;
- (void)setClippingRevealView:(id)arg1;
- (void)setConfigured:(bool)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecutingDefaultAction:(bool)arg1;
- (void)setFullActionsRevealContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInsetMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSupportsSwipeToDefaultAction:(bool)arg1;
- (bool)supportsSwipeToDefaultAction;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCellForContentViewController:(id)arg1;

@end
