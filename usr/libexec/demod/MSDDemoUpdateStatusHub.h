//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDDemoUpdateStatusDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface MSDDemoUpdateStatusHub : NSObject <MSDDemoUpdateStatusDelegate>
{
    NSMutableSet *_delegates;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100063e8c
- (void).cxx_destruct;	// IMP=0x000000010006496c
@property(retain) NSMutableSet *delegates; // @synthesize delegates=_delegates;
- (void)demoUpdateFailed:(id)arg1;	// IMP=0x0000000100064638
- (void)demoUpdateCompleted:(id)arg1;	// IMP=0x00000001000644c8
- (void)demoUpdateProgress:(id)arg1;	// IMP=0x00000001000642e0
- (void)unregisterDemoUpdateStatusDelegate:(id)arg1;	// IMP=0x0000000100064178
- (_Bool)registerDemoUpdateStatusDelegate:(id)arg1;	// IMP=0x0000000100063f40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

