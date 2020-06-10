/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AuthenticationInProgress, NSMutableArray;

@interface AuthenticationManager : NSObject {

	AuthenticationInProgress* _runningAuthentication;
	/*^block*/id _completionHandler;
	NSMutableArray* _idleBlocks;
	AuthenticationInProgress* _pendingAuthentication;

}

@property (nonatomic,readonly) AuthenticationInProgress * pendingAuthentication;              //@synthesize pendingAuthentication=_pendingAuthentication - In the implementation block
@property (nonatomic,readonly) AuthenticationInProgress * runningAuthentication;              //@synthesize runningAuthentication=_runningAuthentication - In the implementation block
+(id)sharedInstance;
-(id)init;
-(long long)_priorityForPolicy:(long long)arg1 ;
-(BOOL)canStartAuthenticationWithPolicy:(long long)arg1 ;
-(void)_runAuthentication:(id)arg1 ;
-(void)_runIdleBlocks;
-(void)_runIdleBlocksNow;
-(id)runningMechanism;
-(void)authenticateForPolicy:(long long)arg1 constraintData:(id)arg2 internalInfo:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 mechanism:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)cancelWithError:(id)arg1 originatorId:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)runWhenIdle:(/*^block*/id)arg1 ;
-(AuthenticationInProgress *)pendingAuthentication;
-(AuthenticationInProgress *)runningAuthentication;
@end

