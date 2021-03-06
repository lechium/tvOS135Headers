/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIInputViewAnimationStyle : NSObject <NSCopying> {

	BOOL animated;
	double duration;
	unsigned long long extraOptions;
	BOOL interactivelyCancelled;
	BOOL _isLegacy;
	BOOL force;
	BOOL _dontMerge;

}

@property (assign,nonatomic) BOOL force; 
@property (assign,nonatomic) BOOL animated; 
@property (assign,nonatomic) BOOL dontMerge;                               //@synthesize dontMerge=_dontMerge - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) unsigned long long extraOptions; 
@property (assign,nonatomic) BOOL interactivelyCancelled; 
@property (nonatomic,readonly) BOOL isAnimationCompleted; 
@property (nonatomic,readonly) BOOL canDismissWithScrollView; 
+(id)animationStyleImmediate;
+(id)animationStyleDefault;
+(id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(BOOL)force;
-(void)setForce:(BOOL)arg1 ;
-(void)setExtraOptions:(unsigned long long)arg1 ;
-(unsigned long long)extraOptions;
-(void)setInteractivelyCancelled:(BOOL)arg1 ;
-(void)launchAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 forHost:(id)arg4 fromCurrentPosition:(BOOL)arg5 ;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(BOOL)isAnimationCompleted;
-(BOOL)canDismissWithScrollView;
-(id)endPlacementForInputViewSet:(id)arg1 ;
-(BOOL)interactivelyCancelled;
-(id)legacyAnimationCopy;
-(id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 ;
-(BOOL)dontMerge;
-(void)setDontMerge:(BOOL)arg1 ;
@end

