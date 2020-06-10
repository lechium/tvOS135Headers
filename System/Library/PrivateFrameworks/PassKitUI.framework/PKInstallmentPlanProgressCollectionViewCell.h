/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, PKProgressBar, UIImageView, NSString, PKCurrencyAmount;

@interface PKInstallmentPlanProgressCollectionViewCell : PKDashboardCollectionViewCell {

	UILabel* _leadingTitleLabel;
	UILabel* _leadingAmountLabel;
	UILabel* _trailingTitleLabel;
	UILabel* _trailingAmountLabel;
	PKProgressBar* _progressBar;
	UIImageView* _completeCheckmark;
	UILabel* _completeLabel;
	UILabel* _detailLabel;
	BOOL _complete;
	NSString* _leadingTitle;
	NSString* _trailingTitle;
	PKCurrencyAmount* _leadingAmount;
	PKCurrencyAmount* _trailingAmount;
	NSString* _subtitleText;

}

@property (nonatomic,copy) NSString * leadingTitle;                          //@synthesize leadingTitle=_leadingTitle - In the implementation block
@property (nonatomic,copy) NSString * trailingTitle;                         //@synthesize trailingTitle=_trailingTitle - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * leadingAmount;               //@synthesize leadingAmount=_leadingAmount - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * trailingAmount;              //@synthesize trailingAmount=_trailingAmount - In the implementation block
@property (assign,nonatomic) double progressAmount; 
@property (nonatomic,copy) NSString * subtitleText;                          //@synthesize subtitleText=_subtitleText - In the implementation block
@property (assign,getter=isComplete,nonatomic) BOOL complete;                //@synthesize complete=_complete - In the implementation block
-(BOOL)isComplete;
-(void)setComplete:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)leadingTitle;
-(void)setLeadingTitle:(NSString *)arg1 ;
-(void)setLeadingAmount:(PKCurrencyAmount *)arg1 ;
-(void)setTrailingTitle:(NSString *)arg1 ;
-(void)setTrailingAmount:(PKCurrencyAmount *)arg1 ;
-(void)setProgressAmount:(double)arg1 ;
-(double)progressAmount;
-(NSString *)trailingTitle;
-(PKCurrencyAmount *)leadingAmount;
-(PKCurrencyAmount *)trailingAmount;
@end

