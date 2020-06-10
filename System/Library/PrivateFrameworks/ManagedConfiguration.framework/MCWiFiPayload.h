/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary, NSNumber, NSArray;

@interface MCWiFiPayload : MCPayload {

	BOOL _isHidden;
	BOOL _captiveBypass;
	BOOL _isWEP;
	BOOL _isWPA;
	BOOL _passwordRequired;
	BOOL _usernameRequired;
	BOOL _autoJoin;
	BOOL _proxyPACFallbackAllowed;
	BOOL _isHotspot;
	BOOL _serviceProviderRoamingEnabled;
	int _proxyType;
	NSString* _ssid;
	NSString* _encryptionType;
	NSDictionary* _eapClientConfig;
	NSDictionary* _qosMarkingConfig;
	NSString* _password;
	NSString* _username;
	NSNumber* _isFirstAutoJoinRestricted;
	NSString* _certificateUUID;
	NSArray* _payloadCertificateAnchorUUID;
	NSString* _proxyServer;
	NSNumber* _proxyServerPort;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	NSString* _proxyPACURLString;
	NSString* _credentialUUID;
	NSNumber* _priority;
	NSString* _domainName;
	NSString* _HESSID;
	NSArray* _roamingConsortiumOIs;
	NSArray* _NAIRealmNames;
	NSArray* _MCCAndMNCs;
	NSString* _displayedOperatorName;
	NSNumber* _isHiddenNum;
	NSNumber* _autoJoinNum;
	NSNumber* _captiveBypassNum;
	NSNumber* _proxyPACFallbackAllowedNum;
	NSNumber* _isHotspotNum;
	NSNumber* _serviceProviderRoamingEnabledNum;

}

