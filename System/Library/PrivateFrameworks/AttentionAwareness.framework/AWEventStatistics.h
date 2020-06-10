/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate, NSMutableDictionary;

@interface AWEventStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _timerResumed;
	unsigned long long _lastLogTime;
	NSDate* _lastLogDate;
	NSMutableDictionary* _stats;

}
+(id)sharedStatistics;
-(id)init;
-(void)logEvent:(unsigned long long)arg1 ;
@end

