/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest {

	NSDictionary* _payload;

}

@property (readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(NSDictionary *)payload;
-(id)initWithPayload:(id)arg1 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

