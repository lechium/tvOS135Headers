/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBAssertionManaging, RBEntitlementManaging, RBProcessManaging, RBProcessMonitoring, RBStateCaptureManaging;
@class RBProcess;

@interface RBConnectionContext : NSObject {

	id<RBAssertionManaging> _assertionManager;
	id<RBEntitlementManaging> _entitlementManager;
	id<RBProcessManaging> _processManager;
	id<RBProcessMonitoring> _processMonitor;
	id<RBStateCaptureManaging> _stateCaptureManager;
	RBProcess* _process;

}

@property (nonatomic,readonly) id<RBAssertionManaging> assertionManager;                    //@synthesize assertionManager=_assertionManager - In the implementation block
@property (nonatomic,readonly) id<RBEntitlementManaging> entitlementManager;                //@synthesize entitlementManager=_entitlementManager - In the implementation block
@property (nonatomic,readonly) id<RBProcessManaging> processManager;                        //@synthesize processManager=_processManager - In the implementation block
@property (nonatomic,readonly) id<RBProcessMonitoring> processMonitor;                      //@synthesize processMonitor=_processMonitor - In the implementation block
@property (nonatomic,readonly) id<RBStateCaptureManaging> stateCaptureManager;              //@synthesize stateCaptureManager=_stateCaptureManager - In the implementation block
@property (nonatomic,readonly) RBProcess * process;                                         //@synthesize process=_process - In the implementation block
-(id<RBProcessManaging>)processManager;
-(RBProcess *)process;
-(id<RBEntitlementManaging>)entitlementManager;
-(id<RBAssertionManaging>)assertionManager;
-(id<RBProcessMonitoring>)processMonitor;
-(id<RBStateCaptureManaging>)stateCaptureManager;
-(id)initWithAssertionManager:(id)arg1 entitlementManager:(id)arg2 processManager:(id)arg3 processMonitor:(id)arg4 stateCaptureManager:(id)arg5 process:(id)arg6 ;
@end

