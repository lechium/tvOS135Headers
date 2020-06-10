/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface _TVFullScreenBrowserViewCell : UICollectionViewCell {

	BOOL _containsFocus;
	CGRect _lastAppliedBounds;
	BOOL _contentAvailable;
	double _cornerRadius;
	double _parallaxOffset;
	double _normalizedPosition;
	double _maskAmount;
	UIView* _unmaskedContentView;
	UIView* _maskedBackgroundView;
	UIView* _maskedContentView;
	UIView* _unmaskContainerView;
	UIView* _maskContainerView;
	CGSize _preferredUnmaskedContentSize;
	CGSize _preferredMaskedContentSize;
	UIEdgeInsets _contentBleed;

}

@property (assign,nonatomic) double cornerRadius;                                                                                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentBleed;                                                                                                      //@synthesize contentBleed=_contentBleed - In the implementation block
@property (assign,nonatomic) double parallaxOffset;                                                                                                          //@synthesize parallaxOffset=_parallaxOffset - In the implementation block
@property (assign,nonatomic) double normalizedPosition;                                                                                                      //@synthesize normalizedPosition=_normalizedPosition - In the implementation block
@property (assign,nonatomic) double maskAmount;                                                                                                              //@synthesize maskAmount=_maskAmount - In the implementation block
@property (assign,setter=_setPreferredUnmaskedContentSize:,getter=_preferredUnmaskedContentSize,nonatomic) CGSize preferredUnmaskedContentSize;              //@synthesize preferredUnmaskedContentSize=_preferredUnmaskedContentSize - In the implementation block
@property (assign,setter=_setPreferredMaskedContentSize:,getter=_preferredMaskedContentSize,nonatomic) CGSize preferredMaskedContentSize;                    //@synthesize preferredMaskedContentSize=_preferredMaskedContentSize - In the implementation block
@property (nonatomic,readonly) UIView * unmaskContainerView;                                                                                                 //@synthesize unmaskContainerView=_unmaskContainerView - In the implementation block
@property (nonatomic,readonly) UIView * maskContainerView;                                                                                                   //@synthesize maskContainerView=_maskContainerView - In the implementation block
@property (nonatomic,readonly) UIView * unmaskedContentView;                                                                                                 //@synthesize unmaskedContentView=_unmaskedContentView - In the implementation block
@property (nonatomic,readonly) UIView * maskedBackgroundView;                                                                                                //@synthesize maskedBackgroundView=_maskedBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * maskedContentView;                                                                                                   //@synthesize maskedContentView=_maskedContentView - In the implementation block
@property (assign,getter=isContentAvailable,nonatomic) BOOL contentAvailable;                                                                                //@synthesize contentAvailable=_contentAvailable - In the implementation block
-(void)prepareForReuse;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isContentAvailable;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setContentAvailable:(BOOL)arg1 ;
-(UIView *)unmaskedContentView;
-(UIView *)maskedBackgroundView;
-(UIView *)maskContainerView;
-(UIView *)maskedContentView;
-(double)maskAmount;
-(double)normalizedPosition;
-(void)normalizedPositionDidChange;
-(void)setMaskAmount:(double)arg1 ;
-(UIEdgeInsets)contentBleed;
-(void)setContentBleed:(UIEdgeInsets)arg1 ;
-(double)parallaxOffset;
-(void)setParallaxOffset:(double)arg1 ;
-(void)setNormalizedPosition:(double)arg1 ;
-(void)normalizedPositionWillChange:(double)arg1 ;
-(void)maskAmountWillChange:(double)arg1 ;
-(void)maskAmountDidChange;
-(void)_setPreferredUnmaskedContentSize:(CGSize)arg1 ;
-(void)_setPreferredMaskedContentSize:(CGSize)arg1 ;
-(UIView *)unmaskContainerView;
-(BOOL)_showingMaskedContent;
-(CGSize)_preferredUnmaskedContentSize;
-(CGSize)_preferredMaskedContentSize;
-(void)_layoutUnmaskedContentWithBounds:(CGRect)arg1 ;
-(void)_layoutMaskedContentWithBounds:(CGRect)arg1 ;
@end

