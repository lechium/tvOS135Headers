/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFAnalyticsProtocol.h>

@protocol OS_dispatch_queue;
@class SFAnalyticsSQLiteStore, NSObject, NSMutableDictionary, NSString;

@interface SFAnalytics : NSObject <SFAnalyticsProtocol> {

	SFAnalyticsSQLiteStore* _database;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _samplers;
	NSMutableDictionary* _multisamplers;
	unsigned _disableLogging : 1;

}

@property (nonatomic,retain) SFAnalyticsSQLiteStore * database;               //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)databasePath;
+(id)logger;
+(void)addOSVersionToEvent:(id)arg1 ;
+(id)defaultAnalyticsDatabasePath:(id)arg1 ;
+(long long)fuzzyDaysSinceDate:(id)arg1 ;
+(id)hwModelID;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)datePropertyForKey:(id)arg1 ;
-(void)setDateProperty:(id)arg1 forKey:(id)arg2 ;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 ;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 withAttributes:(id)arg4 ;
-(id)AddMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(/*^block*/id)arg3 ;
-(id)logSystemMetricsForActivityNamed:(id)arg1 withAction:(/*^block*/id)arg2 ;
-(id)startLogSystemMetricsForActivityNamed:(id)arg1 ;
-(SFAnalyticsSQLiteStore *)database;
-(void)removeState;
-(void)incrementIntegerPropertyForKey:(id)arg1 ;
-(void)setNumberProperty:(id)arg1 forKey:(id)arg2 ;
-(id)numberPropertyForKey:(id)arg1 ;
-(id)coreAnalyticsKeyFilter:(id)arg1 ;
-(void)dailyCoreAnalyticsMetrics:(id)arg1 ;
-(void)logSuccessForEventNamed:(id)arg1 timestampBucket:(unsigned)arg2 ;
-(void)logSuccessForEventNamed:(id)arg1 ;
-(void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 timestampBucket:(unsigned)arg3 ;
-(void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 ;
-(void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 timestampBucket:(unsigned)arg3 ;
-(void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 ;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 timestampBucket:(unsigned)arg4 ;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 withAttributes:(id)arg4 timestampBucket:(unsigned)arg5 ;
-(void)noteEventNamed:(id)arg1 timestampBucket:(unsigned)arg2 ;
-(void)noteEventNamed:(id)arg1 ;
-(void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3 timestampBucket:(unsigned)arg4 ;
-(void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3 ;
-(id)eventDictForEventName:(id)arg1 withAttributes:(id)arg2 eventClass:(long long)arg3 timestampBucket:(double)arg4 ;
-(id)addMetricSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(/*^block*/id)arg3 ;
-(id)existingMetricSamplerForName:(id)arg1 ;
-(id)existingMultiSamplerForName:(id)arg1 ;
-(void)removeMetricSamplerForName:(id)arg1 ;
-(void)removeMultiSamplerForName:(id)arg1 ;
-(void)logMetric:(id)arg1 withName:(id)arg2 ;
-(void)logMetric:(id)arg1 withName:(id)arg2 oncePerReport:(BOOL)arg3 ;
-(void)setDatabase:(SFAnalyticsSQLiteStore *)arg1 ;
@end

