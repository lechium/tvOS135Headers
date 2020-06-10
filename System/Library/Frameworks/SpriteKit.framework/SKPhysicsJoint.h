/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSSecureCoding> {

	BOOL __implicit;
	SKPhysicsBody* bodyA;
	SKPhysicsBody* bodyB;
	double reactionTorque;
	CGVector reactionForce;

}

@property (assign,nonatomic) BOOL _implicit;                        //@synthesize _implicit=__implicit - In the implementation block
@property (nonatomic,retain) SKPhysicsBody * bodyA; 
@property (nonatomic,retain) SKPhysicsBody * bodyB; 
@property (nonatomic,readonly) CGVector reactionForce; 
@property (nonatomic,readonly) double reactionTorque; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_implicit;
-(SKPhysicsBody *)bodyA;
-(SKPhysicsBody *)bodyB;
-(void)setBodyA:(SKPhysicsBody *)arg1 ;
-(void)setBodyB:(SKPhysicsBody *)arg1 ;
-(CGVector)reactionForce;
-(double)reactionTorque;
-(void)set_implicit:(BOOL)arg1 ;
@end

