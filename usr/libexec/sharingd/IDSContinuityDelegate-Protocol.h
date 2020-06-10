//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSContinuity, NSData, NSError, NSUUID;

@protocol IDSContinuityDelegate <NSObject>
- (void)continuityDidUpdateState:(IDSContinuity *)arg1;

@optional
- (void)continuity:(IDSContinuity *)arg1 didStopTrackingPeer:(NSUUID *)arg2 type:(long long)arg3;
- (void)continuity:(IDSContinuity *)arg1 didStartTrackingPeer:(NSUUID *)arg2 type:(long long)arg3 error:(NSError *)arg4;
- (void)continuity:(IDSContinuity *)arg1 didLosePeer:(NSUUID *)arg2 type:(long long)arg3;
- (void)continuity:(IDSContinuity *)arg1 didDiscoverType:(long long)arg2 withData:(NSData *)arg3 fromPeer:(NSUUID *)arg4;
- (void)continuity:(IDSContinuity *)arg1 didFailToStartScanningForType:(long long)arg2 withError:(NSError *)arg3;
- (void)continuity:(IDSContinuity *)arg1 didStopScanningForType:(long long)arg2;
- (void)continuity:(IDSContinuity *)arg1 didStartScanningForType:(long long)arg2;
- (void)continuity:(IDSContinuity *)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(NSError *)arg3;
- (void)continuity:(IDSContinuity *)arg1 didStopAdvertisingOfType:(long long)arg2 withError:(NSError *)arg3;
- (void)continuity:(IDSContinuity *)arg1 didStopAdvertisingOfType:(long long)arg2;
- (void)continuity:(IDSContinuity *)arg1 didStartAdvertisingOfType:(long long)arg2;
@end

