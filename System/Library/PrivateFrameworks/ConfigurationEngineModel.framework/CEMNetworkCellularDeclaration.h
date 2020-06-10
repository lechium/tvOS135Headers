/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMNetworkCellularDeclaration_AttachAPN, NSArray, NSString;

@interface CEMNetworkCellularDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	CEMNetworkCellularDeclaration_AttachAPN* _payloadAttachAPN;
	NSArray* _payloadAPNs;

}

@property (nonatomic,copy) CEMNetworkCellularDeclaration_AttachAPN * payloadAttachAPN;              //@synthesize payloadAttachAPN=_payloadAttachAPN - In the implementation block
@property (nonatomic,copy) NSArray * payloadAPNs;                                                   //@synthesize payloadAPNs=_payloadAPNs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withAttachAPN:(id)arg2 withAPNs:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAttachAPN:(CEMNetworkCellularDeclaration_AttachAPN *)arg1 ;
-(void)setPayloadAPNs:(NSArray *)arg1 ;
-(CEMNetworkCellularDeclaration_AttachAPN *)payloadAttachAPN;
-(NSArray *)payloadAPNs;
@end
