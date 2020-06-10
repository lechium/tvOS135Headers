/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXSettings.h>

@interface PXViewControllerPinchTransitionSettings : PXSettings {

	BOOL _allowPinchTransitions;
	double _transitionDuration;
	double _backgroundScale;
	double _backgroundParallax;
	double _shadowOpacity;
	double _shadowRadius;
	double _dimmingWhite;
	double _dimmingOpacity;

}

@property (assign,nonatomic) BOOL allowPinchTransitions;              //@synthesize allowPinchTransitions=_allowPinchTransitions - In the implementation block
@property (assign,nonatomic) double transitionDuration;               //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) double backgroundScale;                  //@synthesize backgroundScale=_backgroundScale - In the implementation block
@property (assign,nonatomic) double backgroundParallax;               //@synthesize backgroundParallax=_backgroundParallax - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                    //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowRadius;                     //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double dimmingWhite;                     //@synthesize dimmingWhite=_dimmingWhite - In the implementation block
@property (assign,nonatomic) double dimmingOpacity;                   //@synthesize dimmingOpacity=_dimmingOpacity - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(double)shadowOpacity;
-(void)setShadowOpacity:(double)arg1 ;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(void)setDefaultValues;
-(id)parentSettings;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(BOOL)allowPinchTransitions;
-(void)setAllowPinchTransitions:(BOOL)arg1 ;
-(double)backgroundScale;
-(void)setBackgroundScale:(double)arg1 ;
-(double)backgroundParallax;
-(void)setBackgroundParallax:(double)arg1 ;
-(double)dimmingWhite;
-(void)setDimmingWhite:(double)arg1 ;
-(double)dimmingOpacity;
-(void)setDimmingOpacity:(double)arg1 ;
@end
