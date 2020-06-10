/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBSearchForAccountsIntent.h>
@class _INPBDataString, _INPBIntentMetadata;


@protocol _INPBSearchForAccountsIntent <NSObject>
@property (nonatomic,retain) _INPBDataString * accountNickname; 
@property (nonatomic,readonly) BOOL hasAccountNickname; 
@property (assign,nonatomic) int accountType; 
@property (assign,nonatomic) BOOL hasAccountType; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDataString * organizationName; 
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (assign,nonatomic) int requestedBalanceType; 
@property (assign,nonatomic) BOOL hasRequestedBalanceType; 
@required
-(int)accountType;
-(void)setAccountType:(int)arg1;
-(void)setHasAccountType:(BOOL)arg1;
-(BOOL)hasAccountType;
-(_INPBDataString *)organizationName;
-(void)setOrganizationName:(id)arg1;
-(BOOL)hasOrganizationName;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(id)accountTypeAsString:(int)arg1;
-(int)StringAsAccountType:(id)arg1;
-(id)requestedBalanceTypeAsString:(int)arg1;
-(int)StringAsRequestedBalanceType:(id)arg1;
-(_INPBDataString *)accountNickname;
-(void)setAccountNickname:(id)arg1;
-(BOOL)hasAccountNickname;
-(int)requestedBalanceType;
-(void)setRequestedBalanceType:(int)arg1;
-(BOOL)hasRequestedBalanceType;
-(void)setHasRequestedBalanceType:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _INPBDataString, _INPBIntentMetadata, NSString;

@interface _INPBSearchForAccountsIntent : PBCodable <_INPBSearchForAccountsIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN1 _has;
	BOOL __encodeLegacyGloryData;
	int _accountType;
	int _requestedBalanceType;
	_INPBDataString* _accountNickname;
	_INPBIntentMetadata* _intentMetadata;
	_INPBDataString* _organizationName;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDataString * accountNickname;                                          //@synthesize accountNickname=_accountNickname - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountNickname; 
@property (assign,nonatomic) int accountType;                                                            //@synthesize accountType=_accountType - In the implementation block
@property (assign,nonatomic) BOOL hasAccountType; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDataString * organizationName;                                         //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (assign,nonatomic) int requestedBalanceType;                                                   //@synthesize requestedBalanceType=_requestedBalanceType - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedBalanceType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)accountType;
-(void)setAccountType:(int)arg1 ;
-(void)setHasAccountType:(BOOL)arg1 ;
-(BOOL)hasAccountType;
-(_INPBDataString *)organizationName;
-(void)setOrganizationName:(_INPBDataString *)arg1 ;
-(BOOL)hasOrganizationName;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(id)accountTypeAsString:(int)arg1 ;
-(int)StringAsAccountType:(id)arg1 ;
-(id)requestedBalanceTypeAsString:(int)arg1 ;
-(int)StringAsRequestedBalanceType:(id)arg1 ;
-(_INPBDataString *)accountNickname;
-(void)setAccountNickname:(_INPBDataString *)arg1 ;
-(BOOL)hasAccountNickname;
-(int)requestedBalanceType;
-(void)setRequestedBalanceType:(int)arg1 ;
-(BOOL)hasRequestedBalanceType;
-(void)setHasRequestedBalanceType:(BOOL)arg1 ;
@end

