/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICStoreResponseProtocol.h>

@class NSDictionary, NSDate, ICURLBag, NSData, ICStoreDialogResponse, NSString, NSArray, NSError;

@interface ICMusicSubscriptionPlaybackResponse : NSObject <ICStoreResponseProtocol> {

	NSDictionary* _responseDictionary;
	NSDate* _requestDate;
	ICURLBag* _urlBag;

}

@property (nonatomic,copy,readonly) NSData * leaseInfoData; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,copy,readonly) NSString * householdID; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,copy,readonly) NSError * serverError; 
@property (nonatomic,copy,readonly) NSDictionary * metricsDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(NSString *)householdID;
-(ICStoreDialogResponse *)dialog;
-(NSData *)leaseInfoData;
-(NSData *)subscriptionKeyBagData;
-(NSDictionary *)metricsDictionary;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3 ;
-(NSDate *)leaseExpirationDate;
-(NSError *)serverError;
-(id)itemWithStoreAdamID:(long long)arg1 ;
@end

