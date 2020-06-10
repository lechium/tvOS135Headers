/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMNetworkCellularDeclaration_AttachAPN : CEMPayloadBase {

	NSString* _payloadName;
	NSString* _payloadAuthenticationType;
	NSString* _payloadUsername;
	NSString* _payloadPassword;
	NSNumber* _payloadAllowedProtocolMask;

}

@property (nonatomic,copy) NSString * payloadName;                             //@synthesize payloadName=_payloadName - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthenticationType;               //@synthesize payloadAuthenticationType=_payloadAuthenticationType - In the implementation block
@property (nonatomic,copy) NSString * payloadUsername;                         //@synthesize payloadUsername=_payloadUsername - In the implementation block
@property (nonatomic,copy) NSString * payloadPassword;                         //@synthesize payloadPassword=_payloadPassword - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowedProtocolMask;              //@synthesize payloadAllowedProtocolMask=_payloadAllowedProtocolMask - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithName:(id)arg1 withAuthenticationType:(id)arg2 withUsername:(id)arg3 withPassword:(id)arg4 withAllowedProtocolMask:(id)arg5 ;
+(id)buildRequiredOnlyWithName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPassword:(NSString *)arg1 ;
-(NSString *)payloadPassword;
-(void)setPayloadName:(NSString *)arg1 ;
-(NSString *)payloadName;
-(void)setPayloadAuthenticationType:(NSString *)arg1 ;
-(void)setPayloadUsername:(NSString *)arg1 ;
-(void)setPayloadAllowedProtocolMask:(NSNumber *)arg1 ;
-(NSString *)payloadAuthenticationType;
-(NSString *)payloadUsername;
-(NSNumber *)payloadAllowedProtocolMask;
@end

