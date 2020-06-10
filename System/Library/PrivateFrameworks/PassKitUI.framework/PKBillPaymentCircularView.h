/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, UIColor, UIImage;

@interface PKBillPaymentCircularView : UIView {

	UIView* _primaryView;
	UIView* _secondaryView;
	UIImageView* _imageView;
	UIColor* _primaryColor;
	CGRect _shadowFrame;
	UIColor* _secondaryColor;
	UIImage* _image;

}

@property (nonatomic,copy) UIColor * primaryColor; 
@property (nonatomic,copy) UIColor * secondaryColor;              //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                     //@synthesize image=_image - In the implementation block
-(id)init;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)_updateColors;
-(id)_defaultSecondaryColor;
@end

