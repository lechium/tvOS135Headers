/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMSystemAllowedMediaDeclaration_MediaItems, NSString;

@interface CEMSystemAllowedMediaDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	CEMSystemAllowedMediaDeclaration_MediaItems* _payloadLogoutEject;
	CEMSystemAllowedMediaDeclaration_MediaItems* _payloadMountControls;
	CEMSystemAllowedMediaDeclaration_MediaItems* _payloadUnmountControls;

}

@property (nonatomic,copy) CEMSystemAllowedMediaDeclaration_MediaItems * payloadLogoutEject;                  //@synthesize payloadLogoutEject=_payloadLogoutEject - In the implementation block
@property (nonatomic,copy) CEMSystemAllowedMediaDeclaration_MediaItems * payloadMountControls;                //@synthesize payloadMountControls=_payloadMountControls - In the implementation block
@property (nonatomic,copy) CEMSystemAllowedMediaDeclaration_MediaItems * payloadUnmountControls;              //@synthesize payloadUnmountControls=_payloadUnmountControls - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withLogoutEject:(id)arg2 withMountControls:(id)arg3 withUnmountControls:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadLogoutEject:(CEMSystemAllowedMediaDeclaration_MediaItems *)arg1 ;
-(void)setPayloadMountControls:(CEMSystemAllowedMediaDeclaration_MediaItems *)arg1 ;
-(void)setPayloadUnmountControls:(CEMSystemAllowedMediaDeclaration_MediaItems *)arg1 ;
-(CEMSystemAllowedMediaDeclaration_MediaItems *)payloadLogoutEject;
-(CEMSystemAllowedMediaDeclaration_MediaItems *)payloadMountControls;
-(CEMSystemAllowedMediaDeclaration_MediaItems *)payloadUnmountControls;
@end

