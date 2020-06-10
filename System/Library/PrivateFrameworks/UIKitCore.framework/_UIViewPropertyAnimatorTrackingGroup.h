/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewImplicitlyAnimating.h>

@class NSArray, NSString;

@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating> {

	NSArray* _trackingAnimators;

}

@property (nonatomic,readonly) NSArray * trackingAnimators;                //@synthesize trackingAnimators=_trackingAnimators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long state; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,getter=isReversed,nonatomic) BOOL reversed; 
@property (assign,nonatomic) double fractionComplete; 
-(long long)state;
-(BOOL)isRunning;
-(void)setReversed:(BOOL)arg1 ;
-(void)stopAnimation:(BOOL)arg1 ;
-(void)pauseAnimation;
-(void)startAnimation;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)finishAnimationAtPosition:(long long)arg1 ;
-(void)startAnimationAfterDelay:(double)arg1 ;
-(double)fractionComplete;
-(void)setFractionComplete:(double)arg1 ;
-(void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2 ;
-(BOOL)isReversed;
-(id)initWithAnimators:(id)arg1 ;
-(NSArray *)trackingAnimators;
@end
