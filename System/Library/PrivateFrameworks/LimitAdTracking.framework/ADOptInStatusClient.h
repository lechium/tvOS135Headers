/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/LimitAdTracking.framework/LimitAdTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADOptInStatusClient : NSObject
+(id)sharedInstance;
-(id)advertisingIdentifier;
-(void)clearAdvertisingIdentifier;
-(void)setOptInStatus:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)advertisingIdentifierChanged:(/*^block*/id)arg1 ;
-(void)refreshOptInStatus;
@end

