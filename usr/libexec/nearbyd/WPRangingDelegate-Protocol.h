//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WPRanging;

@protocol WPRangingDelegate <NSObject>
- (void)rangingDidUpdateState:(WPRanging *)arg1;

@optional
- (void)ranging:(WPRanging *)arg1 enabled:(_Bool)arg2 withError:(NSError *)arg3;
@end

