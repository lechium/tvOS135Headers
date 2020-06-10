/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRDeviceSetupServerDelegate.h>
#import <TVCoreSettings/TVSWiFiNetworkConnectionOperationDelegate.h>
#import <libobjc.A.dylib/TRNearbyDeviceAdvertiserDelegate.h>

@protocol TVCSTapToSetupManagerDelegate, TVCSTapToSetupActivatorHookDelegate;
@class NSString, TVSWiFiNetworkConnectionOperation, NSOperationQueue, TRDeviceSetupServer, HMDeviceSetupOperationHandler, TRNearbyDeviceAdvertiser, TRSession, SFDeviceSetupAppleTVService, ACAccountStore, TVSiCloudAccountManager;

@interface TVCSTapToSetupManager : NSObject <TRDeviceSetupServerDelegate, TVSWiFiNetworkConnectionOperationDelegate, TRNearbyDeviceAdvertiserDelegate> {

	BOOL _running;
	BOOL _setupInfoTransactionInProgress;
	BOOL _hasICloudAccount;
	BOOL _hasStoreAccount;
	BOOL _hasGameCenterAccount;
	int _setupCompleted;
	id<TVCSTapToSetupManagerDelegate> _userInterfaceDelegate;
	id<TVCSTapToSetupActivatorHookDelegate> _activatorHookDelegate;
	double _startTimeout;
	/*^block*/id _connectionCompletionHandler;
	NSString* _recommendedNetworkSSID;
	NSString* _recommendedNetworkPassword;
	TVSWiFiNetworkConnectionOperation* _connectionOperation;
	NSOperationQueue* _connectionQueue;
	TRDeviceSetupServer* _server;
	HMDeviceSetupOperationHandler* _homeKitSetupHandler;
	TRNearbyDeviceAdvertiser* _advertiser;
	TRSession* _activeSession;
	SFDeviceSetupAppleTVService* _setupService;
	ACAccountStore* _store;
	TVSiCloudAccountManager* _iCloudAccountManager;

}

