//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DADeviceObserver-Protocol.h"

@class NSString;

@interface DADeviceObserverLocal : NSObject <DADeviceObserver>
{
}

- (void)endDiscoveringDevicesWithIdentifier:(id)arg1;	// IMP=0x00000001000076dc
- (id)beginDiscoveringDevicesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000752c
- (void)discoverAllDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000750c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

