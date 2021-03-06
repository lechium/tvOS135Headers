/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CWFClient, NSString;

@interface CWFInterface : NSObject {

	CWFClient* _client;
	NSString* _interfaceName;

}

@property (nonatomic,retain) CWFClient * client;                  //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)interfaceWithClient:(id)arg1 interfaceName:(id)arg2 ;
-(id)countryCode;
-(CWFClient *)client;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setClient:(CWFClient *)arg1 ;
-(id)channel;
-(id)IPv6Addresses;
-(id)IPv4Addresses;
-(unsigned long long)securityType;
-(id)capabilities;
-(long long)noise;
-(long long)RSSI;
-(id)MACAddress;
-(id)networkName;
-(BOOL)wakeOnWirelessEnabled;
-(id)SSID;
-(id)BSSID;
-(BOOL)powerOn;
-(int)opMode;
-(double)txRate;
-(unsigned long long)guardInterval;
-(id)networkServiceID;
-(id)authType;
-(BOOL)setChannel:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAWDLPeerTrafficRegistration:(id)arg1 error:(id*)arg2 ;
-(long long)WEPSubtype;
-(long long)WAPISubtype;
-(id)DNSServerAddresses;
-(unsigned)EAP8021XSupplicantState;
-(unsigned)EAP8021XControlMode;
-(unsigned)EAP8021XControlState;
-(int)EAP8021XClientStatus;
-(int)PHYMode;
-(id)__authDataFromClient;
-(int)__flagsForChannelWidth:(int)arg1 ;
-(id)supportedChannelsWithCountryCode:(id)arg1 ;
-(id)virtualInterfaceWithRole:(int)arg1 ;
-(id)virtualInterfaceNames;
-(id)parentInterfaceName;
-(int)virtualInterfaceRole;
-(BOOL)setPower:(BOOL)arg1 error:(id*)arg2 ;
-(id)performScanWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)performScanWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)performANQPWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)performANQPWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)associateWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)associateWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disassociateWithReason:(long long)arg1 ;
-(id)currentScanResult;
-(id)currentKnownNetworkProfile;
-(id)SSIDHash;
-(id)BSSIDHash;
-(double)txPower;
-(int)supportedPHYModes;
-(id)supportedChannel:(unsigned long long)arg1 width:(int)arg2 countryCode:(id)arg3 ;
-(unsigned long long)MCSIndex;
-(unsigned long long)numberOfSpatialStreams;
-(unsigned long long)DTIMInterval;
-(id)AWDLInterface;
-(id)APSTAInterface;
-(id)IO80211ControllerInfo;
-(id)IO80211InterfaceInfo;
-(id)roamStatus;
-(id)joinStatus;
-(id)autoJoinStatus;
-(id)linkDownStatus;
-(id)networkServiceName;
-(BOOL)isNetworkServiceEnabled;
-(id)IPv4RouterAddress;
-(id)IPv6RouterAddress;
-(id)DHCPLeaseStartedAt;
-(id)DHCPLeaseExpiresAt;
-(BOOL)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg1 error:(id*)arg2 ;
-(void)stopAWDLPeerAssistedDiscovery;
-(id)systemAWDLPeerTrafficRegistrations;
-(id)AWDLPreferredChannels;
-(id)AWDLSyncEnabled;
-(id)AWDLSyncState;
-(id)AWDLSyncChannelSequence;
-(id)AWDLStrategy;
-(id)AWDLElectionParameters;
-(id)AWDLPeerDatabase;
-(id)AWDLSocialTimeSlots;
-(id)AWDLElectionID;
-(id)AWDLElectionRSSIThresholds;
-(id)AWDLMasterChannel;
-(id)AWDLSecondaryMasterChannel;
-(id)AWDLOpMode;
-(id)AWDLSyncParameters;
-(id)AWDLStatistics;
-(id)AWDLSidecarDiagnostics;
-(id)rangingCapabilities;
-(BOOL)setRangeable:(BOOL)arg1 peerList:(id)arg2 error:(id*)arg3 ;
-(id)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)performRangingWithPeerList:(id)arg1 timeout:(unsigned long long)arg2 error:(id*)arg3 ;
@end

