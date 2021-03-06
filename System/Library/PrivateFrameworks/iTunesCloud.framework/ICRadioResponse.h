/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, ICStoreDialogResponse, NSError;

@interface ICRadioResponse : NSObject {

	NSDate* _expirationDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * contentDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) long long version; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSError * serverError; 
-(long long)version;
-(NSDate *)expirationDate;
-(NSDictionary *)responseDictionary;
-(id)initWithURLResponse:(id)arg1 ;
-(ICStoreDialogResponse *)dialog;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(NSDictionary *)contentDictionary;
-(NSError *)serverError;
@end

