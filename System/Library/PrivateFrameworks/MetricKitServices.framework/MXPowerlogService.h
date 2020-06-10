/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKitServices/MXService.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableArray, MXSourceXPCPayload, NSObject;

@interface MXPowerlogService : MXService {

	NSMutableArray* _powerlogDataPaths;
	MXSourceXPCPayload* _unarchivedPowerlogData;
	NSObject*<OS_os_log> _MXPowerLogServiceLogHandle;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (retain) NSMutableArray * powerlogDataPaths;                               //@synthesize powerlogDataPaths=_powerlogDataPaths - In the implementation block
@property (retain) MXSourceXPCPayload * unarchivedPowerlogData;                      //@synthesize unarchivedPowerlogData=_unarchivedPowerlogData - In the implementation block
@property (retain) NSObject*<OS_os_log> MXPowerLogServiceLogHandle;                  //@synthesize MXPowerLogServiceLogHandle=_MXPowerLogServiceLogHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
+(id)sharedPowerlogService;
-(id)init;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)startService;
-(BOOL)stopService;
-(BOOL)_updateMetrics;
-(BOOL)metricsAvailableForDate:(id)arg1 ;
-(id)getMetricsForClient:(id)arg1 dateString:(id)arg2 ;
-(NSMutableArray *)powerlogDataPaths;
-(void)setPowerlogDataPaths:(NSMutableArray *)arg1 ;
-(MXSourceXPCPayload *)unarchivedPowerlogData;
-(void)setUnarchivedPowerlogData:(MXSourceXPCPayload *)arg1 ;
-(NSObject*<OS_os_log>)MXPowerLogServiceLogHandle;
-(void)setMXPowerLogServiceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

