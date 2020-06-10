/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAPaymentSummaryResponse : AAResponse {

	NSDictionary* _responseParameters;

}

@property (nonatomic,readonly) unsigned long long numberOfCards; 
@property (nonatomic,readonly) NSString * description; 
-(NSString *)description;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(unsigned long long)numberOfCards;
@end

