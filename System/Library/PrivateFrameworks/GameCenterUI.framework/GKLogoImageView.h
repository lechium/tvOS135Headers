/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, UIImageView, UIImage;

@interface GKLogoImageView : UICollectionReusableView {

	UILabel* _titleLabel;
	UIImageView* _imageView;

}

@property (assign,nonatomic) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImage * image; 
+(double)defaultHeight;
+(void)updateLogoImageHeight:(double)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)awakeFromNib;
-(void)_coreInit;
-(void)_addAndConstraintSubview:(id)arg1 ;
@end

