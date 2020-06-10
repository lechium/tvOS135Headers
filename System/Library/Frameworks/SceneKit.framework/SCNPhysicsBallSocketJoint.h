/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld, SCNPhysicsBody;

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior {

	SCD_Struct_SC139 _definition;
	btPoint2PointConstraint* _constraint;
	SCNPhysicsWorld* _world;

}

@property (nonatomic,readonly) SCNPhysicsBody * bodyA; 
@property (assign,nonatomic) SCNVector3 anchorA; 
@property (nonatomic,readonly) SCNPhysicsBody * bodyB; 
@property (assign,nonatomic) SCNVector3 anchorB; 
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 anchorA:(SCNVector3)arg2 bodyB:(id)arg3 anchorB:(SCNVector3)arg4 ;
+(id)jointWithBody:(id)arg1 anchor:(SCNVector3)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNPhysicsBody *)bodyA;
-(SCNPhysicsBody *)bodyB;
-(SCNVector3)anchorA;
-(void)setAnchorA:(SCNVector3)arg1 ;
-(SCNVector3)anchorB;
-(void)setAnchorB:(SCNVector3)arg1 ;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(id)initWithBodyA:(id)arg1 anchorA:(SCNVector3)arg2 bodyB:(id)arg3 anchorB:(SCNVector3)arg4 ;
-(id)initWithBody:(id)arg1 anchor:(SCNVector3)arg2 ;
@end

