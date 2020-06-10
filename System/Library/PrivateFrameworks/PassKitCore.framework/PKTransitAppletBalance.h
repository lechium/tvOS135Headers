/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSDate;

@interface PKTransitAppletBalance : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSDecimalNumber* _balance;
	NSString* _currency;
	long long _exponent;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balance;              //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSString * currency;                    //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) long long exponent;                   //@synthesize exponent=_exponent - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL isCurrency; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(long long)exponent;
-(void)setExponent:(long long)arg1 ;
-(NSDecimalNumber *)balance;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(BOOL)isCurrency;
-(BOOL)isEqualToBalance:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 balance:(id)arg2 currency:(id)arg3 exponent:(long long)arg4 expirationDate:(id)arg5 ;
-(void)_setIdentifierFromObject:(id)arg1 ;
@end

