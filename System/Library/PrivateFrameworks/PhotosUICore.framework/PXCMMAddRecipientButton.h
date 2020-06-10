/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, UIColor;

@interface PXCMMAddRecipientButton : UIButton {

	UIView* _separatorView;
	double _separatorViewHeight;
	double _inset;
	UIColor* _separatorColor;
	CGSize _imageSizeToAlignWith;

}

@property (assign,nonatomic) CGSize imageSizeToAlignWith;              //@synthesize imageSizeToAlignWith=_imageSizeToAlignWith - In the implementation block
@property (assign,nonatomic) double inset;                             //@synthesize inset=_inset - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                 //@synthesize separatorColor=_separatorColor - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setInset:(double)arg1 ;
-(double)inset;
-(void)_commmonPXCMMAddRecipientButtonInitialization;
-(CGSize)imageSizeToAlignWith;
-(void)setImageSizeToAlignWith:(CGSize)arg1 ;
@end

