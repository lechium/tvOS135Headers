/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TVSettingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface TSKVibrantImageView : UIView {

	UIImage* _image;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIImage * image;                      //@synthesize image=_image - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithImage:(id)arg1 identifier:(id)arg2 ;
-(id)_imageViewTintColorForUserInterfaceStyle:(long long)arg1 ;
@end

