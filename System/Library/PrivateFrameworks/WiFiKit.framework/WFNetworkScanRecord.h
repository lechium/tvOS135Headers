/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/WFNetworkListRecord.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface WFNetworkScanRecord : NSObject <WFNetworkListRecord, NSCopying> {

	BOOL _enterprise;
	BOOL _hotspot20;
	BOOL _unconfiguredAccessory;
	BOOL _carPlay;
	BOOL _hidden;
	BOOL _adhoc;
	BOOL _airPortBaseStation;
	BOOL _requiresPassword;
	BOOL _requiresUsername;
	BOOL _secure;
	BOOL _iOSHotspot;
	BOOL _prominentDisplay;
	BOOL _unconfiguredAccessorySTAOnly;
	BOOL _instantHotspot;
	BOOL _hotspot20Provisioned;
	BOOL _ambiguousSSID;
	BOOL _known;
	BOOL _popular;
	float _scaledRSSI;
	unsigned _phyMode;
	NSString* _ssid;
	NSString* _bssid;
	long long _rssi;
	long long _securityMode;
	long long _securityModeExt;
	NSNumber* _channel;
	NSNumber* _channelWidth;
	NSNumber* _apVal;
	long long _unconfiguredAccessoryType;
	NSString* _unconfiguredDeviceName;
	long long _carPlayType;
	NSDictionary* _eapProfile;
	NSDictionary* _attributes;
	NSString* _hotspot20Name;
	NSString* _hotspotPluginLabel;
	NSString* _unconfiguredDeviceID;
	NSString* _crowdsourceDescription;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isUnconfiguredAccessory,nonatomic) BOOL unconfiguredAccessory;                            //@synthesize unconfiguredAccessory=_unconfiguredAccessory - In the implementation block
