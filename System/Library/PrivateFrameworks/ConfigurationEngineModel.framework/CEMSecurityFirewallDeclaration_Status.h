/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@interface CEMSecurityFirewallDeclaration_Status : CEMPayloadBase
+(id)build;
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
@end

