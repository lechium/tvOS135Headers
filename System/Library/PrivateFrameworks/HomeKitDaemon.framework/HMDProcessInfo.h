/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class HMDApplicationInfo, HMFLocationAuthorization, NSArray, NSObject, NSHashTable, NSString;

@interface HMDProcessInfo : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	BOOL _viewService;
	int _pid;
	unsigned long long _state;
	HMDApplicationInfo* _appInfo;
	HMFLocationAuthorization* _locationAuthorization;
	NSArray* _runningReasons;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSHashTable* _connectionProxies;

}

@property (nonatomic,readonly) int pid;                                                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSArray * runningReasons;                                                                   //@synthesize runningReasons=_runningReasons - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> xpcQueue;                                                    //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * connectionProxies;                                                          //@synthesize connectionProxies=_connectionProxies - In the implementation block
@property (getter=isViewService,nonatomic,readonly) BOOL viewService;                                                    //@synthesize viewService=_viewService - In the implementation block
@property (getter=isForegrounded,nonatomic,readonly) BOOL foreground; 
@property (getter=isBackgroundUpgradedToForeground,nonatomic,readonly) BOOL backgroundUpgradedToForeground; 
@property (getter=isBackgrounded,nonatomic,readonly) BOOL background; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (getter=isTerminated,nonatomic,readonly) BOOL terminated; 
@property (nonatomic,__weak,readonly) HMDApplicationInfo * appInfo;                                                      //@synthesize appInfo=_appInfo - In the implementation block
@property (readonly) HMFLocationAuthorization * locationAuthorization;                                                   //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)description;
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isSuspended;
-(int)pid;
-(void)activate;
-(void)deactivate;
-(BOOL)isBackgrounded;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(HMDApplicationInfo *)appInfo;
-(id)logIdentifier;
-(HMFLocationAuthorization *)locationAuthorization;
-(BOOL)isForegrounded;
-(void)initiateRefresh;
-(NSHashTable *)connectionProxies;
-(BOOL)isTerminated;
-(void)setRunningReasons:(NSArray *)arg1 ;
-(id)_activeRequestIdentifiers;
-(NSArray *)runningReasons;
-(BOOL)isBackgroundUpgradedToForeground;
-(id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3 xpcQueue:(id)arg4 ;
-(void)addConnectionProxy:(id)arg1 ;
-(void)removeConnectionProxy:(id)arg1 ;
-(unsigned long long)proxyCount;
-(BOOL)isViewService;
@end

