/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNAppToAppLayerMappingDeclaration_AppLayerVPNMappingItem : CEMPayloadBase {

	NSString* _payloadIdentifier;
	NSString* _payloadVPNUUID;
	NSString* _payloadDesignatedRequirement;
	NSString* _payloadSigningIdentifier;

}

@property (nonatomic,copy) NSString * payloadIdentifier;                         //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadVPNUUID;                            //@synthesize payloadVPNUUID=_payloadVPNUUID - In the implementation block
@property (nonatomic,copy) NSString * payloadDesignatedRequirement;              //@synthesize payloadDesignatedRequirement=_payloadDesignatedRequirement - In the implementation block
@property (nonatomic,copy) NSString * payloadSigningIdentifier;                  //@synthesize payloadSigningIdentifier=_payloadSigningIdentifier - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(NSString *)payloadIdentifier;
-(void)setPayloadDesignatedRequirement:(NSString *)arg1 ;
-(void)setPayloadSigningIdentifier:(NSString *)arg1 ;
-(NSString *)payloadDesignatedRequirement;
-(NSString *)payloadSigningIdentifier;
-(void)setPayloadVPNUUID:(NSString *)arg1 ;
-(NSString *)payloadVPNUUID;
@end

