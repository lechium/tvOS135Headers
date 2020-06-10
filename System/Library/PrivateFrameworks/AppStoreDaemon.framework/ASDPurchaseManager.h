/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseManager : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interface;
+(id)sharedManager;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)adoptionStatus:(BOOL)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)unadoptWithReplyHandler:(/*^block*/id)arg1 ;
-(id)adopt:(id)arg1 ;
-(id)adoptableBundleIdentifiers;
-(void)processPurchase:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)startPurchase:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)checkAutomaticDownloadQueue;
-(void)checkPendingQueue;
-(void)checkPreflightForItemIdentifier:(id)arg1 atURL:(id)arg2 withReplyHandler:(/*^block*/id)arg3 ;
@end

