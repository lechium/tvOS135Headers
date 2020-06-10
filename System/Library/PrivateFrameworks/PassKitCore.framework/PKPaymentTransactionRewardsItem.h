/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKCurrencyAmount, NSDecimalNumber;

@interface PKPaymentTransactionRewardsItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	unsigned long long _type;
	unsigned long long _state;
	PKCurrencyAmount* _currencyAmount;
	NSDecimalNumber* _eligibleValue;
	unsigned long long _eligibleValueUnit;

}

@property (nonatomic,retain) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * currencyAmount;                 //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * eligibleValue;                   //@synthesize eligibleValue=_eligibleValue - In the implementation block
@property (assign,nonatomic) unsigned long long eligibleValueUnit;              //@synthesize eligibleValueUnit=_eligibleValueUnit - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)_initWithRewardsDictionary:(id)arg1 ;
-(BOOL)isEqualToRewardsItem:(id)arg1 ;
-(NSDecimalNumber *)eligibleValue;
-(void)setEligibleValue:(NSDecimalNumber *)arg1 ;
-(unsigned long long)eligibleValueUnit;
-(void)setEligibleValueUnit:(unsigned long long)arg1 ;
@end
