/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/RTMetricProtocol.h>

@class NSMutableDictionary, NSString;

@interface RTMetric : NSObject <RTMetricProtocol> {

	BOOL _loggingEnabled;
	BOOL _submitted;
	NSMutableDictionary* _metrics;

}

@property (assign,nonatomic) BOOL loggingEnabled;                          //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL submitted;                               //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_RT3)event;
+(id)metricName;
+(id)binForNumber:(id)arg1 bins:(id)arg2 ;
+(id)supportedMetricKeys;
+(id)binsFromStart:(id)arg1 toEnd:(id)arg2 gap:(id)arg3 ;
-(NSString *)description;
-(id)init;
-(NSMutableDictionary *)metrics;
-(BOOL)submitted;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)loggingEnabled;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(BOOL)submitMetricsWithError:(id*)arg1 ;
-(BOOL)setAllMetrics:(id)arg1 error:(id*)arg2 ;
-(id)initWithLoggingEnabled:(BOOL)arg1 ;
@end

