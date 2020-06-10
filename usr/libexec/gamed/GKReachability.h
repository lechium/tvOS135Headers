//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (id)_gkReachabilityForLocalWiFi;	// IMP=0x000000010008b67c
+ (id)_gkReachabilityForInternetConnection;	// IMP=0x000000010008b620
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x000000010008b5d0
+ (id)_gkReachabilityWithHostName:(id)arg1;	// IMP=0x000000010008b578
- (int)_gkCurrentReachabilityStatus;	// IMP=0x000000010008b764
- (_Bool)_gkConnectionRequired;	// IMP=0x000000010008b734
- (int)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000010008b700
- (int)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x000000010008b6f0
- (void)dealloc;	// IMP=0x000000010008b520
- (void)_gkStopNotifier;	// IMP=0x000000010008b4dc
- (_Bool)_gkStartNotifier;	// IMP=0x000000010008b270

@end
