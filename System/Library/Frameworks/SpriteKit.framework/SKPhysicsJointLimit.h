/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointLimit : SKPhysicsJoint {

	double _maxLength;

}

@property (assign,nonatomic) double maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(double)maxLength;
-(void)setMaxLength:(double)arg1 ;
@end

