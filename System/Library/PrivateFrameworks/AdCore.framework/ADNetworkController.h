/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AdCore/AdCore-Structs.h>
@class NSTimer, NSObject;

@interface ADNetworkController : NSObject {

	SCDynamicStoreRef _store;
	NSTimer* _notificationTimer;
	int _networkType;
	SCNetworkReachabilityRef _reachability;
	unsigned _reachabilityFlags;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _canReachTheNetwork;
	BOOL _isUpdating;

}

@property (assign) BOOL canReachTheNetwork;              //@synthesize canReachTheNetwork=_canReachTheNetwork - In the implementation block
@property (assign) BOOL isUpdating;                      //@synthesize isUpdating=_isUpdating - In the implementation block
+(id)sharedNetworkController;
-(void)start;
-(int)networkType;
-(BOOL)isUpdating;
-(void)setIsUpdating:(BOOL)arg1 ;
-(BOOL)canReachTheNetwork;
-(void)setCanReachTheNetwork:(BOOL)arg1 ;
-(void)_checkForNetworkAndNotify;
-(id)getDataContext:(id)arg1 ;
-(int)dataIndicatorToConnection:(int)arg1 ;
-(int)cellNetworkType;
-(void)_checkForNetwork;
-(void)_updateStatus:(BOOL)arg1 ;
@end

