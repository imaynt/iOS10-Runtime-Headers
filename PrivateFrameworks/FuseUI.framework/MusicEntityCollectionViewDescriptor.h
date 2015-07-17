/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityCollectionViewDescriptor : MusicEntityViewDescriptor {
    id /* block */  _layoutMetricsBlock;
    float  _sectionHeaderBottomContentInset;
    BOOL  _shouldFlattenToSingleSectionInRegularWidthAndHeight;
    BOOL  _shouldShowOnlyFirstRowOfContent;
    BOOL  _showsSectionHeaders;
    float  _verticalLockupMaximumWidth;
    struct { 
        float multiplier; 
        float constant; 
    }  _verticalLockupWidthFromCollectionViewWidthLinearRelation;
    BOOL  _wantsEdgeToEdgeLayout;
}

@property (nonatomic, copy) id /* block */ layoutMetricsBlock;
@property (nonatomic) float sectionHeaderBottomContentInset;
@property (nonatomic) BOOL shouldFlattenToSingleSectionInRegularWidthAndHeight;
@property (nonatomic) BOOL shouldShowOnlyFirstRowOfContent;
@property (nonatomic) BOOL showsSectionHeaders;
@property (nonatomic) float verticalLockupMaximumWidth;
@property (nonatomic) struct { float x1; float x2; } verticalLockupWidthFromCollectionViewWidthLinearRelation;
@property (nonatomic) BOOL wantsEdgeToEdgeLayout;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id /* block */)layoutMetricsBlock;
- (id)layoutMetricsForTraitCollection:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (float)sectionHeaderBottomContentInset;
- (void)setLayoutMetricsBlock:(id /* block */)arg1;
- (void)setSectionHeaderBottomContentInset:(float)arg1;
- (void)setShouldFlattenToSingleSectionInRegularWidthAndHeight:(BOOL)arg1;
- (void)setShouldShowOnlyFirstRowOfContent:(BOOL)arg1;
- (void)setShowsSectionHeaders:(BOOL)arg1;
- (void)setVerticalLockupMaximumWidth:(float)arg1;
- (void)setVerticalLockupWidthFromCollectionViewWidthLinearRelation:(struct { float x1; float x2; })arg1;
- (void)setWantsEdgeToEdgeLayout:(BOOL)arg1;
- (BOOL)shouldFlattenToSingleSectionInRegularWidthAndHeight;
- (BOOL)shouldShowOnlyFirstRowOfContent;
- (BOOL)showsSectionHeaders;
- (float)verticalLockupMaximumWidth;
- (struct { float x1; float x2; })verticalLockupWidthFromCollectionViewWidthLinearRelation;
- (BOOL)wantsEdgeToEdgeLayout;

@end