/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class PKPhysicsWorld, NSMutableArray, NSArray;

@interface PKPhysicsBody : NSObject <NSCopying, NSSecureCoding> {

	id<NSObject> _representedObject;
	unsigned* _bodyDef : 2BodyDef;
	unsigned* _body : 2Body;
	PKCFieldRef _field;
	int _dynamicType;
	vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> >* _shapes;
	PKPhysicsWorld* _world;
	NSMutableArray* _joints;
	BOOL _inUse;
	int _shapeType;
	shared_ptr<PKPath>* _pathPtr;
	shared_ptr<QuadTree>* _quadTree;
	CGPoint _p0;
	CGPoint _p1;
	CGSize _size;
	double _radius;
	double _edgeRadius;
	CGImageRef _mask;
	shared_ptr<PKPath>* _outline;
	BOOL _isPinned;
	BOOL _allowsRotation;
	/*^block*/id _postStepBlock;

}

@property (nonatomic,readonly) vector<PKPhysicsShape ** _shapes; 
@property (assign,nonatomic) unsigned* _bodyDef : 2BodyDef; 
@property (assign,nonatomic) unsigned* _body : 2Body; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double rotation; 
@property (assign,getter=isDynamic,nonatomic) BOOL dynamic; 
@property (assign,nonatomic) BOOL usesPreciseCollisionDetection; 
@property (assign,nonatomic) BOOL allowsRotation; 
@property (assign,nonatomic) BOOL pinned; 
@property (assign,nonatomic) shared_ptr<PKPath>* outline; 
@property (nonatomic,readonly) PKPath* volume; 
@property (assign,getter=isResting,nonatomic) BOOL resting; 
@property (assign,nonatomic) double friction; 
@property (assign,nonatomic) double charge; 
@property (assign,nonatomic) double restitution; 
@property (assign,nonatomic) double linearDamping; 
@property (assign,nonatomic) double angularDamping; 
@property (assign,nonatomic) double density; 
@property (assign,nonatomic) double mass; 
@property (nonatomic,readonly) double area; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) BOOL affectedByGravity; 
@property (assign,nonatomic) unsigned fieldBitMask; 
@property (assign,nonatomic) unsigned categoryBitMask; 
@property (assign,nonatomic) unsigned collisionBitMask; 
@property (assign,nonatomic) unsigned contactTestBitMask; 
@property (nonatomic,readonly) NSArray * joints; 
@property (assign,nonatomic,__weak) id<NSObject> representedObject; 
@property (nonatomic,copy) id postStepBlock;                                     //@synthesize postStepBlock=_postStepBlock - In the implementation block
@property (assign,nonatomic) CGVector velocity; 
@property (assign,nonatomic) double angularVelocity; 
+(BOOL)supportsSecureCoding;
+(id)bodyWithBodies:(id)arg1 ;
+(id)bodyWithCircleOfRadius:(double)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithOutline:(shared_ptr<PKPath>*)arg1 offset:(CGPoint)arg2 ;
+(id)initWithQuadTree:(id)arg1 ;
+(id)initWithMarchingCubes:(PKCGrid=iiiRange=ffffff}vector<unsigned char, std::__1::allocator<unsigned char> >=**compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >=*}}vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >}vector<int, std::__1::allocator<int> >=iicompressed_pair<int *, std::__1::allocator<int> >=i}}vector<signed char, std::__1::allocator<signed char> >=**compressed_pair<signed char *, std::__1::allocator<signed char> >=*}}}Ref)arg1 pixelFrame:(CGRect)arg2 ;
+(id)bodyWithCircleOfRadius:(double)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 edgeRadius:(double)arg2 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 edgeRadius:(double)arg3 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(CGPoint)position;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(double)mass;
-(void)setMass:(double)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(unsigned*)_body;
-(BOOL)active;
-(CGVector)velocity;
-(void)setVelocity:(CGVector)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(double)friction;
-(void)setFriction:(double)arg1 ;
-(PKPath*)volume;
-(double)area;
-(shared_ptr<PKPath>*)outline;
-(void)setOutline:(shared_ptr<PKPath>*)arg1 ;
-(id)initWithPolygonFromPath:(CGPathRef)arg1 ;
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
-(id)initWithCircleOfRadius:(double)arg1 center:(CGPoint)arg2 ;
-(id)initWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
-(id)initWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(id)initWithEdgeChainFromPath:(CGPathRef)arg1 ;
-(id)initWithEdgeLoopFromPath:(CGPathRef)arg1 ;
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
-(vector<PKPhysicsShape **)_shapes;
-(id)initWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 edgeRadius:(float)arg3 ;
-(void)set_allowSleep:(BOOL)arg1 ;
-(id)initWithBodies:(id)arg1 ;
-(void)setResting:(BOOL)arg1 ;
-(id)_descriptionClassName;
-(id)_descriptionFormat;
-(void)clearBox2DData;
-(BOOL)isEqualToBody:(id)arg1 ;
-(id)initWithCircleOfRadius:(double)arg1 ;
-(id)initWithRectangleOfSize:(CGSize)arg1 ;
-(void)setRepresentedObject:(id<NSObject>)arg1 ;
-(id<NSObject>)representedObject;
-(BOOL)_allowSleep;
-(void)applyForce:(CGPoint)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyForce:(CGPoint)arg1 ;
-(void)applyTorque:(double)arg1 ;
-(void)applyImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyImpulse:(CGVector)arg1 ;
-(void)applyAngularImpulse:(double)arg1 ;
-(void)applyUnscaledForce:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyUnscaledForce:(CGVector)arg1 ;
-(void)applyUnscaledImpulse:(CGVector)arg1 atPoint:(CGPoint)arg2 ;
-(void)applyUnscaledImpulse:(CGVector)arg1 ;
-(BOOL)isResting;
-(NSArray *)joints;
-(void)reapplyScale:(double)arg1 yScale:(double)arg2 ;
-(id)allContactedBodies;
-(id)postStepBlock;
-(void)setPostStepBlock:(id)arg1 ;
-(unsigned*)_bodyDef;
-(id)_world;
-(id)_joints;
-(BOOL)_inUse;
-(shared_ptr<QuadTree>*)_quadTree;
-(void)set_world:(id)arg1 ;
-(void)set_joints:(id)arg1 ;
-(void)set_inUse:(BOOL)arg1 ;
-(void)set_bodyDef:(unsigned*)arg1 ;
-(void)set_body:(unsigned*)arg1 ;
@end

