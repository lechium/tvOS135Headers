/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMSystemAirPrintPrintersDeclaration_AirPrintItem : CEMPayloadBase {

	NSString* _payloadIPAddress;
	NSString* _payloadResourcePath;
	NSNumber* _payloadPort;
	NSNumber* _payloadForceTLS;

}

@property (nonatomic,copy) NSString * payloadIPAddress;                 //@synthesize payloadIPAddress=_payloadIPAddress - In the implementation block
@property (nonatomic,copy) NSString * payloadResourcePath;              //@synthesize payloadResourcePath=_payloadResourcePath - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPort;                      //@synthesize payloadPort=_payloadPort - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceTLS;                  //@synthesize payloadForceTLS=_payloadForceTLS - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithIPAddress:(id)arg1 withResourcePath:(id)arg2 withPort:(id)arg3 withForceTLS:(id)arg4 ;
+(id)buildRequiredOnlyWithIPAddress:(id)arg1 withResourcePath:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPort:(NSNumber *)arg1 ;
-(NSNumber *)payloadPort;
-(void)setPayloadIPAddress:(NSString *)arg1 ;
-(void)setPayloadResourcePath:(NSString *)arg1 ;
-(void)setPayloadForceTLS:(NSNumber *)arg1 ;
-(NSString *)payloadIPAddress;
-(NSString *)payloadResourcePath;
-(NSNumber *)payloadForceTLS;
@end

