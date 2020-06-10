/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCloudKitEventNotificationManagerRuntimeTest.h>

@interface IMCloudKitSyncProgressRuntimeTest : IMCloudKitEventNotificationManagerRuntimeTest {

	unsigned long long _progressCount;
	unsigned long long _maxProgressCount;
	double _progressRescheduleDelay;

}

@property (assign) unsigned long long progressCount;                 //@synthesize progressCount=_progressCount - In the implementation block
@property (assign) unsigned long long maxProgressCount;              //@synthesize maxProgressCount=_maxProgressCount - In the implementation block
@property (assign) double progressRescheduleDelay;                   //@synthesize progressRescheduleDelay=_progressRescheduleDelay - In the implementation block
-(void)setUp;
-(void)startTest;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(double)progressRescheduleDelay;
-(unsigned long long)progressCount;
-(unsigned long long)maxProgressCount;
-(void)setProgressCount:(unsigned long long)arg1 ;
-(void)setProgressRescheduleDelay:(double)arg1 ;
-(id)createSyncStatisticsForMockSyncState:(id)arg1 ;
-(void)setMaxProgressCount:(unsigned long long)arg1 ;
@end
