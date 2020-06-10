/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) SCD_Struct_CM322 rotationMatrix; 
@property (nonatomic,readonly) SCD_Struct_CM321 quaternion; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)pitch;
-(double)yaw;
-(double)roll;
-(void)setQuaternion:(SCD_Struct_CM321)arg1 ;
-(id)initWithQuaternion:(SCD_Struct_CM321)arg1 ;
-(SCD_Struct_CM321)quaternion;
-(SCD_Struct_CM322)rotationMatrix;
-(void)multiplyByInverseOfAttitude:(id)arg1 ;
@end
