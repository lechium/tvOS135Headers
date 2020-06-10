/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSDefaults : NSObject
+(void)_setValue:(id)arg1 forKey:(id)arg2 ;
+(id)_valueForKey:(id)arg1 ;
+(BOOL)QAMode;
+(BOOL)ignoreServerTrustEvaluation;
+(id)demoAccount;
+(void)setDemoAccount:(id)arg1 ;
+(BOOL)useNewCookieStorage;
+(BOOL)migratedToNewCookieStorage;
+(void)setMigratedToNewCookieStorage:(BOOL)arg1 ;
+(void)setApplePayClassic:(long long)arg1 ;
+(double)_randomDouble;
+(long long)reversePushEnabled;
+(long long)applePayClassic;
+(long long)cardEnrollmentManual;
+(long long)cardEnrollmentUpsell;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(id)defaultPaymentPassIdentifier;
+(void)setDefaultPaymentPassIdentifier:(id)arg1 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(void)_setInteger:(long long)arg1 forKey:(id)arg2 ;
+(long long)pushEnvironment;
+(void)setPushEnvironment:(long long)arg1 ;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 domain:(CFStringRef)arg3 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(CFStringRef)arg3 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(void)_setValue:(id)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(id)_valueForKey:(id)arg1 domain:(CFStringRef)arg2 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
+(BOOL)allowDuplicateAccounts;
+(void)setDidRetrieveDeviceOffers:(BOOL)arg1 ;
+(BOOL)showSandboxAccountUI;
+(void)setShowSandboxAccountUI:(BOOL)arg1 ;
+(BOOL)alwaysSendCacheBuster;
+(void)setIncludeFullRequestInHARLogging:(BOOL)arg1 ;
+(void)setIncludeFullResponseInHARLogging:(BOOL)arg1 ;
+(BOOL)disablePrivacyAcknowledgement;
+(id)primaryBiometricACLVersion;
+(id)extendedBiometricACLVersion;
+(id)storefrontSuffixes;
+(id)bagOverrides;
+(void)setStorefrontSuffixes:(id)arg1 ;
+(id)bagURLCookies;
+(void)setBagURLCookies:(id)arg1 ;
+(long long)deviceBiometricsState;
+(void)setDeviceBiometricsState:(long long)arg1 ;
+(BOOL)shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3 ;
+(long long)cardEnrollmentSilent;
+(BOOL)allowUpsellEnrollmentForAppliedAccounts;
+(BOOL)alwaysSendGUID;
+(id)authenticationStarted;
+(long long)cardEnrollmentAutomatic;
+(id)deviceOfferEligibility;
+(id)deviceOffersSerialNumber;
+(BOOL)didRetrieveDeviceOffers;
+(BOOL)didRetrieveDeviceOffersEligibility;
+(BOOL)didRetrieveTVOffers;
+(BOOL)disableHARLogging;
+(id)dynamicURLs;
+(BOOL)enableCameraRedeem;
+(BOOL)enableFullDeviceOffersRetrieval;
+(BOOL)enablePurchaseQueue;
+(BOOL)enableRemoteSecuritySigning;
+(long long)forceLoadUrlMetrics;
+(BOOL)includeFullRequestInHARLogging;
+(BOOL)includeFullResponseInHARLogging;
+(id)mediaTokenOverride;
+(id)mescalCertExpiration;
+(id)metricsCanaryIdentifier;
+(id)metricsTimingWindowStartTime;
+(BOOL)migratedDeviceOffers;
+(id)multiUserContainerID;
+(id)multiUserSilentPreferredFailureTimes;
+(BOOL)perfomedDeviceOfferSetup;
+(id)sharedDatabaseChangeToken;
+(BOOL)showSpyglassPurchases;
+(BOOL)useNewAccountStore;
+(void)setAllowDuplicateAccounts:(BOOL)arg1 ;
+(void)setAllowUpsellEnrollmentForAppliedAccounts:(BOOL)arg1 ;
+(void)setAlwaysSendCacheBuster:(BOOL)arg1 ;
+(void)setAlwaysSendGUID:(BOOL)arg1 ;
+(void)setAuthenticationStarted:(id)arg1 ;
+(void)setBagOverrides:(id)arg1 ;
+(void)setCardEnrollmentAutomatic:(long long)arg1 ;
+(void)setCardEnrollmentManual:(long long)arg1 ;
+(void)setCardEnrollmentSilent:(long long)arg1 ;
+(void)setCardEnrollmentUpsell:(long long)arg1 ;
+(void)setDeviceOfferEligibility:(id)arg1 ;
+(void)setDidRetrieveDeviceOffersEligibility:(BOOL)arg1 ;
+(void)setDidRetrieveTVOffers:(BOOL)arg1 ;
+(void)setDisableHARLogging:(BOOL)arg1 ;
+(void)setDisablePrivacyAcknowledgement:(BOOL)arg1 ;
+(void)setDynamicURLs:(id)arg1 ;
+(void)setEnableCameraRedeem:(BOOL)arg1 ;
+(void)setEnableFullDeviceOffersRetrieval:(BOOL)arg1 ;
+(void)setEnablePurchaseQueue:(BOOL)arg1 ;
+(void)setEnableRemoteSecuritySigning:(BOOL)arg1 ;
+(void)setForceLoadUrlMetrics:(long long)arg1 ;
+(void)setIgnoreServerTrustEvaluation:(BOOL)arg1 ;
+(void)setMediaTokenOverride:(id)arg1 ;
+(void)setMescalCertExpiration:(id)arg1 ;
+(void)setMetricsCanaryIdentifier:(id)arg1 ;
+(void)setMetricsTimingWindowStartTime:(id)arg1 ;
+(void)setMigratedDeviceOffers:(BOOL)arg1 ;
+(void)setMultiUserSilentPreferredFailureTimes:(id)arg1 ;
+(void)setPerfomedDeviceOfferSetup:(BOOL)arg1 ;
+(void)setQAMode:(BOOL)arg1 ;
+(void)setReversePushEnabled:(long long)arg1 ;
+(void)setSharedDatabaseChangeToken:(id)arg1 ;
+(void)cleanupSampleSessions;
+(BOOL)shouldSampleWithPercentageValue:(id)arg1 sessionDurationValue:(id)arg2 identifier:(id)arg3 ;
+(void)syncWithBlock:(/*^block*/id)arg1 ;
+(BOOL)ss_ignoreServerTrustEvaluation;
+(void)setExtendedBiometricACLVersion:(id)arg1 ;
+(void)setPrimaryBiometricACLVersion:(id)arg1 ;
@end
