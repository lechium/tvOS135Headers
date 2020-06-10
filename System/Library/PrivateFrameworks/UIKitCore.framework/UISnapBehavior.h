/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableArray, PKPhysicsBody;

@interface UISnapBehavior : UIDynamicBehavior {

	CGPoint _anchorPoint;
	double _damping;
	double _distance;
	double _frequency;
	struct {
		unsigned attachedToView : 1;
		unsigned dampingSet : 1;
		unsigned frequencySet : 1;
		unsigned lengthSet : 1;
	}  _stateFlags;
	NSMutableArray* _joints;
	PKPhysicsBody* _anchorBody;

}

@property (assign,nonatomic) CGPoint snapPoint; 
@property (assign,nonatomic) double damping;                 //@synthesize damping=_damping - In the implementation block
+(BOOL)_isPrimitiveBehavior;
-(id)description;
-(id)init;
-(double)damping;
-(void)setDamping:(double)arg1 ;
-(double)_distance;
-(double)_frequency;
-(id)initWithItem:(id)arg1 snapToPoint:(CGPoint)arg2 ;
-(void)_associate;
-(void)_dissociate;
-(void)_setDistance:(double)arg1 ;
-(void)_setFrequency:(double)arg1 ;
-(void)setSnapPoint:(CGPoint)arg1 ;
-(CGPoint)snapPoint;
@end
