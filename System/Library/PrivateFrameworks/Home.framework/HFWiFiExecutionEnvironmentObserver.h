/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFExecutionEnvironmentObserver.h>

@class HFExecutionEnvironment, HFHomeKitDispatcher, HMHome, NSString;

@interface HFWiFiExecutionEnvironmentObserver : NSObject <HFHomeManagerObserver, HFExecutionEnvironmentObserver> {

	HFExecutionEnvironment* _environment;
	HFHomeKitDispatcher* _dispatcher;
	HMHome* _lastKnownHome;
	unsigned long long _lastKnownRunningState;

}

@property (nonatomic,retain) HMHome * lastKnownHome;                                     //@synthesize lastKnownHome=_lastKnownHome - In the implementation block
@property (assign,nonatomic) unsigned long long lastKnownRunningState;                   //@synthesize lastKnownRunningState=_lastKnownRunningState - In the implementation block
@property (nonatomic,__weak,readonly) HFExecutionEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,__weak,readonly) HFHomeKitDispatcher * dispatcher;                  //@synthesize dispatcher=_dispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(HFExecutionEnvironment *)environment;
-(void)_updateState;
-(HFHomeKitDispatcher *)dispatcher;
-(HMHome *)lastKnownHome;
-(unsigned long long)lastKnownRunningState;
-(void)setLastKnownHome:(HMHome *)arg1 ;
-(void)setLastKnownRunningState:(unsigned long long)arg1 ;
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1 ;
-(void)executionEnvironmentDidBecomeActive:(id)arg1 ;
-(void)executionEnvironmentDidEnterBackground:(id)arg1 ;
-(id)initWithExecutionEnvironment:(id)arg1 dispatcher:(id)arg2 ;
@end

