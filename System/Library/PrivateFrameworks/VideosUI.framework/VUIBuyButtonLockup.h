/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIUIStackView.h>

@class UILabel, UIButton, NSLayoutConstraint;

@interface VUIBuyButtonLockup : VUIUIStackView {

	UILabel* _iAPLabel;
	UIButton* _button;
	NSLayoutConstraint* _buttonHeightConstraint;
	long long _lastOrientation;
	BOOL _hasIAP;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hasIAP;                    //@synthesize hasIAP=_hasIAP - In the implementation block
-(void)dealloc;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)setHasIAP:(BOOL)arg1 ;
-(void)_updateForPreferredContentSize;
-(BOOL)_isLargeContentSize;
-(BOOL)hasIAP;
@end

