//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SFCoordinatedAlertRequest;

@protocol SDXPCCoordinatedAlertsInterface
- (void)coordinatedAlertsRequestFinish;
- (void)coordinatedAlertsRequestStart:(SFCoordinatedAlertRequest *)arg1 completion:(void (^)(NSError *, _Bool, NSDictionary *))arg2;
@end

