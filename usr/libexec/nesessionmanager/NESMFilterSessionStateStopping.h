//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMFilterSessionState.h"

@interface NESMFilterSessionStateStopping : NESMFilterSessionState
{
    int _pendingDisposeCount;	// 32 = 0x20
}

@property int pendingDisposeCount; // @synthesize pendingDisposeCount=_pendingDisposeCount;
- (void)handleTimeout;	// IMP=0x000000010004e494
- (void)handlePluginDisposeComplete:(id)arg1;	// IMP=0x000000010004e37c
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010004e09c
- (id)init;	// IMP=0x000000010004e050

@end