@property (nonatomic,retain) NSNumber * isHiddenNum;                                                                 //@synthesize isHiddenNum=_isHiddenNum - In the implementation block
@property (nonatomic,retain) NSNumber * autoJoinNum;                                                                 //@synthesize autoJoinNum=_autoJoinNum - In the implementation block
@property (nonatomic,retain) NSNumber * captiveBypassNum;                                                            //@synthesize captiveBypassNum=_captiveBypassNum - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPACFallbackAllowedNum;                                                  //@synthesize proxyPACFallbackAllowedNum=_proxyPACFallbackAllowedNum - In the implementation block
@property (nonatomic,retain) NSNumber * isHotspotNum;                                                                //@synthesize isHotspotNum=_isHotspotNum - In the implementation block
@property (nonatomic,retain) NSNumber * serviceProviderRoamingEnabledNum;                                            //@synthesize serviceProviderRoamingEnabledNum=_serviceProviderRoamingEnabledNum - In the implementation block
@property (nonatomic,retain) NSString * ssid;                                                                        //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                                                                          //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL captiveBypass;                                                                     //@synthesize captiveBypass=_captiveBypass - In the implementation block
@property (nonatomic,retain) NSString * encryptionType;                                                              //@synthesize encryptionType=_encryptionType - In the implementation block
@property (assign,nonatomic) BOOL isWEP;                                                                             //@synthesize isWEP=_isWEP - In the implementation block
@property (assign,nonatomic) BOOL isWPA;                                                                             //@synthesize isWPA=_isWPA - In the implementation block
@property (nonatomic,retain) NSDictionary * eapClientConfig;                                                         //@synthesize eapClientConfig=_eapClientConfig - In the implementation block
@property (nonatomic,retain) NSDictionary * qosMarkingConfig;                                                        //@synthesize qosMarkingConfig=_qosMarkingConfig - In the implementation block
@property (assign,nonatomic) BOOL passwordRequired;                                                                  //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (nonatomic,retain) NSString * password;                                                                    //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL usernameRequired;                                                                  //@synthesize usernameRequired=_usernameRequired - In the implementation block
@property (nonatomic,retain) NSString * username;                                                                    //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL autoJoin;                                                                          //@synthesize autoJoin=_autoJoin - In the implementation block
@property (assign,nonatomic) NSNumber * isFirstAutoJoinRestricted;                                                   //@synthesize isFirstAutoJoinRestricted=_isFirstAutoJoinRestricted - In the implementation block
@property (nonatomic,retain) NSString * certificateUUID;                                                             //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (nonatomic,retain) NSArray * payloadCertificateAnchorUUID;                                                 //@synthesize payloadCertificateAnchorUUID=_payloadCertificateAnchorUUID - In the implementation block
@property (assign,nonatomic) int proxyType;                                                                          //@synthesize proxyType=_proxyType - In the implementation block
@property (nonatomic,retain) NSString * proxyServer;                                                                 //@synthesize proxyServer=_proxyServer - In the implementation block
@property (nonatomic,retain) NSNumber * proxyServerPort;                                                             //@synthesize proxyServerPort=_proxyServerPort - In the implementation block
@property (nonatomic,retain) NSString * proxyUsername;                                                               //@synthesize proxyUsername=_proxyUsername - In the implementation block
@property (nonatomic,retain) NSString * proxyPassword;                                                               //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,retain) NSString * proxyPACURLString;                                                           //@synthesize proxyPACURLString=_proxyPACURLString - In the implementation block
@property (assign,nonatomic) BOOL proxyPACFallbackAllowed;                                                           //@synthesize proxyPACFallbackAllowed=_proxyPACFallbackAllowed - In the implementation block
@property (nonatomic,retain) NSString * credentialUUID;                                                              //@synthesize credentialUUID=_credentialUUID - In the implementation block
@property (assign,nonatomic) BOOL isHotspot;                                                                         //@synthesize isHotspot=_isHotspot - In the implementation block
@property (nonatomic,retain) NSNumber * priority;                                                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSString * domainName;                                                                  //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,retain) NSString * HESSID;                                                                      //@synthesize HESSID=_HESSID - In the implementation block
@property (assign,getter=isServiceProviderRoamingEnabled,nonatomic) BOOL serviceProviderRoamingEnabled;              //@synthesize serviceProviderRoamingEnabled=_serviceProviderRoamingEnabled - In the implementation block
@property (nonatomic,retain) NSArray * roamingConsortiumOIs;                                                         //@synthesize roamingConsortiumOIs=_roamingConsortiumOIs - In the implementation block
@property (nonatomic,retain) NSArray * NAIRealmNames;                                                                //@synthesize NAIRealmNames=_NAIRealmNames - In the implementation block
@property (nonatomic,retain) NSArray * MCCAndMNCs;                                                                   //@synthesize MCCAndMNCs=_MCCAndMNCs - In the implementation block
@property (nonatomic,retain) NSString * displayedOperatorName;                                                       //@synthesize displayedOperatorName=_displayedOperatorName - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(NSString *)password;
-(int)proxyType;
-(NSNumber *)priority;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setPriority:(NSNumber *)arg1 ;
-(BOOL)isHidden;
-(void)setIsHidden:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(id)installationWarnings;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)proxyServer;
-(void)setProxyServer:(NSString *)arg1 ;
-(BOOL)_eapConfigIsValid:(id)arg1 error:(id*)arg2 ;
-(id)_eapUsernameFromConfig:(id)arg1 isRequired:(BOOL*)arg2 ;
-(id)_eapPasswordFromConfig:(id)arg1 isRequired:(BOOL*)arg2 ;
-(void)setEapClientConfig:(NSDictionary *)arg1 ;
-(void)setProxyType:(int)arg1 ;
-(NSString *)ssid;
-(BOOL)isHotspot;
-(NSString *)domainName;
-(NSArray *)roamingConsortiumOIs;
-(void)setRoamingConsortiumOIs:(NSArray *)arg1 ;
-(NSArray *)NAIRealmNames;
-(void)setNAIRealmNames:(NSArray *)arg1 ;
-(NSArray *)MCCAndMNCs;
-(void)setMCCAndMNCs:(NSArray *)arg1 ;
-(BOOL)_qosMarkingConfigIsValid:(id)arg1 error:(id*)arg2 ;
-(void)setQosMarkingConfig:(NSDictionary *)arg1 ;
-(NSString *)HESSID;
-(BOOL)isServiceProviderRoamingEnabled;
-(NSString *)displayedOperatorName;
-(NSDictionary *)qosMarkingConfig;
-(NSString *)encryptionType;
-(id)_localizedEncryptionTypeString;
-(NSNumber *)isHiddenNum;
-(NSNumber *)autoJoinNum;
-(BOOL)captiveBypass;
-(NSDictionary *)eapClientConfig;
-(NSNumber *)proxyServerPort;
-(NSString *)proxyUsername;
-(NSString *)proxyPassword;
-(NSString *)proxyPACURLString;
-(BOOL)proxyPACFallbackAllowed;
-(NSNumber *)isFirstAutoJoinRestricted;
-(BOOL)usernameRequired;
-(BOOL)passwordRequired;
-(BOOL)_isEAPSIMConfig:(id)arg1 ;
-(id)userInputFields;
-(void)setSsid:(NSString *)arg1 ;
-(void)setCaptiveBypass:(BOOL)arg1 ;
-(void)setEncryptionType:(NSString *)arg1 ;
-(BOOL)isWEP;
-(void)setIsWEP:(BOOL)arg1 ;
-(BOOL)isWPA;
-(void)setIsWPA:(BOOL)arg1 ;
-(void)setPasswordRequired:(BOOL)arg1 ;
-(void)setUsernameRequired:(BOOL)arg1 ;
-(BOOL)autoJoin;
-(void)setAutoJoin:(BOOL)arg1 ;
-(void)setIsFirstAutoJoinRestricted:(NSNumber *)arg1 ;
-(NSString *)certificateUUID;
-(void)setCertificateUUID:(NSString *)arg1 ;
-(NSArray *)payloadCertificateAnchorUUID;
-(void)setPayloadCertificateAnchorUUID:(NSArray *)arg1 ;
-(void)setProxyServerPort:(NSNumber *)arg1 ;
-(void)setProxyUsername:(NSString *)arg1 ;
-(void)setProxyPassword:(NSString *)arg1 ;
-(void)setProxyPACURLString:(NSString *)arg1 ;
-(void)setProxyPACFallbackAllowed:(BOOL)arg1 ;
-(NSString *)credentialUUID;
-(void)setCredentialUUID:(NSString *)arg1 ;
-(void)setIsHotspot:(BOOL)arg1 ;
-(void)setDomainName:(NSString *)arg1 ;
-(void)setHESSID:(NSString *)arg1 ;
-(void)setServiceProviderRoamingEnabled:(BOOL)arg1 ;
-(void)setDisplayedOperatorName:(NSString *)arg1 ;
-(void)setIsHiddenNum:(NSNumber *)arg1 ;
-(void)setAutoJoinNum:(NSNumber *)arg1 ;
-(NSNumber *)captiveBypassNum;
-(void)setCaptiveBypassNum:(NSNumber *)arg1 ;
-(NSNumber *)proxyPACFallbackAllowedNum;
-(void)setProxyPACFallbackAllowedNum:(NSNumber *)arg1 ;
-(NSNumber *)isHotspotNum;
-(void)setIsHotspotNum:(NSNumber *)arg1 ;
-(NSNumber *)serviceProviderRoamingEnabledNum;
-(void)setServiceProviderRoamingEnabledNum:(NSNumber *)arg1 ;
@end

