/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier {

	id _ecKeySpecifierInternal;

}

@property (assign) long long curve; 
+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)curve;
-(void)setCurve:(long long)arg1 ;
-(id)initWithCurve:(long long)arg1 ;
@end

