/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSValue : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (nonatomic,readonly) CGPoint CGPointValue; 
@property (nonatomic,readonly) CGVector CGVectorValue; 
@property (nonatomic,readonly) CGSize CGSizeValue; 
@property (nonatomic,readonly) CGRect CGRectValue; 
@property (nonatomic,readonly) CGAffineTransform CGAffineTransformValue; 
@property (nonatomic,readonly) UIEdgeInsets UIEdgeInsetsValue; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets directionalEdgeInsetsValue; 
@property (nonatomic,readonly) UIOffset UIOffsetValue; 
@property (readonly) SCD_Struct_NS57 UIKBHandwritingPointValue; 
@property (readonly) CATransform3D CATransform3DValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) const char* objCType; 
+(id)valueWithCGPoint:(CGPoint)arg1 ;
+(id)valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)valueWithUIEdgeInsets:(UIEdgeInsets)arg1 ;
+(id)valueWithCGRect:(CGRect)arg1 ;
+(id)valueWithCGSize:(CGSize)arg1 ;
+(id)valueWithUIOffset:(UIOffset)arg1 ;
+(id)valueWithDirectionalEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
+(id)valueWithCGVector:(CGVector)arg1 ;
+(id)valueWithNSDirectionalEdgeInsets:(NSDirectionalEdgeInsets)arg1 ;
+(id)valueWithUIKBHandwritingPoint:(SCD_Struct_NS57)arg1 ;
+(id)_web_valueWithCGRect:(CGRect)arg1 ;
+(id)valueWithCATransform3D:(CATransform3D)arg1 ;
+(id)valueWithCAPoint3D:(CAPoint3D)arg1 ;
+(id)valueWithCAColorMatrix:(CAColorMatrix)arg1 ;
+(id)bs_valueWithCGPoint:(CGPoint)arg1 ;
+(id)bs_valueWithCGSize:(CGSize)arg1 ;
+(id)bs_valueWithCGRect:(CGRect)arg1 ;
+(id)bs_valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)valueWithCGPoint:(CGPoint)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)valueWithRange:(NSRange)arg1 ;
+(id)valueWithPoint:(CGPoint)arg1 ;
+(id)valueWithRect:(CGRect)arg1 ;
+(id)valueWithSize:(CGSize)arg1 ;
+(id)valueWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
+(id)value:(const void*)arg1 withObjCType:(const char*)arg2 ;
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)valueWithWeakObject:(id)arg1 ;
+(id)valueWithPointer:(const void*)arg1 ;
+(id)valueWithEdgeInsets:(NSEdgeInsets)arg1 ;
-(CGRect)CGRectValue;
-(CGPoint)CGPointValue;
-(CGAffineTransform)CGAffineTransformValue;
-(CGSize)CGSizeValue;
-(UIEdgeInsets)UIEdgeInsetsValue;
-(UIOffset)UIOffsetValue;
-(CGVector)CGVectorValue;
-(NSDirectionalEdgeInsets)directionalEdgeInsetsValue;
-(SCD_Struct_NS57)UIKBHandwritingPointValue;
-(CGRect)CGRectValue;
-(CATransform3D)CATransform3DValue;
-(CGAffineTransform)CA_CGAffineTransformValue;
-(CAColorMatrix)CAColorMatrixValue;
-(CAPoint3D)CAPoint3DValue;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)CAMLType;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_roundToIntegerFromValue:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)supportsBSXPCSecureCoding;
-(CGPoint)bs_CGPointValue;
-(CGSize)bs_CGSizeValue;
-(CGRect)bs_CGRectValue;
-(CGAffineTransform)bs_CGAffineTransformValue;
-(BOOL)bs_getValue:(out void*)arg1 ofSize:(unsigned long long)arg2 ;
-(CGPoint)CGPointValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(const char*)objCType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(void)getValue:(void*)arg1 ;
-(BOOL)isNSValue__;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSRange)rangeValue;
-(CGPoint)pointValue;
-(CGRect)rectValue;
-(CGSize)sizeValue;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 strict:(BOOL)arg3 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)nonretainedObjectValue;
-(id)weakObjectValue;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void*)pointerValue;
-(NSEdgeInsets)edgeInsetsValue;
-(id)initWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
@end

