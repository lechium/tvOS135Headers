/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUIAcousticIDSpinnerDelegate;
@class UIImageView, UIVisualEffectView;

@interface SiriUIAcousticIDSpinner : UIView {

	UIImageView* _musicNoteView;
	UIImageView* _spinnerView;
	UIVisualEffectView* _vibrancyView;
	id<SiriUIAcousticIDSpinnerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIAcousticIDSpinnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUIAcousticIDSpinnerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIAcousticIDSpinnerDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_imageForSpinner;
-(id)_spinningAnimation;
-(BOOL)isShowing;
-(void)animateIn;
-(void)animateOut;
@end
