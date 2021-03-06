/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityInformationCommand_StatusSecurityInfo;

@interface CEMSecurityInformationCommand_Status : CEMPayloadBase {

	CEMSecurityInformationCommand_StatusSecurityInfo* _statusSecurityInfo;

}

@property (nonatomic,copy) CEMSecurityInformationCommand_StatusSecurityInfo * statusSecurityInfo;              //@synthesize statusSecurityInfo=_statusSecurityInfo - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithSecurityInfo:(id)arg1 ;
+(id)buildRequiredOnlyWithSecurityInfo:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusSecurityInfo:(CEMSecurityInformationCommand_StatusSecurityInfo *)arg1 ;
-(CEMSecurityInformationCommand_StatusSecurityInfo *)statusSecurityInfo;
@end

