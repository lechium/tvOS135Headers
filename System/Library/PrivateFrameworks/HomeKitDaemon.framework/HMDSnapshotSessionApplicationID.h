/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDCameraSnapshotSessionID, NSString;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying> {

	HMDCameraSnapshotSessionID* _sessionID;
	NSString* _applicationIdentifier;

}

@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(HMDCameraSnapshotSessionID *)sessionID;
-(NSString *)applicationIdentifier;
-(id)initWithSessionID:(id)arg1 applicationIdentifier:(id)arg2 ;
@end

