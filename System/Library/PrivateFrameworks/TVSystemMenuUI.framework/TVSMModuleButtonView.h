/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <TVUIKit/TVLockupView.h>

@class UIImage, NSString, UIView;

@interface TVSMModuleButtonView : TVLockupView {

	long long _style;
	UIImage* _image;
	NSString* _imageSymbolName;
	NSString* _titleText;
	NSString* _secondaryText;
	UIView* _moduleContentView;

}

@property (nonatomic,readonly) UIView * moduleContentView;              //@synthesize moduleContentView=_moduleContentView - In the implementation block
@property (nonatomic,readonly) long long style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * imageSymbolName;                //@synthesize imageSymbolName=_imageSymbolName - In the implementation block
@property (nonatomic,retain) NSString * titleText;                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * secondaryText;                  //@synthesize secondaryText=_secondaryText - In the implementation block
-(long long)style;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setImageSymbolName:(NSString *)arg1 ;
-(NSString *)imageSymbolName;
-(UIView *)moduleContentView;
@end

