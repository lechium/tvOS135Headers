/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _UITransitionState : NSObject {

	long long _transitionDirection;
	/*^block*/id _completion;
	NSDate* _beginDate;

}

@property (nonatomic,readonly) long long transitionDirection;                       //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (nonatomic,readonly) long long effectiveTransitionDirection; 
@property (nonatomic,readonly) NSDate * beginDate;                                  //@synthesize beginDate=_beginDate - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(id)description;
-(BOOL)isActive;
-(long long)transitionDirection;
-(NSDate *)beginDate;
-(id)initWithTransitionDirection:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)cleanupWithFinishedState:(BOOL)arg1 completedState:(BOOL)arg2 ;
-(BOOL)isCompatibleWithTransitionInDirection:(long long)arg1 ;
-(long long)effectiveTransitionDirection;
-(void)markBeginDate;
@end

