/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMNetworkGlobalHTTPProxyDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadProxyType;
	NSString* _payloadProxyServer;
	NSNumber* _payloadProxyServerPort;
	NSString* _payloadProxyUsername;
	NSString* _payloadProxyPassword;
	NSString* _payloadProxyPACURL;
	NSNumber* _payloadProxyPACFallbackAllowed;
	NSNumber* _payloadProxyCaptiveLoginAllowed;

}

@property (nonatomic,copy) NSString * payloadProxyType;                             //@synthesize payloadProxyType=_payloadProxyType - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyServer;                           //@synthesize payloadProxyServer=_payloadProxyServer - In the implementation block
@property (nonatomic,copy) NSNumber * payloadProxyServerPort;                       //@synthesize payloadProxyServerPort=_payloadProxyServerPort - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyUsername;                         //@synthesize payloadProxyUsername=_payloadProxyUsername - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyPassword;                         //@synthesize payloadProxyPassword=_payloadProxyPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyPACURL;                           //@synthesize payloadProxyPACURL=_payloadProxyPACURL - In the implementation block
@property (nonatomic,copy) NSNumber * payloadProxyPACFallbackAllowed;               //@synthesize payloadProxyPACFallbackAllowed=_payloadProxyPACFallbackAllowed - In the implementation block
@property (nonatomic,copy) NSNumber * payloadProxyCaptiveLoginAllowed;              //@synthesize payloadProxyCaptiveLoginAllowed=_payloadProxyCaptiveLoginAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withProxyType:(id)arg2 withProxyServer:(id)arg3 withProxyServerPort:(id)arg4 withProxyUsername:(id)arg5 withProxyPassword:(id)arg6 withProxyPACURL:(id)arg7 withProxyPACFallbackAllowed:(id)arg8 withProxyCaptiveLoginAllowed:(id)arg9 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withProxyServer:(id)arg2 withProxyServerPort:(id)arg3 withProxyPACURL:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadProxyServer:(NSString *)arg1 ;
-(NSString *)payloadProxyServer;
-(void)setPayloadProxyType:(NSString *)arg1 ;
-(void)setPayloadProxyServerPort:(NSNumber *)arg1 ;
-(void)setPayloadProxyUsername:(NSString *)arg1 ;
-(void)setPayloadProxyPassword:(NSString *)arg1 ;
-(void)setPayloadProxyPACURL:(NSString *)arg1 ;
-(void)setPayloadProxyPACFallbackAllowed:(NSNumber *)arg1 ;
-(void)setPayloadProxyCaptiveLoginAllowed:(NSNumber *)arg1 ;
-(NSString *)payloadProxyType;
-(NSNumber *)payloadProxyServerPort;
-(NSString *)payloadProxyUsername;
-(NSString *)payloadProxyPassword;
-(NSString *)payloadProxyPACURL;
-(NSNumber *)payloadProxyPACFallbackAllowed;
-(NSNumber *)payloadProxyCaptiveLoginAllowed;
@end

