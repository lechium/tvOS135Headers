/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying.h>

@class UIView, UIVisualEffectView, NSString;

@interface _UIDimmingKnockoutBackdropView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {

	UIView* dimmingKnockoutView;
	UIVisualEffectView* backdropView;
	double _alpha;
	double _currentCornerRadius;
	double _cornerRadius;
	long long _style;

}

@property (assign,nonatomic) double cornerRadius;                   //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)_updateCornerRadius;
-(void)setRoundedCornerPosition:(unsigned long long)arg1 ;
-(void)_configureViewsWithStyle:(long long)arg1 ;
-(id)_dimmingKnockoutFilterForBackdropStyle:(long long)arg1 ;
-(id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1 ;
-(id)_visualEffectForStyle:(long long)arg1 ;
-(void)_updateBackdropViewWithStyle:(long long)arg1 alpha:(double)arg2 ;
-(id)_vibrancyEffectForStyle:(long long)arg1 ;
@end

