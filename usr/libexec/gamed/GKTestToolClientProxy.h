//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKClientProxy.h"

@class GKGameInternal;

@interface GKTestToolClientProxy : GKClientProxy
{
    GKGameInternal *_testGame;	// 8 = 0x8
}

@property(retain, nonatomic) GKGameInternal *testGame; // @synthesize testGame=_testGame;
- (id)externalVersion;	// IMP=0x00000001001262f8
- (id)adamID;	// IMP=0x00000001001262bc
- (id)bundleShortVersion;	// IMP=0x0000000100126270
- (id)bundleVersion;	// IMP=0x0000000100126234
- (id)bundleIdentifier;	// IMP=0x00000001001261f8
- (id)transportWithCredential:(id)arg1;	// IMP=0x0000000100126174
- (void)dealloc;	// IMP=0x0000000100126124
- (oneway void)setTestGame:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100125e04

@end
