/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPHomeKitDelegate <NSObject>
@optional
-(void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2 forType:(long long)arg3;
-(void)homeKit:(id)arg1 allowDuplicate:(BOOL)arg2;
-(void)homeKitStartedScanning:(id)arg1 forType:(long long)arg2;
-(void)homeKitStoppedScanning:(id)arg1 forType:(long long)arg2;

@required
-(void)homeKitDidUpdateState:(id)arg1;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5;

@end

