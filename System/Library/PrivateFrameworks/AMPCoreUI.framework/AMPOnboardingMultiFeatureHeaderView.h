/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UILabel, NSArray;

@interface AMPOnboardingMultiFeatureHeaderView : UIScrollView {

	BOOL _isPresentedInFormSheet;
	UILabel* _titleLabel;
	double _containerHeight;
	NSArray* _featureViews;

}

@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * featureViews;                   //@synthesize featureViews=_featureViews - In the implementation block
@property (assign,nonatomic) double containerHeight;                   //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) BOOL isPresentedInFormSheet;              //@synthesize isPresentedInFormSheet=_isPresentedInFormSheet - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)updateContentSize;
-(id)initWithFeatures:(id)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSArray *)featureViews;
-(void)setFeatureViews:(NSArray *)arg1 ;
-(BOOL)isPresentedInFormSheet;
-(double)containerHeight;
-(void)adjustedContentInsetDidChange;
-(void)setContainerHeight:(double)arg1 ;
-(void)setIsPresentedInFormSheet:(BOOL)arg1 ;
@end
