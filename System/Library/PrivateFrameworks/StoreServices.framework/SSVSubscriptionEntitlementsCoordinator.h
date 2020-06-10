/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSVSubscriptionEntitlements, SSXPCConnection, NSObject;

@interface SSVSubscriptionEntitlementsCoordinator : NSObject {

	SSVSubscriptionEntitlements* _cachedEntitlements;
	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedCoordinator;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 entitlementsBlock:(/*^block*/id)arg2 ;
-(id)_cachedSubscriptionEntitlements;
-(id)_loadSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 error:(id*)arg2 ;
-(void)_setCachedSubscriptionEntitlements:(id)arg1 ;
-(void)getSubscriptionEntitlements:(/*^block*/id)arg1 ;
@end

