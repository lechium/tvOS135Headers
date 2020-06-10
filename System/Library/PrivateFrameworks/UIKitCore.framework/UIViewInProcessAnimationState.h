/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewAnimationState.h>

@interface UIViewInProcessAnimationState : UIViewAnimationState {

	BOOL _retargeted;
	/*^block*/id _animationAndComposerGetter;
	long long _type;

}

@property (nonatomic,copy) id animationAndComposerGetter;              //@synthesize animationAndComposerGetter=_animationAndComposerGetter - In the implementation block
@property (assign,nonatomic) BOOL retargeted;                          //@synthesize retargeted=_retargeted - In the implementation block
@property (assign,nonatomic) long long type;                           //@synthesize type=_type - In the implementation block
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)animatePropertyWithCurrentValue:(id)arg1 targetValue:(id)arg2 preTickShouldRemoveCallback:(/*^block*/id)arg3 newValueCallback:(/*^block*/id)arg4 removedCallback:(/*^block*/id)arg5 animatableProperty:(id)arg6 ;
-(BOOL)isKeySupported:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(BOOL)shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setRetargeted:(BOOL)arg1 ;
-(void)animatePropertyWithKey:(id)arg1 view:(id)arg2 forceNew:(BOOL)arg3 currentValue:(id)arg4 targetValue:(id)arg5 preTickShouldRemoveCallback:(/*^block*/id)arg6 newValueCallback:(/*^block*/id)arg7 removedCallback:(/*^block*/id)arg8 ;
-(id)animationAndComposerGetter;
-(void)setAnimationAndComposerGetter:(id)arg1 ;
-(BOOL)retargeted;
@end

