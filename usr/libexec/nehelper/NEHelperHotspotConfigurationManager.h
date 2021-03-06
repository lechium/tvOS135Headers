//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEHelperDelegate-Protocol.h"

@class NSString;

@interface NEHelperHotspotConfigurationManager : NSObject <NEHelperDelegate>
{
    NSString *_bundleID;	// 8 = 0x8
}

+ (void)checkAppForConfigurationCleanup:(id)arg1;	// IMP=0x0000000100006ddc
+ (_Bool)verifyEntitlement:(id)arg1;	// IMP=0x0000000100004d04
+ (void)initGlobals;	// IMP=0x0000000100004bf8
- (void).cxx_destruct;	// IMP=0x0000000100006f78
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)handleMessage:(id)arg1;	// IMP=0x0000000100006c5c
- (_Bool)processRequest:(id)arg1;	// IMP=0x0000000100006be8
- (_Bool)processQueryNetworks:(id)arg1;	// IMP=0x0000000100006990
- (_Bool)processRemoveConfigurationRequest:(id)arg1;	// IMP=0x0000000100006868
- (void)removeWiFiNetworkConfiguration:(id)arg1;	// IMP=0x0000000100006584
- (_Bool)checkIfJoinOnceNetworkAndDisassociate:(struct __WiFiManagerClient *)arg1;	// IMP=0x0000000100006404
- (_Bool)processAddConfigurationRequest:(id)arg1;	// IMP=0x0000000100005d84
- (_Bool)checkIfSystemAppOrDaemon;	// IMP=0x0000000100005c30
- (struct __WiFiNetwork *)createWiFiNetworkFromConfiguration:(id)arg1;	// IMP=0x0000000100005540
- (id)createEAPClientConfiguration:(id)arg1;	// IMP=0x0000000100005014
- (id)getTTLSInnerAuthenticationString:(long long)arg1;	// IMP=0x0000000100004fbc
@property(readonly, nonatomic) NSString *name;
- (id)initWithFirstMessage:(id)arg1;	// IMP=0x0000000100004e48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

