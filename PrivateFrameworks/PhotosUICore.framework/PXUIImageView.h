/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIImageView : UIView <PXAdjustableContentsView> {
    PXRoundedCornerOverlayView * __cornerView;
    PXFocusableUIImageView * __imageView;
    NSArray * __overlaySpecs;
    bool  _animating;
    UIView * _contentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _floatingInsets;
    UIView * _floatingOverlayView;
    bool  _floatingViewEnabled;
    bool  _hasParallax;
    UIImage * _image;
    NSMutableArray * _overlayViews;
    PXImageViewSpec * _spec;
}

@property (setter=_setCornerView:, nonatomic, retain) PXRoundedCornerOverlayView *_cornerView;
@property (nonatomic, readonly) PXFocusableUIImageView *_imageView;
@property (setter=_setOverlaySpecs:, nonatomic, copy) NSArray *_overlaySpecs;
@property (nonatomic) bool allowsFocus;
@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool floatingViewEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) PXImageViewSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_PXUIImageViewInitialization;
- (id)_cornerView;
- (id)_imageView;
- (id)_overlaySpecs;
- (void)_setCornerView:(id)arg1;
- (void)_setOverlaySpecs:(id)arg1;
- (void)_updateCorners;
- (void)_updateFloatingOverlay;
- (void)_updateSubviewsOrdering;
- (bool)allowsFocus;
- (id)contentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (bool)floatingViewEnabled;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (void)setAllowsFocus:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFloatingOverlay:(id)arg1 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 parallax:(bool)arg3;
- (void)setFloatingViewEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;
- (void)traitCollectionDidChange:(id)arg1;

@end