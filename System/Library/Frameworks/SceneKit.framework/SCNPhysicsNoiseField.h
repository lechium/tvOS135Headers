/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsField.h>

@interface SCNPhysicsNoiseField : SCNPhysicsField {

	double _smoothness;
	double _animationSpeed;

}

@property (assign,nonatomic) double smoothness; 
@property (assign,nonatomic) double animationSpeed; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(double)smoothness;
-(void)setSmoothness:(double)arg1 ;
-(double)animationSpeed;
-(void)setAnimationSpeed:(double)arg1 ;
-(c3dPhysicsField*)_createField;
-(BOOL)supportsDirection;
-(BOOL)supportsOffset;
@end

