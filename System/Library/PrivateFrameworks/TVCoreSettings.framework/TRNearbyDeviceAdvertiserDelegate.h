/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRNearbyDeviceAdvertiserDelegate <NSObject>
@optional
-(void)nearbyDeviceAdvertiser:(id)arg1 didFailToStartAdvertisingWithError:(id)arg2;
-(void)nearbyDeviceAdvertiserDidStopAdvertising:(id)arg1;
-(void)nearbyDeviceAdvertiser:(id)arg1 didFailToStopAdvertisingWithError:(id)arg2;
-(void)nearbyDeviceAdvertiserDidStartAdvertising:(id)arg1;

@required
-(void)nearbyDeviceAdvertiser:(id)arg1 didReceiveConnectionRequestFromDevice:(id)arg2 requestHandler:(/*^block*/id)arg3;

@end

