/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ParsecSubscriptionServiceSupport.framework/ParsecSubscriptionServiceSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSSubscriptionRegistrationCenter;

@interface PSSSSubscriptionManagerInternal : NSObject {

	VSSubscriptionRegistrationCenter* _registrationCenter;

}

@property (nonatomic,retain) VSSubscriptionRegistrationCenter * registrationCenter;              //@synthesize registrationCenter=_registrationCenter - In the implementation block
-(id)init;
-(VSSubscriptionRegistrationCenter *)registrationCenter;
-(void)setRegistrationCenter:(VSSubscriptionRegistrationCenter *)arg1 ;
-(void)getActiveSubscriptionServicesMatchingBundleIdentifiers:(id)arg1 domainIdentifiers:(id)arg2 maximumExpirationLimit:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2 expirationDate:(id)arg3 ;
-(void)removeSubscriptionServiceForURL:(id)arg1 ;
-(void)removeWebSubscriptionServicesCreatedAfterDate:(id)arg1 ;
@end

