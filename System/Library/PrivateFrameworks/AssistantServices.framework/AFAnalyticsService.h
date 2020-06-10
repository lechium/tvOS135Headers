/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFAnalyticsService <NSObject>
@optional
-(oneway void)stageEvent:(id)arg1;
-(oneway void)stageEvents:(id)arg1;

@required
-(oneway void)stageEvents:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
-(oneway void)beginEventsGrouping;
-(oneway void)endEventsGrouping;

@end

