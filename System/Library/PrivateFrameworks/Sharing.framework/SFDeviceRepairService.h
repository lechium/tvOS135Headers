/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class SFService, SFSession, ACAccountStore, SFDeviceOperationHandlerCDPSetup, HMDeviceSetupOperationHandler, SFDeviceOperationHandlerWiFiSetup, NSObject;

@interface SFDeviceRepairService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned _invalidateFlags;
	SFService* _sfService;
	SFSession* _sfSession;
	WiFiManagerClientRef _wifiManager;
	ACAccountStore* _accountStore;
	BOOL _prefCDPEnabled;
	SFDeviceOperationHandlerCDPSetup* _cdpSetupHandler;
	HMDeviceSetupOperationHandler* _homeKitSetupHandler;
	SFDeviceOperationHandlerWiFiSetup* _wifiSetupHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned long long _problemFlags;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned long long problemFlags;                         //@synthesize problemFlags=_problemFlags - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateWithFlags:(unsigned)arg1 ;
-(unsigned long long)problemFlags;
-(void)_sfServiceStart;
-(void)setProblemFlags:(unsigned long long)arg1 ;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleGetProblemsRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleFinishRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleTRCompanionAuthenticationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleTRProxyDeviceRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleTRProxyAuthenticationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(long long)_nextServiceTypeForTRAccountServices:(id)arg1 ;
-(void)_authenticateWithServiceTypes:(id)arg1 authResults:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 companionDevice:(id)arg3 anisetteDataProvider:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_saveRemoteVerifiedAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_authenticateAccount:(id)arg1 serviceType:(long long)arg2 password:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_nextTRServiceTypeForTRAccountServices:(id)arg1 ;
-(void)_authenticateWithServiceType:(unsigned long long)arg1 authResults:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticateiCloudWithAuthResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_authenticateiTunesWithAuthResults:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

