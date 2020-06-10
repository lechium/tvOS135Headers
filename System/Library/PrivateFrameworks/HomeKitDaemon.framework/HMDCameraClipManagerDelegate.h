/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDCameraClipManagerDelegate <NSObject>
@optional
-(void)clipManagerDidBecomeAvailable:(id)arg1;
-(void)clipManagerDidBecomeUnavailable:(id)arg1;
-(BOOL)clipManager:(id)arg1 shouldAddNotificationForSignificantEvent:(id)arg2 withHomePresence:(id)arg3;
-(void)clipManager:(id)arg1 didAddSignificantEventNotification:(id)arg2;
-(void)clipManager:(id)arg1 didDeleteClip:(id)arg2;
-(void)clipManagerDidDisableCloudStorage:(id)arg1;

@end

