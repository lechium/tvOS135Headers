/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class _UIAlertControllerGradientView;

@interface _UIAlertControllerShadowedScrollView : UIScrollView {

	_UIAlertControllerGradientView* _shadowView;
	BOOL _shouldPinToBottomOnResize;

}

@property (assign,nonatomic) BOOL shouldPinToBottomOnResize;              //@synthesize shouldPinToBottomOnResize=_shouldPinToBottomOnResize - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)shouldPinToBottomOnResize;
-(CGRect)_boundsForPinningToBottomWithNewBounds:(CGRect)arg1 ;
-(void)_updateScrollabilityAndShadow;
-(void)setShouldPinToBottomOnResize:(BOOL)arg1 ;
@end
