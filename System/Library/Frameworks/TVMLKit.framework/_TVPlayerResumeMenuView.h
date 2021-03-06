/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface _TVPlayerResumeMenuView : UIView {

	UIButton* _resumeButton;
	UIButton* _startFromBeginningButton;

}

@property (nonatomic,__weak,readonly) UIButton * resumeButton;                          //@synthesize resumeButton=_resumeButton - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * startFromBeginningButton;              //@synthesize startFromBeginningButton=_startFromBeginningButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIButton *)resumeButton;
-(UIButton *)startFromBeginningButton;
@end

