//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PRServerProtocol-Protocol.h"

@class NSArray, NSDictionary;

@protocol PRBeaconRangingProtocol <PRServerProtocol>
- (void)clearBeaconWhitelist:(void (^)(_Bool, NSError *))arg1;
- (void)pushBeaconWhitelist:(NSArray *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)stopBeaconing:(long long)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)startBeaconing:(long long)arg1 options:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end

