/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject {

	NSMutableDictionary* _harvestedData;

}

@property (nonatomic,copy,readonly) NSDictionary * harvestedData; 
-(id)init;
-(void)harvestDataFromServerUIObjectModel:(id)arg1 ;
-(NSDictionary *)harvestedData;
-(void)harvestDataFromServerHTTPResponse:(id)arg1 ;
-(void)_harvestDataFromClientInfo:(id)arg1 withExtractor:(id)arg2 ;
-(void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg1 ;
-(void)_harvestIDMSRecoveryHeadersInfo:(id)arg1 ;
-(void)harvestIDMSRecoveryInfoFromHeaders:(id)arg1 ;
-(void)harvestDataFromCompanionResponse:(id)arg1 ;
@end

