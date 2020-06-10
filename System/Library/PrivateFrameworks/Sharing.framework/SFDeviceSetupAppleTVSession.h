/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, SFSession, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, TRSession, NSMutableArray, TROperationQueue, NSSet, TVLAudioLatencyEstimator, NSObject, SFDevice, UIViewController;

@interface SFDeviceSetupAppleTVSession : NSObject {

	BOOL _activateCalled;
	int _finishState;
	BOOL _invalidateCalled;
	int _proxSetupActiveToken;
	BOOL _useSFSession;
	int _preflightWiFiState;
	int _preflightiTunesState;
	int _preflightHomeKitState;
	NSString* _iTunesUserID;
	SFSession* _sfSession;
	int _sfSessionState;
	int _preAuthState;
	int _basicConfigState;
	BOOL _iCloudAccountMatches;
	int _pairSetupState;
	double _pairSetupSecs;
	BOOL _cdpEnabled;
	SFDeviceOperationCDPSetup* _cdpSetupOperation;
	double _cdpSetupSecs;
	int _cdpState;
	BOOL _homeiCloudEnabled;
	BOOL _homeKitDoKeyExchange;
	BOOL _homeKitDoFullSetup;
	SFDeviceOperationHomeKitSetup* _homeKitSetupOperation;
	int _homeKitUserInputState;
	int _homeKitSetupState;
	double _homeKitSetupSecs;
	NSString* _homeKitSelectedRoomName;
	int _trSessionState;
	TRSession* _trSession;
	NSMutableArray* _trOperations;
	TROperationQueue* _trOperationQueue;
	int _trSetupConfigurationState;
	unsigned long long _trSetupConfigurationStartTicks;
	double _trSetupConfigurationSecs;
	BOOL _trNeedsNetwork;
	NSSet* _trUnauthServices;
	int _trNetworkState;
	unsigned long long _trNetworkStartTicks;
	double _wifiSetupSecs;
	int _trActivationState;
	unsigned long long _trActivationStartTicks;
	double _trActivationSecs;
	int _trAuthenticationState;
	unsigned long long _trAuthenticationStartTicks;
	double _trAuthenticationSecs;
	BOOL _tvLatencyEnabled;
	TVLAudioLatencyEstimator* _tvLatencyEstimator;
	int _tvLatencySetupState;
	int _trCompletionState;
	unsigned long long _trCompletionStartTicks;
	double _trCompletionSecs;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	unsigned long long _peerFeatureFlags;
	UIViewController* _presentingViewController;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForHomeHandler;
	/*^block*/id _promptForHomeiCloudHandler;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _promptForRoomHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                    //@synthesize peerDevice=_peerDevice - In the implementation block
@property (assign,nonatomic) unsigned long long peerFeatureFlags;                      //@synthesize peerFeatureFlags=_peerFeatureFlags - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForHomeHandler;                                    //@synthesize promptForHomeHandler=_promptForHomeHandler - In the implementation block
@property (nonatomic,copy) id promptForHomeiCloudHandler;                              //@synthesize promptForHomeiCloudHandler=_promptForHomeiCloudHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                     //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id promptForRoomHandler;                                    //@synthesize promptForRoomHandler=_promptForRoomHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_cleanup;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_run;
-(void)pairSetupTryPIN:(id)arg1 ;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(int)_runSFSessionStart;
-(id)promptForHomeHandler;
-(void)setPromptForHomeHandler:(id)arg1 ;
-(id)promptForRoomHandler;
-(void)setPromptForRoomHandler:(id)arg1 ;
-(int)_runTRSessionStart;
-(int)_runTRAuthentication;
-(int)_runCDPSetup;
-(int)_runHomeKitSetup;
-(void)_reportProgress:(unsigned)arg1 info:(id)arg2 ;
-(int)_runFinish:(BOOL)arg1 ;
-(int)_runPreflightWiFi;
-(int)_runPreflightiTunes;
-(int)_runPreflightHomeKit;
-(int)_runPreAuth;
-(int)_runPairSetup;
-(int)_runHomeKitUserInput;
-(int)_runBasicConfig;
-(int)_runTRSetupConfiguration;
-(int)_runTRNetwork;
-(int)_runTRActivation;
-(int)_runTVLatencySetup;
-(int)_runTRCompletion;
-(void)_reportError:(id)arg1 label:(id)arg2 ;
-(void)_homeKitUpdateiCloudSwitchState:(BOOL)arg1 ;
-(void)_runPreAuthRequest;
-(void)_runPreAuthResponse:(id)arg1 error:(id)arg2 ;
-(void)_runBasicConfigRequest;
-(void)_runBasicConfigResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)_verifyiCloudMatch:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)_runTVLatencySetupRequest;
-(void)_runTVLatencySetupEstimate;
-(void)_runTVLatencySetupProgressEvent:(unsigned long long)arg1 info:(id)arg2 ;
-(void)_runTVLatencySetupEnded:(int)arg1 ;
-(void)homeiCloudEnable;
-(void)homeKitSelectHome:(id)arg1 ;
-(void)homeKitSelectRoom:(id)arg1 ;
-(unsigned long long)peerFeatureFlags;
-(void)setPeerFeatureFlags:(unsigned long long)arg1 ;
-(id)promptForHomeiCloudHandler;
-(void)setPromptForHomeiCloudHandler:(id)arg1 ;
@end

