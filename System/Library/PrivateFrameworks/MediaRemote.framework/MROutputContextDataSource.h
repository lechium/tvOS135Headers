/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MROutputContextDataSource : NSObject {

	float _volume;
	unsigned _volumeControlCapabilities;
	NSArray* _outputDevices;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,readonly) float volume;                                    //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) BOOL isAirPlaying; 
@property (nonatomic,readonly) unsigned volumeControlCapabilities;              //@synthesize volumeControlCapabilities=_volumeControlCapabilities - In the implementation block
@property (nonatomic,readonly) NSArray * outputDevices;                         //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(id)description;
-(NSString *)uniqueIdentifier;
-(float)volume;
-(NSArray *)outputDevices;
-(unsigned)volumeControlCapabilities;
-(BOOL)isAirPlaying;
-(id)outputDeviceForUID:(id)arg1 ;
-(void)notifyOutputDeviceAdded:(id)arg1 ;
-(void)notifyOutputDeviceRemoved:(id)arg1 ;
-(void)notifyVolumeDidChange:(float)arg1 outputDevice:(id)arg2 ;
-(void)notifyVolumeCapabilitiesDidChange:(unsigned)arg1 outputDevice:(id)arg2 ;
@end

