//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSApplicationDataStoreMonitor, NSString;

@protocol FBSApplicationDataStoreObserver <NSObject>

@optional
- (void)dataStoreMonitor:(FBSApplicationDataStoreMonitor *)arg1 didInvalidateApplication:(NSString *)arg2;
- (void)dataStoreMonitor:(FBSApplicationDataStoreMonitor *)arg1 didUpdateApplication:(NSString *)arg2 forKey:(NSString *)arg3;
@end

