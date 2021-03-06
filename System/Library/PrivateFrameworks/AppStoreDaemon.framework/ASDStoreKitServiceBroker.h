/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface ASDStoreKitServiceBroker : NSObject {

	NSLock* _serviceConnectionLock;
	NSXPCConnection* _serviceConnection;

}
+(id)defaultBroker;
+(id)_storeKitServiceInterface;
+(id)_storeKitClientInterface;
-(id)init;
-(id)_serviceConnection;
-(id)storeKitServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)storeKitSynchronousServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)storeKitService;
-(void)_serviceConnectionInvalidated;
-(id)storeKitSynchronousService;
@end

