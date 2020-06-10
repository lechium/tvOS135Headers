/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TVRatingBadgeLayout;

@interface TVRatingBadgeView : UIView {

	TVRatingBadgeLayout* _ratingBadgeLayout;
	double _ratingValue;

}

@property (nonatomic,retain) TVRatingBadgeLayout * ratingBadgeLayout;              //@synthesize ratingBadgeLayout=_ratingBadgeLayout - In the implementation block
@property (assign,nonatomic) double ratingValue;                                   //@synthesize ratingValue=_ratingValue - In the implementation block
+(id)ratingBadgeViewWithValue:(double)arg1 layout:(id)arg2 existingBadgeView:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(double)ratingValue;
-(void)setRatingValue:(double)arg1 ;
-(id)_tintColor;
-(BOOL)canBecomeFocused;
-(id)_halfStarImage;
-(double)_interitemSpacing;
-(double)_circleRadius;
-(void)setRatingBadgeLayout:(TVRatingBadgeLayout *)arg1 ;
-(id)_starImage;
-(CGSize)_starSize;
-(double)_starHeight;
-(id)_ratingStyle;
-(TVRatingBadgeLayout *)ratingBadgeLayout;
@end

