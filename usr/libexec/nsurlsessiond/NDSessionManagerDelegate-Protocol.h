//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NDSessionManager, NSString;

@protocol NDSessionManagerDelegate <NSObject>
- (void)managerBecameEmpty:(NDSessionManager *)arg1 bundleID:(NSString *)arg2 withCompletionHandler:(void (^)(void))arg3;
@end

