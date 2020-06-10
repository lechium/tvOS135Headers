/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVOutputDevice, NSString, NSData, NSNumber, NSDictionary, NSArray;


@protocol AVOutputDeviceImpl <NSObject>
@property (__weak) AVOutputDevice * parentOutputDevice; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * ID; 
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,readonly) long long deviceSubType; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSData * identifyingMACAddress; 
@property (nonatomic,readonly) NSNumber * batteryLevel; 
@property (nonatomic,readonly) NSNumber * caseBatteryLevel; 
@property (nonatomic,readonly) NSNumber * leftBatteryLevel; 
@property (nonatomic,readonly) NSNumber * rightBatteryLevel; 
@property (nonatomic,readonly) NSNumber * supportsDataOverACLProtocol; 
@property (nonatomic,readonly) NSNumber * isInEar; 
@property (nonatomic,readonly) NSDictionary * airPlayProperties; 
@property (getter=isInUseByPairedDevice,nonatomic,readonly) BOOL inUseByPairedDevice; 
@property (nonatomic,copy,readonly) NSArray * connectedPairedDevices; 
@property (nonatomic,readonly) unsigned long long deviceFeatures; 
@property (nonatomic,readonly) BOOL requiresAuthorization; 
@property (nonatomic,readonly) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL onlyAllowsConnectionsFromPeersInHomeGroup; 
@property (nonatomic,readonly) BOOL canAccessRemoteAssets; 
@property (nonatomic,readonly) BOOL canAccessAppleMusic; 
@property (nonatomic,readonly) BOOL canAccessiCloudMusicLibrary; 
@property (nonatomic,readonly) BOOL supportsBufferedAirPlay; 
@property (readonly) float volume; 
@property (readonly) BOOL canSetVolume; 
@property (nonatomic,readonly) BOOL canBeGrouped; 
@property (nonatomic,copy,readonly) NSString * groupID; 
@property (nonatomic,readonly) BOOL canBeGroupLeader; 
@property (nonatomic,readonly) BOOL isGroupLeader; 
@property (nonatomic,readonly) BOOL participatesInGroupPlayback; 
@property (nonatomic,readonly) BOOL groupContainsGroupLeader; 
@property (nonatomic,readonly) NSString * logicalDeviceID; 
@property (nonatomic,readonly) BOOL isLogicalDeviceLeader; 
@property (nonatomic,readonly) BOOL canCommunicateWithAllLogicalDeviceMembers; 
@property (nonatomic,readonly) BOOL canRelayCommunicationChannel; 
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets; 
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender; 
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; 
@property (nonatomic,readonly) BOOL supportsBluetoothSharing; 
@property (nonatomic,readonly) long long HAPConformance; 
@property (nonatomic,readonly) NSArray * availableBluetoothListeningModes; 
@property (nonatomic,readonly) NSString * currentBluetoothListeningMode; 
@required
-(NSString *)name;
-(long long)deviceType;
-(NSString *)serialNumber;
-(NSString *)ID;
-(float)volume;
-(void)setVolume:(float)arg1;
-(NSString *)modelID;
-(NSString *)manufacturer;
-(long long)deviceSubType;
-(NSString *)firmwareVersion;
-(unsigned long long)deviceFeatures;
-(NSData *)identifyingMACAddress;
-(void)setParentOutputDevice:(id)arg1;
-(NSNumber *)batteryLevel;
-(NSNumber *)caseBatteryLevel;
-(NSNumber *)leftBatteryLevel;
-(NSNumber *)rightBatteryLevel;
-(NSNumber *)supportsDataOverACLProtocol;
-(NSNumber *)isInEar;
-(NSDictionary *)airPlayProperties;
-(BOOL)isInUseByPairedDevice;
-(NSArray *)connectedPairedDevices;
-(BOOL)requiresAuthorization;
-(BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsBufferedAirPlay;
-(void)setSecondDisplayEnabled:(BOOL)arg1;
-(BOOL)canSetVolume;
-(BOOL)canBeGrouped;
-(NSString *)groupID;
-(BOOL)canBeGroupLeader;
-(BOOL)isGroupLeader;
-(BOOL)participatesInGroupPlayback;
-(BOOL)groupContainsGroupLeader;
-(NSString *)logicalDeviceID;
-(BOOL)isLogicalDeviceLeader;
-(BOOL)canCommunicateWithAllLogicalDeviceMembers;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)supportsBluetoothSharing;
-(long long)HAPConformance;
-(NSArray *)availableBluetoothListeningModes;
-(NSString *)currentBluetoothListeningMode;
-(BOOL)setCurrentBluetoothListeningMode:(id)arg1 error:(id*)arg2;
-(void)configureUsingBlock:(/*^block*/id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(AVOutputDevice *)parentOutputDevice;

@end

