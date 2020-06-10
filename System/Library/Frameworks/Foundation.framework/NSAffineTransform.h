/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_NS8 _transformStruct;

}

@property (assign) SCD_Struct_NS8 transformStruct; 
+(BOOL)supportsSecureCoding;
+(id)transform;
-(CGAffineTransform)CA_CGAffineTransformValue;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CAMLType;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(void)invert;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_NS8)transformStruct;
-(void)setTransformStruct:(SCD_Struct_NS8)arg1 ;
-(id)initWithTransform:(id)arg1 ;
-(void)translateXBy:(double)arg1 yBy:(double)arg2 ;
-(void)rotateByDegrees:(double)arg1 ;
-(void)rotateByRadians:(double)arg1 ;
-(void)scaleBy:(double)arg1 ;
-(void)scaleXBy:(double)arg1 yBy:(double)arg2 ;
-(void)appendTransform:(id)arg1 ;
-(void)prependTransform:(id)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
@end

