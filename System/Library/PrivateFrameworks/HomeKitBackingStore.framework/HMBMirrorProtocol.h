/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NAFuture;


@protocol HMBMirrorProtocol <NSObject>
@property (nonatomic,readonly) id<HMBLocalZoneID> zoneID; 
@property (nonatomic,readonly) NAFuture * startUp; 
@required
-(id)destroy;
-(id)shutdown;
-(id)flush;
-(id<HMBLocalZoneID>)zoneID;
-(NAFuture *)startUp;
-(void)startUpWithLocalZone:(id)arg1;
-(id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;

@end

