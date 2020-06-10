/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase {

	NSNumber* _statusPasswordExists;
	NSNumber* _statusChangePending;
	NSNumber* _statusAllowOroms;

}

@property (nonatomic,copy) NSNumber * statusPasswordExists;              //@synthesize statusPasswordExists=_statusPasswordExists - In the implementation block
@property (nonatomic,copy) NSNumber * statusChangePending;               //@synthesize statusChangePending=_statusChangePending - In the implementation block
@property (nonatomic,copy) NSNumber * statusAllowOroms;                  //@synthesize statusAllowOroms=_statusAllowOroms - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithPasswordExists:(id)arg1 withChangePending:(id)arg2 withAllowOroms:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusPasswordExists:(NSNumber *)arg1 ;
-(void)setStatusChangePending:(NSNumber *)arg1 ;
-(void)setStatusAllowOroms:(NSNumber *)arg1 ;
-(NSNumber *)statusPasswordExists;
-(NSNumber *)statusChangePending;
-(NSNumber *)statusAllowOroms;
@end

