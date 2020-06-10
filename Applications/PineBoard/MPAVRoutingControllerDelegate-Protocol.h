//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPAVRoute, MPAVRoutingController, NSArray, NSError, NSString;

@protocol MPAVRoutingControllerDelegate <NSObject>

@optional
- (void)routingControllerDidPauseFromActiveRouteChange:(MPAVRoutingController *)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(MPAVRoutingController *)arg1;
- (void)routingController:(MPAVRoutingController *)arg1 volumeControlAvailabilityDidChange:(_Bool)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 shouldHijackRoute:(MPAVRoute *)arg2 alertStyle:(long long)arg3 busyRouteName:(NSString *)arg4 presentingAppName:(NSString *)arg5 completion:(void (^)(_Bool))arg6;
- (void)routingController:(MPAVRoutingController *)arg1 pickedRouteDidChange:(MPAVRoute *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 pickedRoutesDidChange:(NSArray *)arg2;
- (void)routingController:(MPAVRoutingController *)arg1 didFailToPickRouteWithError:(NSError *)arg2;
- (void)routingControllerAvailableRoutesDidChange:(MPAVRoutingController *)arg1;
@end
