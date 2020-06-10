/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CacheDelete/CacheDeleteListener.h>
#import <CacheDelete/CacheDeleteServiceProtocol.h>

@protocol OS_dispatch_queue;
@class CacheDeleteServiceInfo, NSXPCListenerEndpoint, NSObject;

@interface CacheDeleteServiceListener : CacheDeleteListener <CacheDeleteServiceProtocol> {

	BOOL _legacyCallbacks;
	BOOL _anonymous;
	CacheDeleteServiceInfo* _serviceInfo;
	NSXPCListenerEndpoint* _endpoint;
	/*^block*/id _purgeable;
	/*^block*/id _purge;
	/*^block*/id _periodic;
	/*^block*/id _cancel;
	/*^block*/id _notify;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id purgeable;                                          //@synthesize purgeable=_purgeable - In the implementation block
@property (nonatomic,copy) id purge;                                              //@synthesize purge=_purge - In the implementation block
@property (nonatomic,copy) id periodic;                                           //@synthesize periodic=_periodic - In the implementation block
@property (nonatomic,copy) id cancel;                                             //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,copy) id notify;                                             //@synthesize notify=_notify - In the implementation block
@property (nonatomic,copy) id callback;                                           //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (readonly) BOOL legacyCallbacks;                                        //@synthesize legacyCallbacks=_legacyCallbacks - In the implementation block
@property (readonly) BOOL anonymous;                                              //@synthesize anonymous=_anonymous - In the implementation block
@property (nonatomic,readonly) CacheDeleteServiceInfo * serviceInfo;              //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (readonly) NSXPCListenerEndpoint * endpoint;                            //@synthesize endpoint=_endpoint - In the implementation block
+(id)cacheDeleteServiceListener:(id)arg1 options:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)cancel;
-(NSXPCListenerEndpoint *)endpoint;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)purgeable;
-(id)purge;
-(BOOL)anonymous;
-(void)setPurgeable:(/*^block*/id)arg1 purge:(/*^block*/id)arg2 cancel:(/*^block*/id)arg3 periodic:(/*^block*/id)arg4 notify:(/*^block*/id)arg5 callback:(/*^block*/id)arg6 entitlements:(id)arg7 ;
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)serviceCancelPurge:(/*^block*/id)arg1 ;
-(void)servicePing:(/*^block*/id)arg1 ;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(void)setPurgeable:(id)arg1 ;
-(void)setPurge:(id)arg1 ;
-(void)setCancel:(id)arg1 ;
-(void)setPeriodic:(id)arg1 ;
-(void)setNotify:(id)arg1 ;
-(BOOL)legacyCallbacks;
-(id)periodic;
-(id)notify;
-(void)setNotifyCallback:(/*^block*/id)arg1 ;
-(CacheDeleteServiceInfo *)serviceInfo;
@end

