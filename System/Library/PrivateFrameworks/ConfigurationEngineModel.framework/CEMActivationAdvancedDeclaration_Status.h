/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMActivationAdvancedDeclaration_Status : CEMPayloadBase {

	NSArray* _statusInstalledConfigurations;

}

@property (nonatomic,copy) NSArray * statusInstalledConfigurations;              //@synthesize statusInstalledConfigurations=_statusInstalledConfigurations - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
+(id)buildWithInstalledConfigurations:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusInstalledConfigurations:(NSArray *)arg1 ;
-(NSArray *)statusInstalledConfigurations;
@end

