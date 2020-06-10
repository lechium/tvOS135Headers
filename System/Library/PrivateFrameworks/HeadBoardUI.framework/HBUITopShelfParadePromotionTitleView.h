/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface HBUITopShelfParadePromotionTitleView : UIView {

	NSString* _promotionTitleText;
	UIImage* _promotionImage;
	UIImageView* _promotionImageView;
	UILabel* _promotionTitleLabel;

}

@property (nonatomic,readonly) UIImageView * promotionImageView;              //@synthesize promotionImageView=_promotionImageView - In the implementation block
@property (nonatomic,readonly) UILabel * promotionTitleLabel;                 //@synthesize promotionTitleLabel=_promotionTitleLabel - In the implementation block
@property (nonatomic,retain) NSString * promotionTitleText;                   //@synthesize promotionTitleText=_promotionTitleText - In the implementation block
@property (nonatomic,retain) UIImage * promotionImage;                        //@synthesize promotionImage=_promotionImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPromotionTitleText:(NSString *)arg1 ;
-(UIImage *)promotionImage;
-(void)setPromotionImage:(UIImage *)arg1 ;
-(NSString *)promotionTitleText;
-(UIImageView *)promotionImageView;
-(UILabel *)promotionTitleLabel;
@end

