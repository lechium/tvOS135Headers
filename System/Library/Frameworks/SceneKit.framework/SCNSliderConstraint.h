/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNSliderConstraint : SCNConstraint {

	unsigned long long _categoryBitMask;
	SCNVector3 _offset;
	float _radius;

}

@property (assign,nonatomic) unsigned long long collisionCategoryBitMask; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) SCNVector3 offset; 
+(BOOL)supportsSecureCoding;
+(id)sliderConstraint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNVector3)offset;
-(void)setOffset:(SCNVector3)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(unsigned long long)collisionCategoryBitMask;
-(void)setCollisionCategoryBitMask:(unsigned long long)arg1 ;
@end

