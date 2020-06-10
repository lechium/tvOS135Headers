/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDPowerManager : HMFObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _networkInterfaceActive;
	BOOL _networkAccessRequired;
	unsigned _powerAssertion;
	SCDynamicStoreRef _scStore;
	void* _scContext;
	BOOL _started;

}

@property (assign,getter=isNetworkAccessRequired,nonatomic) BOOL networkAccessRequired;              //@synthesize networkAccessRequired=_networkAccessRequired - In the implementation block
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)_update;
-(int)_ensureNetworkInterfaceMonitorStarted;
-(void)_ensureNetworkInterfaceMonitorStopped;
-(void)setNetworkAccessRequired:(BOOL)arg1 ;
-(BOOL)isNetworkAccessRequired;
@end
