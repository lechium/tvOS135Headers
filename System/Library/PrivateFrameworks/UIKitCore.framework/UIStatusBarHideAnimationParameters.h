/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStatusBarAnimationParameters.h>

@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters {

	int _hideAnimation;
	double _additionalSlideHeight;

}

@property (assign,nonatomic) int hideAnimation;                         //@synthesize hideAnimation=_hideAnimation - In the implementation block
@property (assign,nonatomic) double additionalSlideHeight;              //@synthesize additionalSlideHeight=_additionalSlideHeight - In the implementation block
-(BOOL)shouldAnimate;
-(id)initWithDefaultParameters;
-(int)hideAnimation;
-(void)setHideAnimation:(int)arg1 ;
-(double)additionalSlideHeight;
-(void)setAdditionalSlideHeight:(double)arg1 ;
@end
