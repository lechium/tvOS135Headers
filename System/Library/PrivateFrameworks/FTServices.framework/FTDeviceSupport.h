/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientPNRDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@class NSString, CoreTelephonyClient, FTSelectedPNRSubscription, NSDictionary;

@interface FTDeviceSupport : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientSuppServicesDelegate> {

	NSString* _number;
	BOOL _blockPost;
	BOOL _supportsFrontCamera;
	BOOL _supportsBackCamera;
	BOOL _supportsiMessage;
	BOOL _supportsSMS;
	BOOL _supportsMMS;
	BOOL _mmsConfigured;
	long long _supportsApplePayState;
	long long _supportsKeySharingState;
	BOOL _supportsHandoff;
	BOOL _supportsTethering;
	BOOL _supportsFT;
	BOOL _supportsFTA;
	BOOL _supportsFTMW;
	BOOL _supportsWiFi;
	BOOL _supportsWLAN;
	BOOL _supportsNonWiFiFaceTime;
	BOOL _supportsCellularData;
	BOOL _simBecameNotReady;
	long long _simInserted;
	long long _isPNRSupportedCachedValue;
	BOOL _faceTimeBlocked;
	BOOL _iMessageBlocked;
	BOOL _accountModificationRestricted;
	BOOL _isGreenTea;
	long long _performanceClass;
	CoreTelephonyClient* _coreTelephonyClient;
	FTSelectedPNRSubscription* _selectedPNRSubscription;
	BOOL _commCenterDead;

}