@property (assign,getter=isRunning,nonatomic) BOOL running;                                                            //@synthesize running=_running - In the implementation block
@property (assign,getter=isSetupInfoTransactionInProgress,nonatomic) BOOL setupInfoTransactionInProgress;              //@synthesize setupInfoTransactionInProgress=_setupInfoTransactionInProgress - In the implementation block
@property (nonatomic,copy) id connectionCompletionHandler;                                                             //@synthesize connectionCompletionHandler=_connectionCompletionHandler - In the implementation block
@property (nonatomic,copy) NSString * recommendedNetworkSSID;                                                          //@synthesize recommendedNetworkSSID=_recommendedNetworkSSID - In the implementation block
@property (nonatomic,copy) NSString * recommendedNetworkPassword;                                                      //@synthesize recommendedNetworkPassword=_recommendedNetworkPassword - In the implementation block
@property (nonatomic,retain) TVSWiFiNetworkConnectionOperation * connectionOperation;                                  //@synthesize connectionOperation=_connectionOperation - In the implementation block
@property (nonatomic,retain) NSOperationQueue * connectionQueue;                                                       //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) TRDeviceSetupServer * server;                                                             //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) HMDeviceSetupOperationHandler * homeKitSetupHandler;                                      //@synthesize homeKitSetupHandler=_homeKitSetupHandler - In the implementation block
@property (nonatomic,retain) TRNearbyDeviceAdvertiser * advertiser;                                                    //@synthesize advertiser=_advertiser - In the implementation block
@property (nonatomic,retain) TRSession * activeSession;                                                                //@synthesize activeSession=_activeSession - In the implementation block
@property (nonatomic,retain) SFDeviceSetupAppleTVService * setupService;                                               //@synthesize setupService=_setupService - In the implementation block
@property (assign,nonatomic) int setupCompleted;                                                                       //@synthesize setupCompleted=_setupCompleted - In the implementation block
@property (nonatomic,retain) ACAccountStore * store;                                                                   //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL hasICloudAccount;                                                                    //@synthesize hasICloudAccount=_hasICloudAccount - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAccount;                                                                     //@synthesize hasStoreAccount=_hasStoreAccount - In the implementation block
@property (assign,nonatomic) BOOL hasGameCenterAccount;                                                                //@synthesize hasGameCenterAccount=_hasGameCenterAccount - In the implementation block
@property (nonatomic,retain) TVSiCloudAccountManager * iCloudAccountManager;                                           //@synthesize iCloudAccountManager=_iCloudAccountManager - In the implementation block
@property (assign,nonatomic,__weak) id<TVCSTapToSetupManagerDelegate> userInterfaceDelegate;                           //@synthesize userInterfaceDelegate=_userInterfaceDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<TVCSTapToSetupActivatorHookDelegate> activatorHookDelegate;                     //@synthesize activatorHookDelegate=_activatorHookDelegate - In the implementation block
@property (assign,nonatomic) double startTimeout;                                                                      //@synthesize startTimeout=_startTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(TRDeviceSetupServer *)server;
-(void)setServer:(TRDeviceSetupServer *)arg1 ;
-(BOOL)isRunning;
-(void)setStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)store;
-(void)setRunning:(BOOL)arg1 ;
-(NSOperationQueue *)connectionQueue;
-(void)setConnectionQueue:(NSOperationQueue *)arg1 ;
-(void)_saveRemoteVerifiedAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleCompletionRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleNetworkRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleActivationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)deviceSetupServerDidPromptToBeginSetup:(id)arg1 ;
-(void)deviceSetupServer:(id)arg1 didFailSetupWithError:(id)arg2 ;
-(void)deviceSetupServer:(id)arg1 didBeginSetupWithDeviceName:(id)arg2 ;
-(id)accountsToAuthenticateForDeviceSetupServer:(id)arg1 ;
-(void)deviceSetupServer:(id)arg1 connectToNetworkWithRecommendedSSID:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deviceSetupServer:(id)arg1 willRequestAuthenticationForAccount:(unsigned long long)arg2 ;
-(id)deviceSetupServer:(id)arg1 localizedAuthenticationMessageForAccount:(unsigned long long)arg2 ;
-(void)deviceSetupServer:(id)arg1 authenticateAccount:(unsigned long long)arg2 withInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deviceSetupServer:(id)arg1 didReceiveSetupInfo:(id)arg2 ;
-(void)deviceSetupServerDidFinishSetup:(id)arg1 ;
-(void)nearbyDeviceAdvertiserDidStartAdvertising:(id)arg1 ;
-(void)nearbyDeviceAdvertiser:(id)arg1 didReceiveConnectionRequestFromDevice:(id)arg2 requestHandler:(/*^block*/id)arg3 ;
-(void)setActiveSession:(TRSession *)arg1 ;
-(TRSession *)activeSession;
-(TRNearbyDeviceAdvertiser *)advertiser;
-(void)setAdvertiser:(TRNearbyDeviceAdvertiser *)arg1 ;
-(void)setConnectionCompletionHandler:(id)arg1 ;
-(id)connectionCompletionHandler;
-(void)updateAdvertisingState:(BOOL)arg1 ;
-(void)_authenticateStoreWithAuthenticationResults:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)operation:(id)arg1 stateDidChange:(unsigned long long)arg2 ;
-(void)operation:(id)arg1 didConnectToNetwork:(id)arg2 ;
-(void)operation:(id)arg1 didFailToFindNetworkWithName:(id)arg2 error:(id)arg3 ;
-(void)operation:(id)arg1 didFailToConnectToNetwork:(id)arg2 error:(id)arg3 ;
-(void)operation:(id)arg1 didRequestPasswordForNetwork:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelConnectionOperation;
-(void)_handleSetupServiceProgressEvent:(unsigned)arg1 info:(id)arg2 ;
-(void)setSetupInfoTransactionInProgress:(BOOL)arg1 ;
-(id<TVCSTapToSetupManagerDelegate>)userInterfaceDelegate;
-(void)setRecommendedNetworkSSID:(NSString *)arg1 ;
-(void)setRecommendedNetworkPassword:(NSString *)arg1 ;
-(void)setConnectionOperation:(TVSWiFiNetworkConnectionOperation *)arg1 ;
-(TVSWiFiNetworkConnectionOperation *)connectionOperation;
-(BOOL)isSetupInfoTransactionInProgress;
-(void)_connectToNetworkWithRecommendedSSID:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_authenticateAccount:(unsigned long long)arg1 withInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_resetSetupInfoTransaction;
-(void)_didFailSetupWithError:(id)arg1 ;
-(void)_didFinishNetworkConnectionAttemptWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(NSString *)recommendedNetworkPassword;
-(void)_authenticateiTunesAccountWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_authenticateiCloudAccountWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_authenticateHomeSharingAccountWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_authenticateGameCenterAccountWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performIDMSAuthenticationWithAccountID:(id)arg1 password:(id)arg2 serviceType:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(TVSiCloudAccountManager *)iCloudAccountManager;
-(void)didFailSetupWithErrorCode:(long long)arg1 ;
-(void)_setupSession:(id)arg1 ;
-(void)_handleCompanionAuthenticateWithRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(HMDeviceSetupOperationHandler *)homeKitSetupHandler;
-(void)_checkTarget:(id)arg1 forSelector:(SEL)arg2 performBlockOnMainThread:(/*^block*/id)arg3 ;
-(void)didCompleteSetup;
-(void)_handleSetupServiceStartSession:(id)arg1 ;
-(void)_completedCompanionAuthenticationRequest:(id)arg1 unauthenticatedAccountServices:(id)arg2 withResponseHandler:(/*^block*/id)arg3 ;
-(long long)_serviceTypeForAccountService:(unsigned long long)arg1 ;
-(void)_authenticateWithAccountServices:(id)arg1 usingAuthenticationResults:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticateAccount:(id)arg1 forServiceType:(long long)arg2 withCompanionDevice:(id)arg3 anisetteDataProvider:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_completedProxyAuthenticationRequest:(id)arg1 unauthenticatedAccountServices:(id)arg2 withResponseHandler:(/*^block*/id)arg3 ;
-(void)_authenticateAccount:(id)arg1 forServiceType:(long long)arg2 withPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_authenticateWithAccountService:(unsigned long long)arg1 usingAuthenticationResults:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticateiCloudWithAuthenticationResults:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_authenticateHomeSharingWithAuthenticationResults:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_authenticateGameCenterWithAuthenticationResults:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_promptForASNSettingWithCompletion:(/*^block*/id)arg1 ;
-(id)_asnPaidSetting;
-(void)_setAsnPaidSetting:(id)arg1 ;
-(void)setUserInterfaceDelegate:(id<TVCSTapToSetupManagerDelegate>)arg1 ;
-(id<TVCSTapToSetupActivatorHookDelegate>)activatorHookDelegate;
-(void)setActivatorHookDelegate:(id<TVCSTapToSetupActivatorHookDelegate>)arg1 ;
-(double)startTimeout;
-(void)setStartTimeout:(double)arg1 ;
-(NSString *)recommendedNetworkSSID;
-(void)setHomeKitSetupHandler:(HMDeviceSetupOperationHandler *)arg1 ;
-(SFDeviceSetupAppleTVService *)setupService;
-(void)setSetupService:(SFDeviceSetupAppleTVService *)arg1 ;
-(int)setupCompleted;
-(void)setSetupCompleted:(int)arg1 ;
-(BOOL)hasICloudAccount;
-(void)setHasICloudAccount:(BOOL)arg1 ;
-(BOOL)hasStoreAccount;
-(void)setHasStoreAccount:(BOOL)arg1 ;
-(BOOL)hasGameCenterAccount;
-(void)setHasGameCenterAccount:(BOOL)arg1 ;
-(void)setICloudAccountManager:(TVSiCloudAccountManager *)arg1 ;
@end

