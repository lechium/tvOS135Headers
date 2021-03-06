/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMPredicateCompositeBudget_Monitors : CEMPayloadBase {

	NSArray* _payloadApps;
	NSArray* _payloadWebSites;
	NSArray* _payloadCategories;

}

@property (nonatomic,copy) NSArray * payloadApps;                    //@synthesize payloadApps=_payloadApps - In the implementation block
@property (nonatomic,copy) NSArray * payloadWebSites;                //@synthesize payloadWebSites=_payloadWebSites - In the implementation block
@property (nonatomic,copy) NSArray * payloadCategories;              //@synthesize payloadCategories=_payloadCategories - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadApps:(NSArray *)arg1 ;
-(NSArray *)payloadApps;
-(void)setPayloadCategories:(NSArray *)arg1 ;
-(NSArray *)payloadCategories;
-(void)setPayloadWebSites:(NSArray *)arg1 ;
-(NSArray *)payloadWebSites;
@end

