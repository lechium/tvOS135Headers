//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, SDUnlockIDSController;

@protocol SDUnlockIDSControllerDelegate <NSObject>

@optional
- (void)idsControllerSpaceDidBecomeAvailable:(SDUnlockIDSController *)arg1;
- (void)idsControllerNearbyStateChanged:(SDUnlockIDSController *)arg1;
- (void)idsController:(SDUnlockIDSController *)arg1 didReceiveProtoData:(NSData *)arg2 forType:(unsigned short)arg3;
@end

