/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDCameraSessionID.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID <NSCopying> {

	BOOL _snapshotRequestForBulletin;
	NSString* _snapshotCharacteristicEventUUID;
	unsigned long long _snapshotReason;
	NSNumber* _streamingTier;

}

@property (readonly) NSString * snapshotCharacteristicEventUUID;                                       //@synthesize snapshotCharacteristicEventUUID=_snapshotCharacteristicEventUUID - In the implementation block
@property (readonly) unsigned long long snapshotReason;                                                //@synthesize snapshotReason=_snapshotReason - In the implementation block
@property (getter=isSnapshotRequestForBulletin,readonly) BOOL snapshotRequestForBulletin;              //@synthesize snapshotRequestForBulletin=_snapshotRequestForBulletin - In the implementation block
@property (readonly) NSNumber * streamingTier;                                                         //@synthesize streamingTier=_streamingTier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 cameraSessionAppID:(id)arg3 descriptionString:(id)arg4 spiClient:(BOOL)arg5 snapshotReason:(unsigned long long)arg6 snapshotRequestForBulletin:(BOOL)arg7 snapshotCharacteristicEventUUID:(id)arg8 streamingTier:(id)arg9 ;
-(unsigned long long)snapshotReason;
-(BOOL)isSnapshotRequestForBulletin;
-(NSString *)snapshotCharacteristicEventUUID;
-(NSNumber *)streamingTier;
-(id)initWithAccessory:(id)arg1 message:(id)arg2 ;
@end

