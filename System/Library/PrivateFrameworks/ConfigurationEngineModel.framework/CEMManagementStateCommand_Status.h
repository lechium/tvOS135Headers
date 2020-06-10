/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMManagementStateCommand_Status : CEMPayloadBase {

	NSArray* _statusCommands;
	NSArray* _statusDeclarations;

}

@property (nonatomic,copy) NSArray * statusCommands;                  //@synthesize statusCommands=_statusCommands - In the implementation block
@property (nonatomic,copy) NSArray * statusDeclarations;              //@synthesize statusDeclarations=_statusDeclarations - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithCommands:(id)arg1 withDeclarations:(id)arg2 ;
+(id)buildRequiredOnlyWithCommands:(id)arg1 withDeclarations:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusCommands:(NSArray *)arg1 ;
-(void)setStatusDeclarations:(NSArray *)arg1 ;
-(NSArray *)statusCommands;
-(NSArray *)statusDeclarations;
@end
