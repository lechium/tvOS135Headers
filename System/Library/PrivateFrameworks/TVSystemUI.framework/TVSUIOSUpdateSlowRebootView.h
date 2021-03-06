/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface TVSUIOSUpdateSlowRebootView : UIView {

	UILabel* _text;
	UIButton* _restart;
	/*^block*/id _rebootAction;

}

@property (nonatomic,copy) id rebootAction;              //@synthesize rebootAction=_rebootAction - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredFocusEnvironments;
-(void)setRebootAction:(id)arg1 ;
-(void)_didSelectRestart:(id)arg1 ;
-(id)rebootAction;
@end

