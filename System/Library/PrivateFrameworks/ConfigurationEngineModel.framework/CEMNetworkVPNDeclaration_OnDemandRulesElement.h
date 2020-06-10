/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString, CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElement : CEMPayloadBase {

	NSArray* _payloadDNSDomainMatch;
	NSArray* _payloadDNSServerAddressMatch;
	NSString* _payloadURLStringProbe;
	NSString* _payloadAction;
	CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters* _payloadActionParameters;
	NSString* _payloadInterfaceTypeMatch;
	NSArray* _payloadSSIDMatch;

}

@property (nonatomic,copy) NSArray * payloadDNSDomainMatch;                                                                      //@synthesize payloadDNSDomainMatch=_payloadDNSDomainMatch - In the implementation block
@property (nonatomic,copy) NSArray * payloadDNSServerAddressMatch;                                                               //@synthesize payloadDNSServerAddressMatch=_payloadDNSServerAddressMatch - In the implementation block
@property (nonatomic,copy) NSString * payloadURLStringProbe;                                                                     //@synthesize payloadURLStringProbe=_payloadURLStringProbe - In the implementation block
@property (nonatomic,copy) NSString * payloadAction;                                                                             //@synthesize payloadAction=_payloadAction - In the implementation block
@property (nonatomic,copy) CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters * payloadActionParameters;              //@synthesize payloadActionParameters=_payloadActionParameters - In the implementation block
@property (nonatomic,copy) NSString * payloadInterfaceTypeMatch;                                                                 //@synthesize payloadInterfaceTypeMatch=_payloadInterfaceTypeMatch - In the implementation block
@property (nonatomic,copy) NSArray * payloadSSIDMatch;                                                                           //@synthesize payloadSSIDMatch=_payloadSSIDMatch - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithDNSDomainMatch:(id)arg1 withDNSServerAddressMatch:(id)arg2 withURLStringProbe:(id)arg3 withAction:(id)arg4 withActionParameters:(id)arg5 withInterfaceTypeMatch:(id)arg6 withSSIDMatch:(id)arg7 ;
+(id)buildRequiredOnlyWithAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDNSDomainMatch:(NSArray *)arg1 ;
-(void)setPayloadDNSServerAddressMatch:(NSArray *)arg1 ;
-(void)setPayloadURLStringProbe:(NSString *)arg1 ;
-(void)setPayloadAction:(NSString *)arg1 ;
-(void)setPayloadActionParameters:(CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters *)arg1 ;
-(void)setPayloadInterfaceTypeMatch:(NSString *)arg1 ;
-(void)setPayloadSSIDMatch:(NSArray *)arg1 ;
-(NSArray *)payloadDNSDomainMatch;
-(NSArray *)payloadDNSServerAddressMatch;
-(NSString *)payloadURLStringProbe;
-(NSString *)payloadAction;
-(CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters *)payloadActionParameters;
-(NSString *)payloadInterfaceTypeMatch;
-(NSArray *)payloadSSIDMatch;
@end

