/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIInterfaceActionVisualStyle, NSArray, UIStackView;

@interface _UIInterfaceActionSeparatableSequenceView : UIView {

	BOOL _visualCornerForcedOverride;
	UIInterfaceActionVisualStyle* _visualStyle;
	long long _axis;
	long long _distribution;
	NSArray* _arrangedContentViews;
	unsigned long long _visualCornerPosition;
	UIStackView* _stackView;
	NSArray* _arrangedContentSeparatorViews;
	NSArray* _arrangedContentViewsDistributionConstraints;

}

@property (nonatomic,readonly) UIStackView * stackView;                                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentSeparatorViews;                            //@synthesize arrangedContentSeparatorViews=_arrangedContentSeparatorViews - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedContentViewsDistributionConstraints;              //@synthesize arrangedContentViewsDistributionConstraints=_arrangedContentViewsDistributionConstraints - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                           //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign,nonatomic) long long axis;                                                       //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) long long distribution;                                               //@synthesize distribution=_distribution - In the implementation block
@property (nonatomic,retain) NSArray * arrangedContentViews;                                       //@synthesize arrangedContentViews=_arrangedContentViews - In the implementation block
@property (assign,nonatomic) unsigned long long visualCornerPosition;                              //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
@property (assign,nonatomic) BOOL visualCornerForcedOverride;                                      //@synthesize visualCornerForcedOverride=_visualCornerForcedOverride - In the implementation block
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(UIStackView *)stackView;
-(void)setDistribution:(long long)arg1 ;
-(void)_setLayoutDebuggingIdentifier:(id)arg1 ;
-(long long)distribution;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(unsigned long long)visualCornerPosition;
-(void)setVisualCornerPosition:(unsigned long long)arg1 ;
-(id)initWithVisualStyle:(id)arg1 ;
-(double)fittingWidthForLayoutAxis:(long long)arg1 ;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(/*^block*/id)arg1 ;
-(void)reloadDisplayedContentVisualStyle;
-(void)setVisualCornerForcedOverride:(BOOL)arg1 ;
-(void)setArrangedContentViews:(NSArray *)arg1 ;
-(BOOL)visualCornerForcedOverride;
-(NSArray *)arrangedContentViews;
-(void)_reloadStackViewArrangement;
-(void)_updateSeparatorConstantSizedAxis;
-(void)_updateRoundedCornerPositionForActionRepViews;
-(void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;
-(BOOL)_isVerticalLayout;
-(long long)_separatorConstantSizedAxis;
-(void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
-(CGRect)_stackViewFrameForViewBounds:(CGRect)arg1 ;
-(void)_reloadContentDistributionConstraintsForArrangedContentViews;
-(CGSize)_systemLayoutSizeFittingStackView:(CGSize)arg1 ;
-(CGRect)_viewBoundsForStackViewFrame:(CGRect)arg1 ;
-(long long)_dimensionAttributeToConstrainEqual;
-(void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(BOOL)arg2 ;
-(void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1 ;
-(void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1 ;
-(void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1 ;
-(void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1 ;
-(void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned long long)arg2 ;
-(NSArray *)arrangedContentSeparatorViews;
-(NSArray *)arrangedContentViewsDistributionConstraints;
@end

