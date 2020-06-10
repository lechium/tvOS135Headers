/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/TVRowHosting.h>

@class UIView, _TVCollectionView, NSString;

@interface _TVCollectionWrappingView : UIView <TVRowHosting> {

	CGRect _headerFrame;
	UIView* _selectingView;
	UIView* _headerView;
	double _showcaseFactor;
	struct {
		BOOL respondsToAugmentedSelectionFrameForFrame;
	}  _collectionViewFlags;
	BOOL _centered;
	BOOL _headerCanBecomeFocused;
	BOOL _headerAuxiliarySelecting;
	BOOL _headerFloating;
	BOOL _headerHidden;
	BOOL _headerFocused;
	_TVCollectionView* _collectionView;
	double _headerSelectionMargin;
	long long _collectionGradientMask;
	TVShowcaseConfig _showcaseConfig;

}

@property (assign,getter=isHeaderFocused,nonatomic) BOOL headerFocused;                                    //@synthesize headerFocused=_headerFocused - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) _TVCollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;                                              //@synthesize centered=_centered - In the implementation block
@property (assign,nonatomic) BOOL headerCanBecomeFocused;                                                  //@synthesize headerCanBecomeFocused=_headerCanBecomeFocused - In the implementation block
@property (assign,nonatomic) double headerSelectionMargin;                                                 //@synthesize headerSelectionMargin=_headerSelectionMargin - In the implementation block
@property (assign,nonatomic) TVShowcaseConfig showcaseConfig;                                              //@synthesize showcaseConfig=_showcaseConfig - In the implementation block
@property (assign,getter=isHeaderAuxiliarySelecting,nonatomic) BOOL headerAuxiliarySelecting;              //@synthesize headerAuxiliarySelecting=_headerAuxiliarySelecting - In the implementation block
@property (assign,getter=isHeaderFloating,nonatomic) BOOL headerFloating;                                  //@synthesize headerFloating=_headerFloating - In the implementation block
@property (assign,getter=isHeaderHidden,nonatomic) BOOL headerHidden;                                      //@synthesize headerHidden=_headerHidden - In the implementation block
@property (assign,nonatomic) long long collectionGradientMask;                                             //@synthesize collectionGradientMask=_collectionGradientMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
+(void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 gradientLengths:(UIEdgeInsets*)arg3 gradientInset:(UIEdgeInsets*)arg4 gradientBoundsInset:(UIEdgeInsets*)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVCollectionView *)collectionView;
-(void)setCentered:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isCentered;
-(UIView *)headerView;
-(void)setCollectionView:(_TVCollectionView *)arg1 ;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_updateSubviews;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(id)showcaseRowMetricsForExpectedWidth:(double)arg1 ;
-(BOOL)shouldBindRowsTogether;
-(void)setCollectionGradientMask:(long long)arg1 ;
-(void)setValue:(id)arg1 forTVViewStyle:(id)arg2 ;
-(void)tv_setShowcaseFactor:(double)arg1 ;
-(double)headerSelectionMargin;
-(void)setHeaderSelectionMargin:(double)arg1 ;
-(void)setHeaderHidden:(BOOL)arg1 ;
-(BOOL)isHeaderHidden;
-(TVShowcaseConfig)showcaseConfig;
-(void)setShowcaseConfig:(TVShowcaseConfig)arg1 ;
-(void)reevaluateHeaderFrame;
-(id)_currentHeaderView;
-(CGRect)_adjustedHeaderFrame;
-(UIEdgeInsets)_adjustedPadding;
-(double)_adjustedShowcaseFactor;
-(double)_showcaseContentScaleForExpectedWidth:(double)arg1 ;
-(long long)collectionGradientMask;
-(BOOL)isHeaderFloating;
-(BOOL)headerCanBecomeFocused;
-(void)setHeaderFocused:(BOOL)arg1 ;
-(BOOL)isHeaderFocused;
-(id)_collectionRowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 forShowcase:(BOOL)arg3 ;
-(BOOL)isHeaderAuxiliarySelecting;
-(void)setHeaderFloating:(BOOL)arg1 ;
-(void)setHeaderCanBecomeFocused:(BOOL)arg1 ;
-(void)setHeaderAuxiliarySelecting:(BOOL)arg1 ;
@end

