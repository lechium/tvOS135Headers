/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MXService : NSObject {

	BOOL _isStarted;
	long long _sourceID;

}

@property (readonly) BOOL isStarted;                  //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) long long sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
-(id)init;
-(BOOL)isStarted;
-(long long)sourceID;
-(BOOL)startService;
-(BOOL)stopService;
-(BOOL)metricsAvailableForDate:(id)arg1 ;
-(id)getMetricsForClient:(id)arg1 dateString:(id)arg2 ;
-(id)initWithSourceID:(long long)arg1 ;
@end

