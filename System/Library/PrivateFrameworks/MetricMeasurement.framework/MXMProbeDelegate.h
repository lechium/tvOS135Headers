/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MXMProbeDelegate <NSObject>
@optional
-(void)probeDidStartUpdating:(id)arg1;
-(void)probeDidUpdate:(id)arg1 data:(id)arg2 stop:(BOOL*)arg3;
-(void)probeDidStop:(id)arg1 reason:(unsigned long long)arg2;

@end

