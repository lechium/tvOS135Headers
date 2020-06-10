/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate, TADeviceRecordSettings;

@interface TADeviceRecord : NSObject {

	NSMutableDictionary* _deviceRecord;
	NSDate* _lastPurgeDate;
	TADeviceRecordSettings* _settings;

}
+(id)notificationInternalStateToString:(unsigned long long)arg1 ;
+(unsigned long long)_convertTANotificationStateToTANotificationInternalState:(unsigned long long)arg1 ;
+(BOOL)_isKnownDevice:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(id)initWithSettings:(id)arg1 ;
-(id)descriptionDictionary;
-(void)ingestTAEvent:(id)arg1 andAppendOutgoingRequestsTo:(id)arg2 ;
-(void)purgeWithClock:(id)arg1 ;
-(id)getNotificationOngoingDeviceList;
-(BOOL)isKnownDevice:(id)arg1 ;
-(unsigned long long)getDeviceNotificationState:(id)arg1 ;
-(void)updateDeviceRecordOnSessionChangeWithCurrentDate:(id)arg1 ;
-(id)_getDeviceRecord:(id)arg1 ;
-(void)_createRecordIfNecessaryWithAddress:(id)arg1 withDate:(id)arg2 ;
-(void)_setDevice:(id)arg1 withInternalState:(unsigned long long)arg2 withDate:(id)arg3 ;
-(void)_setDevice:(id)arg1 withExternalState:(unsigned long long)arg2 withDate:(id)arg3 ;
-(void)_setDevice:(id)arg1 withType:(unsigned long long)arg2 withDate:(id)arg3 ;
-(void)logDeviceRecord;
-(unsigned long long)getDeviceType:(id)arg1 ;
@end

