/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString, NSArray;

@interface CEMNetworkVPNDeclaration_Proxies : CEMPayloadBase {

	NSNumber* _payloadHTTPEnable;
	NSNumber* _payloadHTTPPort;
	NSString* _payloadHTTPProxy;
	NSString* _payloadHTTPProxyPassword;
	NSString* _payloadHTTPProxyUsername;
	NSNumber* _payloadHTTPSEnable;
	NSNumber* _payloadHTTPSPort;
	NSString* _payloadHTTPSProxy;
	NSNumber* _payloadProxyAutoConfigEnable;
	NSNumber* _payloadProxyAutoDiscoveryEnable;
	NSString* _payloadProxyAutoConfigURLString;
	NSArray* _payloadSupplementalMatchDomains;

}

@property (nonatomic,copy) NSNumber * payloadHTTPEnable;                            //@synthesize payloadHTTPEnable=_payloadHTTPEnable - In the implementation block
@property (nonatomic,copy) NSNumber * payloadHTTPPort;                              //@synthesize payloadHTTPPort=_payloadHTTPPort - In the implementation block
@property (nonatomic,copy) NSString * payloadHTTPProxy;                             //@synthesize payloadHTTPProxy=_payloadHTTPProxy - In the implementation block
@property (nonatomic,copy) NSString * payloadHTTPProxyPassword;                     //@synthesize payloadHTTPProxyPassword=_payloadHTTPProxyPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadHTTPProxyUsername;                     //@synthesize payloadHTTPProxyUsername=_payloadHTTPProxyUsername - In the implementation block
@property (nonatomic,copy) NSNumber * payloadHTTPSEnable;                           //@synthesize payloadHTTPSEnable=_payloadHTTPSEnable - In the implementation block
@property (nonatomic,copy) NSNumber * payloadHTTPSPort;                             //@synthesize payloadHTTPSPort=_payloadHTTPSPort - In the implementation block
@property (nonatomic,copy) NSString * payloadHTTPSProxy;                            //@synthesize payloadHTTPSProxy=_payloadHTTPSProxy - In the implementation block
@property (nonatomic,copy) NSNumber * payloadProxyAutoConfigEnable;                 //@synthesize payloadProxyAutoConfigEnable=_payloadProxyAutoConfigEnable - In the implementation block
@property (nonatomic,copy) NSNumber * payloadProxyAutoDiscoveryEnable;              //@synthesize payloadProxyAutoDiscoveryEnable=_payloadProxyAutoDiscoveryEnable - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyAutoConfigURLString;              //@synthesize payloadProxyAutoConfigURLString=_payloadProxyAutoConfigURLString - In the implementation block
@property (nonatomic,copy) NSArray * payloadSupplementalMatchDomains;               //@synthesize payloadSupplementalMatchDomains=_payloadSupplementalMatchDomains - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithHTTPEnable:(id)arg1 withHTTPPort:(id)arg2 withHTTPProxy:(id)arg3 withHTTPProxyPassword:(id)arg4 withHTTPProxyUsername:(id)arg5 withHTTPSEnable:(id)arg6 withHTTPSPort:(id)arg7 withHTTPSProxy:(id)arg8 withProxyAutoConfigEnable:(id)arg9 withProxyAutoDiscoveryEnable:(id)arg10 withProxyAutoConfigURLString:(id)arg11 withSupplementalMatchDomains:(id)arg12 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadHTTPEnable:(NSNumber *)arg1 ;
-(void)setPayloadHTTPPort:(NSNumber *)arg1 ;
-(void)setPayloadHTTPProxy:(NSString *)arg1 ;
-(void)setPayloadHTTPProxyPassword:(NSString *)arg1 ;
-(void)setPayloadHTTPProxyUsername:(NSString *)arg1 ;
-(void)setPayloadHTTPSEnable:(NSNumber *)arg1 ;
-(void)setPayloadHTTPSPort:(NSNumber *)arg1 ;
-(void)setPayloadHTTPSProxy:(NSString *)arg1 ;
-(void)setPayloadProxyAutoConfigEnable:(NSNumber *)arg1 ;
-(void)setPayloadProxyAutoDiscoveryEnable:(NSNumber *)arg1 ;
-(void)setPayloadProxyAutoConfigURLString:(NSString *)arg1 ;
-(void)setPayloadSupplementalMatchDomains:(NSArray *)arg1 ;
-(NSNumber *)payloadHTTPEnable;
-(NSNumber *)payloadHTTPPort;
-(NSString *)payloadHTTPProxy;
-(NSString *)payloadHTTPProxyPassword;
-(NSString *)payloadHTTPProxyUsername;
-(NSNumber *)payloadHTTPSEnable;
-(NSNumber *)payloadHTTPSPort;
-(NSString *)payloadHTTPSProxy;
-(NSNumber *)payloadProxyAutoConfigEnable;
-(NSNumber *)payloadProxyAutoDiscoveryEnable;
-(NSString *)payloadProxyAutoConfigURLString;
-(NSArray *)payloadSupplementalMatchDomains;
@end

