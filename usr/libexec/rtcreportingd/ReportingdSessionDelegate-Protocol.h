//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, RTCActivityScheduler, RTCSelfReporter, ReportingdSession;

@protocol ReportingdSessionDelegate <NSObject>
- (_Bool)isActiveClientLimitReachedForSession:(ReportingdSession *)arg1 sessionInfo:(NSDictionary *)arg2;
- (RTCActivityScheduler *)sharedActivitySchedulerForRealtimeBackend:(_Bool)arg1 isBatching:(_Bool)arg2;
- (RTCSelfReporter *)getSelfReporter;
- (void)releaseOSTransactions:(unsigned int)arg1;
- (void)retainOSTransaction;
- (void)copyReportingAgentState:(id *)arg1 cachedStorebags:(id *)arg2;
- (NSDictionary *)sharedDataForSession:(ReportingdSession *)arg1;
- (void)removeObjectFromSharedDataForSession:(ReportingdSession *)arg1 key:(NSString *)arg2;
- (void)updateSharedDataForSession:(ReportingdSession *)arg1 sharedData:(NSDictionary *)arg2;
- (ReportingdSession *)parentSessionForChild:(ReportingdSession *)arg1;
- (void)updateDownstreamSessions:(ReportingdSession *)arg1;
- (ReportingdSession *)getAncestorWithAggregatorForSession:(ReportingdSession *)arg1;
- (void)updateCorrelatedSessions:(ReportingdSession *)arg1;
- (NSString *)parentSessionIDStringForSession:(ReportingdSession *)arg1;
- (NSString *)storebagVersionForSession:(ReportingdSession *)arg1;
- (NSDictionary *)storebagForSession:(ReportingdSession *)arg1;
@end

