/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <TVUIKit/TVLockupView.h>

@class UIColor;

@interface TVCardView : TVLockupView {

	UIColor* _cardBackgroundColor;

}

@property (nonatomic,retain) UIColor * cardBackgroundColor;              //@synthesize cardBackgroundColor=_cardBackgroundColor - In the implementation block
+(Class)_concreteContentViewClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contentView;
-(void)setFocusSizeIncrease:(NSDirectionalEdgeInsets)arg1 ;
-(void)_updateAppearanceForFocusUpdateContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setCardBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)cardBackgroundColor;
@end