@property (nonatomic,readonly) BOOL isTelephonyDevice; 
@property (nonatomic,readonly) BOOL faceTimeAvailable; 
@property (nonatomic,readonly) BOOL faceTimeBlocked; 
@property (nonatomic,readonly) BOOL faceTimeSupported; 
@property (nonatomic,readonly) BOOL callingAvailable; 
@property (nonatomic,readonly) BOOL callingBlocked; 
@property (nonatomic,readonly) BOOL callingSupported; 
@property (nonatomic,readonly) BOOL multiwayAvailable; 
@property (nonatomic,readonly) BOOL multiwayBlocked; 
@property (nonatomic,readonly) BOOL multiwaySupported; 
@property (nonatomic,readonly) BOOL nonWifiFaceTimeAvailable; 
@property (nonatomic,readonly) BOOL nonWifiCallingAvailable; 
@property (nonatomic,readonly) BOOL iMessageAvailable; 
@property (nonatomic,readonly) BOOL iMessageBlocked; 
@property (nonatomic,readonly) BOOL iMessageSupported; 
@property (nonatomic,readonly) BOOL identityServicesSupported; 
@property (nonatomic,readonly) BOOL madridAvailable; 
@property (nonatomic,readonly) BOOL madridBlocked; 
@property (nonatomic,readonly) BOOL madridSupported; 
@property (nonatomic,readonly) BOOL conferencingEnabled; 
@property (nonatomic,readonly) BOOL conferencingBlocked; 
@property (nonatomic,readonly) BOOL conferencingAllowed; 
@property (nonatomic,readonly) BOOL commCenterDead;                                        //@synthesize commCenterDead=_commCenterDead - In the implementation block
@property (nonatomic,readonly) BOOL accountModificationRestricted; 
@property (nonatomic,readonly) BOOL isInMultiUserMode; 
@property (nonatomic,readonly) BOOL wantsBreakBeforeMake; 
@property (nonatomic,readonly) BOOL isC2KEquipment; 
@property (nonatomic,readonly) BOOL supportsSimultaneousVoiceAndDataRightNow; 
@property (nonatomic,readonly) BOOL supportsAppleIDIdentification; 
@property (nonatomic,readonly) BOOL supportsApplePay; 
@property (nonatomic,readonly) BOOL supportsHandoff;                                       //@synthesize supportsHandoff=_supportsHandoff - In the implementation block
@property (nonatomic,readonly) BOOL supportsTethering;                                     //@synthesize supportsTethering=_supportsTethering - In the implementation block
@property (nonatomic,readonly) BOOL supportsSMS;                                           //@synthesize supportsSMS=_supportsSMS - In the implementation block
@property (nonatomic,readonly) BOOL supportsMMS;                                           //@synthesize supportsMMS=_supportsMMS - In the implementation block
@property (nonatomic,readonly) BOOL supportsWiFi;                                          //@synthesize supportsWiFi=_supportsWiFi - In the implementation block
@property (nonatomic,readonly) BOOL supportsCellularData;                                  //@synthesize supportsCellularData=_supportsCellularData - In the implementation block
@property (nonatomic,readonly) BOOL supportsWLAN;                                          //@synthesize supportsWLAN=_supportsWLAN - In the implementation block
@property (nonatomic,readonly) BOOL supportsNonWiFiFaceTime;                               //@synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime - In the implementation block
@property (nonatomic,readonly) BOOL supportsNonWiFiCalling; 
@property (nonatomic,readonly) BOOL supportsKeySharing; 
@property (nonatomic,readonly) BOOL mmsConfigured;                                         //@synthesize mmsConfigured=_mmsConfigured - In the implementation block
@property (nonatomic,readonly) BOOL supportsFrontFacingCamera;                             //@synthesize supportsFrontCamera=_supportsFrontCamera - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackFacingCamera;                              //@synthesize supportsBackCamera=_supportsBackCamera - In the implementation block
@property (nonatomic,readonly) BOOL supportsFunCam; 
@property (nonatomic,readonly) BOOL isGreenTea;                                            //@synthesize isGreenTea=_isGreenTea - In the implementation block
@property (nonatomic,readonly) NSDictionary * telephonyCapabilities; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * enclosureColor; 
@property (nonatomic,readonly) NSString * deviceIDPrefix; 
@property (nonatomic,readonly) NSString * deviceTypeIDPrefix; 
@property (nonatomic,readonly) NSString * deviceRegionInfo; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * productOSVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
@property (nonatomic,readonly) long long performanceClass; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) BOOL registrationSupported; 
@property (nonatomic,readonly) BOOL supportsSMSIdentification; 
@property (nonatomic,readonly) BOOL SIMInserted; 
@property (nonatomic,readonly) NSDictionary * CTNetworkInformation; 
@property (nonatomic,readonly) NSString * telephoneNumber; 
@property (nonatomic,readonly) BOOL lowRAMDevice; 
@property (nonatomic,readonly) BOOL slowCPUDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)productName;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(NSString *)deviceName;
-(NSString *)model;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2 ;
-(void)carrierBundleChange:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(void)phoneNumberChanged:(id)arg1 ;
-(long long)deviceType;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isGreenTea;
-(NSString *)enclosureColor;
-(NSString *)deviceColor;
-(NSString *)userAgentString;
-(NSString *)deviceInformationString;
-(BOOL)supportsSMS;
-(BOOL)_legacy_supportsSMSIdentification;
-(BOOL)supportsHandoff;
-(BOOL)supportsTethering;
-(BOOL)supportsApplePay;
-(BOOL)isC2KEquipment;
-(void)_updateCapabilities;
-(void)_updateManagedConfigurationSettings;
-(void)_registerForServiceStatusNotifications;
-(void)_registerForCarrierNotifications;
-(void)_registerForCapabilityNotifications;
-(void)_registerForLockdownNotifications;
-(void)_registerForManagedConfigurationNotifications;
-(void)_unregisterForManagedConfigurationNotifications;
-(void)_unregisterForCommCenterReadyNotifications;
-(void)_unregisterForServiceStatusNotifications;
-(id)_serviceStatus;
-(BOOL)iMessageSupported;
-(long long)performanceClass;
-(void)_registerForCommCenterReadyNotifications;
-(BOOL)madridSupported;
-(BOOL)madridBlocked;
-(BOOL)callingSupported;
-(BOOL)callingBlocked;
-(BOOL)multiwaySupported;
-(BOOL)multiwayBlocked;
-(BOOL)faceTimeBlocked;
-(BOOL)madridAvailable;
-(BOOL)conferencingEnabled;
-(BOOL)conferencingBlocked;
-(BOOL)conferencingAllowed;
-(BOOL)supportsNonWiFiFaceTime;
-(BOOL)faceTimeSupported;
-(BOOL)supportsAppleIDIdentification;
-(NSDictionary *)telephonyCapabilities;
-(void)_initializeSIMInsertedCachedValue;
-(BOOL)supportsSimultaneousVoiceAndDataRightNow;
-(void)_handlePotentialPhoneNumberRegistrationStateChanged;
-(void)_handleCarrierSettingsChanged;
-(void)_handleSIMStatusChangedToStatus:(id)arg1 ;
-(void)_invalidateValuesCachedForSelectedPhoneNumberRegistration;
-(id)registrationState;
-(void)_updateCTNetworkDictionary:(id)arg1 key:(id)arg2 withTelephonyNetworkValue:(id)arg3 telephonyError:(id)arg4 ;
-(BOOL)isTelephonyDevice;
-(void)_lockdownStateChanged:(id)arg1 ;
-(BOOL)nonWifiAvailableForBundleId:(id)arg1 ;
-(BOOL)wifiAllowedForBundleId:(id)arg1 ;
-(BOOL)nonWifiFaceTimeAvailable;
-(int)cpuFamily;
-(long long)memorySize;
-(BOOL)_enoughPowerToSupportEffects;
-(BOOL)lowRAMDevice;
-(void)_commCenterAlive;
-(void)_registerForInternalCoreTelephonyNotifications;
-(BOOL)callingAvailable;
-(BOOL)multiwayAvailable;
-(BOOL)inProcess_isCallingSupported;
-(BOOL)iMessageAvailable;
-(BOOL)iMessageBlocked;
-(BOOL)faceTimeAvailable;
-(BOOL)identityServicesSupported;
-(BOOL)supportsNonWiFiCalling;
-(BOOL)registrationSupported;
-(BOOL)accountModificationRestricted;
-(NSString *)deviceIDPrefix;
-(NSString *)deviceTypeIDPrefix;
-(BOOL)SIMInserted;
-(BOOL)wantsBreakBeforeMake;
-(NSString *)deviceRegionInfo;
-(BOOL)isInDualPhoneIdentityMode;
-(void)noteSelectedPhoneNumberRegistrationSubscriptionDidChange;
-(NSDictionary *)CTNetworkInformation;
-(BOOL)supportsSMSIdentification;
-(NSString *)telephoneNumber;
-(NSString *)productOSVersion;
-(BOOL)nonBluetoothAvailableForBundleId:(id)arg1 ;
-(BOOL)nonWifiCallingAvailable;
-(BOOL)isInMultiUserMode;
-(BOOL)supportsKeySharing;
-(BOOL)slowCPUDevice;
-(BOOL)supportsFunCam;
-(BOOL)supportsFrontFacingCamera;
-(BOOL)supportsBackFacingCamera;
-(BOOL)supportsWLAN;
-(BOOL)supportsWiFi;
-(BOOL)supportsCellularData;
-(BOOL)supportsMMS;
-(BOOL)mmsConfigured;
-(BOOL)commCenterDead;
@end

