/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse {

	NSDictionary* _aps;
	NSString* _action;
	NSString* _requestID;

}

@property (nonatomic,copy,readonly) NSDictionary * aps;                //@synthesize aps=_aps - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestID;              //@synthesize requestID=_requestID - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)action;
-(NSString *)requestID;
-(NSDictionary *)aps;
@end

