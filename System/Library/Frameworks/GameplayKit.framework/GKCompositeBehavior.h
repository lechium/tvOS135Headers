/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKBehavior.h>

@class NSMutableArray;

@interface GKCompositeBehavior : GKBehavior {

	NSMutableArray* _subBehaviors;
	NSMutableArray* _subBehaviorWeights;

}

@property (readonly) long long behaviorCount; 
+(id)behaviorWithBehaviors:(id)arg1 ;
+(id)behaviorWithBehaviors:(id)arg1 andWeights:(id)arg2 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeBehavior:(id)arg1 ;
-(void)removeAllBehaviors;
-(3)getTotalForce:(double)arg1 agent:(id)arg2 ;
-(long long)behaviorCount;
-(id)initWithBehaviors:(id)arg1 ;
-(id)initWithBehaviors:(id)arg1 andWeights:(id)arg2 ;
-(void)setWeight:(float)arg1 forBehavior:(id)arg2 ;
-(float)weightForBehavior:(id)arg1 ;
@end

