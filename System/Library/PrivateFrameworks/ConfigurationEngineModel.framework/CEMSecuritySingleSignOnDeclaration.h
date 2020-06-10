/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, CEMSecuritySingleSignOnDeclaration_Kerberos;

@interface CEMSecuritySingleSignOnDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadName;
	CEMSecuritySingleSignOnDeclaration_Kerberos* _payloadKerberos;

}

@property (nonatomic,copy) NSString * payloadName;                                                     //@synthesize payloadName=_payloadName - In the implementation block
@property (nonatomic,copy) CEMSecuritySingleSignOnDeclaration_Kerberos * payloadKerberos;              //@synthesize payloadKerberos=_payloadKerberos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withName:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg1 withName:(id)arg2 withKerberos:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadName:(NSString *)arg1 ;
-(NSString *)payloadName;
-(void)setPayloadKerberos:(CEMSecuritySingleSignOnDeclaration_Kerberos *)arg1 ;
-(CEMSecuritySingleSignOnDeclaration_Kerberos *)payloadKerberos;
@end

