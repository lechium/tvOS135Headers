//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class NSString;

@protocol CLBeaconFenceAuthorizationManagerProtocol <CLNotifierServiceProtocol>
- (int)syncgetCanBundle:(NSString *)arg1 performFenceOperationFor:(NSString *)arg2;
- (_Bool)syncgetFences:(list_602ae561 *)arg1 forBundle:(NSString *)arg2 onBehalfOf:(NSString *)arg3;
- (_Bool)syncgetFences:(list_602ae561 *)arg1 forBundle:(NSString *)arg2;
- (_Bool)syncgetRemoveFence:(const struct MonitoredRegion *)arg1;
- (_Bool)syncgetAddFence:(const struct MonitoredRegion *)arg1;
- (_Bool)syncgetDoSync:(void (^)(struct CLBeaconFenceAuthorizationManager *))arg1;
- (void)doAsync:(void (^)(struct CLBeaconFenceAuthorizationManager *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLBeaconFenceAuthorizationManager *))arg1;
@end

