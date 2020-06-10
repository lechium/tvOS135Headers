//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class CLLocation, NSArray, NSDictionary;
@protocol CLWeatherServiceClientProtocol;

@protocol CLWeatherServiceProtocol <CLIntersiloServiceProtocol>
- (void)unregisterForWeatherUpdates:(byref id <CLWeatherServiceClientProtocol>)arg1;
- (void)registerForWeatherUpdates:(byref id <CLWeatherServiceClientProtocol>)arg1;
- (void)weatherForecastUpdated:(NSDictionary *)arg1 airQualityConditions:(NSDictionary *)arg2 hourlyForecasts:(NSArray *)arg3 dailyForecasts:(NSArray *)arg4 location:(CLLocation *)arg5;
@end