@property (assign,getter=isUnconfiguredAccessorySTAOnly,nonatomic) BOOL unconfiguredAccessorySTAOnly;              //@synthesize unconfiguredAccessorySTAOnly=_unconfiguredAccessorySTAOnly - In the implementation block
@property (assign,nonatomic) long long unconfiguredAccessoryType;                                                  //@synthesize unconfiguredAccessoryType=_unconfiguredAccessoryType - In the implementation block
@property (nonatomic,copy) NSString * unconfiguredDeviceName;                                                      //@synthesize unconfiguredDeviceName=_unconfiguredDeviceName - In the implementation block
@property (assign,getter=isAdhoc,nonatomic) BOOL adhoc;                                                            //@synthesize adhoc=_adhoc - In the implementation block
@property (assign,nonatomic) BOOL requiresUsername;                                                                //@synthesize requiresUsername=_requiresUsername - In the implementation block
@property (assign,nonatomic) BOOL requiresPassword;                                                                //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                                                          //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) BOOL iOSHotspot;                                                                      //@synthesize iOSHotspot=_iOSHotspot - In the implementation block
@property (assign,nonatomic) BOOL instantHotspot;                                                                  //@synthesize instantHotspot=_instantHotspot - In the implementation block
@property (assign,getter=isHotspot20,nonatomic) BOOL hotspot20;                                                    //@synthesize hotspot20=_hotspot20 - In the implementation block
@property (assign,getter=isCarPlay,nonatomic) BOOL carPlay;                                                        //@synthesize carPlay=_carPlay - In the implementation block
@property (assign,getter=isHotspot20Provisioned,nonatomic) BOOL hotspot20Provisioned;                              //@synthesize hotspot20Provisioned=_hotspot20Provisioned - In the implementation block
@property (assign,getter=isEnterprise,nonatomic) BOOL enterprise;                                                  //@synthesize enterprise=_enterprise - In the implementation block
@property (assign,getter=isAmbiguousSSID,nonatomic) BOOL ambiguousSSID;                                            //@synthesize ambiguousSSID=_ambiguousSSID - In the implementation block
@property (retain) NSDictionary * attributes;                                                                      //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * ssid;                                                                        //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long securityMode;                                                               //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,retain) NSDictionary * eapProfile;                                                            //@synthesize eapProfile=_eapProfile - In the implementation block
@property (assign,nonatomic) unsigned phyMode;                                                                     //@synthesize phyMode=_phyMode - In the implementation block
@property (nonatomic,retain) NSNumber * channel;                                                                   //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSString * hotspot20Name;                                                               //@synthesize hotspot20Name=_hotspot20Name - In the implementation block
@property (nonatomic,copy) NSString * hotspotPluginLabel;                                                          //@synthesize hotspotPluginLabel=_hotspotPluginLabel - In the implementation block
@property (assign,nonatomic) long long carPlayType;                                                                //@synthesize carPlayType=_carPlayType - In the implementation block
@property (copy) NSString * unconfiguredDeviceID;                                                                  //@synthesize unconfiguredDeviceID=_unconfiguredDeviceID - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                          //@synthesize hidden=_hidden - In the implementation block
@property (assign,getter=isAirPortBaseStation,nonatomic) BOOL airPortBaseStation;                                  //@synthesize airPortBaseStation=_airPortBaseStation - In the implementation block
@property (nonatomic,copy) NSString * bssid;                                                                       //@synthesize bssid=_bssid - In the implementation block
@property (assign,nonatomic) long long rssi;                                                                       //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) float scaledRSSI;                                                                     //@synthesize scaledRSSI=_scaledRSSI - In the implementation block
@property (assign,nonatomic) BOOL prominentDisplay;                                                                //@synthesize prominentDisplay=_prominentDisplay - In the implementation block
@property (assign,getter=isKnown,nonatomic) BOOL known;                                                            //@synthesize known=_known - In the implementation block
@property (nonatomic,copy) NSString * crowdsourceDescription;                                                      //@synthesize crowdsourceDescription=_crowdsourceDescription - In the implementation block
@property (assign,nonatomic) long long securityModeExt;                                                            //@synthesize securityModeExt=_securityModeExt - In the implementation block
@property (assign,getter=isPopular,nonatomic) BOOL popular;                                                        //@synthesize popular=_popular - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSNumber * channelWidth;                                                            //@synthesize channelWidth=_channelWidth - In the implementation block
@property (nonatomic,readonly) NSNumber * apVal;                                                                   //@synthesize apVal=_apVal - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(long long)type;
-(long long)compare:(id)arg1 ;
-(unsigned long long)uniqueIdentifier;
-(BOOL)isSecure;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)title;
-(NSNumber *)channel;
-(void)setSecure:(BOOL)arg1 ;
-(id)subtitle;
-(long long)rssi;
-(void)setRssi:(long long)arg1 ;
-(BOOL)isHidden;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(void)setHotspot20:(BOOL)arg1 ;
-(void)setChannel:(NSNumber *)arg1 ;
-(void)setPhyMode:(unsigned)arg1 ;
-(NSNumber *)channelWidth;
-(unsigned)phyMode;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(long long)securityMode;
-(void)setSecurityMode:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setCarPlay:(BOOL)arg1 ;
-(BOOL)isKnown;
-(BOOL)requiresPassword;
-(BOOL)isInstantHotspot;
-(BOOL)canBeDisplayedAsCurrent;
-(BOOL)isAdhoc;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)isPopular;
-(BOOL)iOSHotspot;
-(id)hotspotBatteryLife;
-(id)hotspotCellularProtocol;
-(id)hotspotSignalStrength;
-(float)scaledRSSI;
-(unsigned long long)signalBars;
-(BOOL)isEnterprise;
-(long long)carPlayType;
-(BOOL)_isEqualToHotspotDevice:(id)arg1 ;
-(BOOL)_isEqualToNetwork:(id)arg1 ;
-(id)initWithNetworkRef:(WiFiNetworkRef)arg1 ;
-(BOOL)isCarPlay;
-(BOOL)isHotspot20;
-(void)setHotspot20Name:(NSString *)arg1 ;
-(long long)unconfiguredAccessoryType;
-(NSString *)unconfiguredDeviceName;
-(NSString *)unconfiguredDeviceID;
-(BOOL)isNetworkSecurityModeMatch:(long long)arg1 ;
-(BOOL)supportsWiFiHealth;
-(void)setKnown:(BOOL)arg1 ;
-(void)setHotspotPluginLabel:(NSString *)arg1 ;
-(void)setIOSHotspot:(BOOL)arg1 ;
-(void)setRequiresPassword:(BOOL)arg1 ;
-(BOOL)requiresUsername;
-(void)setRequiresUsername:(BOOL)arg1 ;
-(void)setAdhoc:(BOOL)arg1 ;
-(void)setEnterprise:(BOOL)arg1 ;
-(void)setUnconfiguredAccessory:(BOOL)arg1 ;
-(BOOL)isAmbiguousSSID;
-(void)setAmbiguousSSID:(BOOL)arg1 ;
-(BOOL)isAirPortBaseStation;
-(void)setAirPortBaseStation:(BOOL)arg1 ;
-(void)setCarPlayType:(long long)arg1 ;
-(void)setUnconfiguredAccessoryType:(long long)arg1 ;
-(BOOL)isUnconfiguredAccessorySTAOnly;
-(void)setUnconfiguredAccessorySTAOnly:(BOOL)arg1 ;
-(void)setScaledRSSI:(float)arg1 ;
-(NSDictionary *)eapProfile;
-(void)setEapProfile:(NSDictionary *)arg1 ;
-(void)setUnconfiguredDeviceName:(NSString *)arg1 ;
-(void)setUnconfiguredDeviceID:(NSString *)arg1 ;
-(NSString *)hotspotPluginLabel;
-(NSString *)hotspot20Name;
-(long long)securityModeExt;
-(void)setSecurityModeExt:(long long)arg1 ;
-(NSNumber *)apVal;
-(BOOL)prominentDisplay;
-(void)setProminentDisplay:(BOOL)arg1 ;
-(BOOL)instantHotspot;
-(void)setInstantHotspot:(BOOL)arg1 ;
-(BOOL)isHotspot20Provisioned;
-(void)setHotspot20Provisioned:(BOOL)arg1 ;
-(NSString *)crowdsourceDescription;
-(void)setCrowdsourceDescription:(NSString *)arg1 ;
-(void)setPopular:(BOOL)arg1 ;
-(id)configurationIssues;
-(BOOL)isCloudSyncable;
@end

