/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject <NSCopying, NSSecureCoding> {

	BOOL _dynamic;
	BOOL _usesPreciseCollisionDetection;
	BOOL _allowsRotation;
	BOOL _pinned;
	BOOL _resting;
	BOOL _affectedByGravity;
	unsigned _fieldBitMask;
	unsigned _categoryBitMask;
	unsigned _collisionBitMask;
	unsigned _contactTestBitMask;
	double _friction;
	double _charge;
	double _restitution;
	double _linearDamping;
	double _angularDamping;
	double _density;
	double _mass;
	double _area;
	NSArray* _joints;
	SKNode* _node;
	double _angularVelocity;
	CGVector _velocity;

}

@property (assign,getter=isDynamic,nonatomic) BOOL dynamic;                   //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) BOOL usesPreciseCollisionDetection;              //@synthesize usesPreciseCollisionDetection=_usesPreciseCollisionDetection - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                             //@synthesize allowsRotation=_allowsRotation - In the implementation block
@property (assign,nonatomic) BOOL pinned;                                     //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isResting,nonatomic) BOOL resting;                   //@synthesize resting=_resting - In the implementation block
@property (assign,nonatomic) double friction;                                 //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double charge;                                   //@synthesize charge=_charge - In the implementation block
@property (assign,nonatomic) double restitution;                              //@synthesize restitution=_restitution - In the implementation block
@property (assign,nonatomic) double linearDamping;                            //@synthesize linearDamping=_linearDamping - In the implementation block
@property (assign,nonatomic) double angularDamping;                           //@synthesize angularDamping=_angularDamping - In the implementation block
@property (assign,nonatomic) double density;                                  //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) double mass;                                     //@synthesize mass=_mass - In the implementation block
@property (nonatomic,readonly) double area;                                   //@synthesize area=_area - In the implementation block
@property (assign,nonatomic) BOOL affectedByGravity;                          //@synthesize affectedByGravity=_affectedByGravity - In the implementation block
@property (assign,nonatomic) unsigned fieldBitMask;                           //@synthesize fieldBitMask=_fieldBitMask - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask;                        //@synthesize categoryBitMask=_categoryBitMask - In the implementation block
@property (assign,nonatomic) unsigned collisionBitMask;                       //@synthesize collisionBitMask=_collisionBitMask - In the implementation block
@property (assign,nonatomic) unsigned contactTestBitMask;                     //@synthesize contactTestBitMask=_contactTestBitMask - In the implementation block
@property (nonatomic,readonly) NSArray * joints;                              //@synthesize joints=_joints - In the implementation block
@property (nonatomic,__weak,readonly) SKNode * node;                          //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGVector velocity;                               //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) double angularVelocity;                          //@synthesize angularVelocity=_angularVelocity - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)copyWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)bodyWithBodies:(id)arg1 ;
+(id)bodyWithCircleOfRadius:(double)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithCircleOfRadius:(double)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(CGSize)arg3 accuracy:(float)arg4 ;
+(id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(CGSize)arg3 ;
+(id)bodyWithEdgeLoopFromRect:(CGRect)arg1 ;
+(id)bodyWithTexture:(id)arg1 size:(CGSize)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(SKNode *)node;
-(CGVector)velocity;
-(void)setVelocity:(CGVector)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(double)area;
-(void)setDynamic:(BOOL)arg1 ;
-(BOOL)isDynamic;
-(BOOL)usesPreciseCollisionDetection;
-(BOOL)allowsRotation;
-(BOOL)pinned;
-(double)charge;
-(double)restitution;
-(double)density;
-(BOOL)affectedByGravity;
-(unsigned)categoryBitMask;
-(unsigned)collisionBitMask;
-(unsigned)contactTestBitMask;
-(unsigned)fieldBitMask;
-(double)angularVelocity;
-(double)linearDamping;
-(double)angularDamping;
-(void)setUsesPreciseCollisionDetection:(BOOL)arg1 ;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(void)setPinned:(BOOL)arg1 ;
-(void)setCharge:(double)arg1 ;
-(void)setRestitution:(double)arg1 ;
-(void)setDensity:(double)arg1 ;
-(void)setAffectedByGravity:(BOOL)arg1 ;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(void)setCollisionBitMask:(unsigned)arg1 ;
-(void)setContactTestBitMask:(unsigned)arg1 ;
-(void)setFieldBitMask:(unsigned)arg1 ;
-(void)setAngularVelocity:(double)arg1 ;
-(void)setLinearDamping:(double)arg1 ;
-(void)setAngularDamping:(double)arg1 ;
-(void)setResting:(BOOL)arg1 ;
-(void)applyForce:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyForce:(CGVector)arg1 ;
-(void)applyTorque:(double)arg1 ;
-(void)applyImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyImpulse:(CGVector)arg1 ;
-(void)applyAngularImpulse:(double)arg1 ;
-(BOOL)isResting;
-(NSArray *)joints;
-(id)allContactedBodies;
@end
