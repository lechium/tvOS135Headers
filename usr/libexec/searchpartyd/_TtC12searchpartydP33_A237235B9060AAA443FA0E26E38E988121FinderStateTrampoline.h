//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPFinderStateXPCProtocol-Protocol.h"

@class MISSING_TYPE;

@interface _TtC12searchpartydP33_A237235B9060AAA443FA0E26E38E988121FinderStateTrampoline : NSObject <SPFinderStateXPCProtocol>
{
    MISSING_TYPE *implementation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001acde8
- (id)init;	// IMP=0x00000001001acdf8
- (void)setActiveCache:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001acd38
- (void)stateInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001acb58
- (void)fetchFinderState:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ac918
- (void)disableFinderModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ac730
- (void)enableFinderModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ac630
- (void)start;	// IMP=0x00000001001ac4b8

@end

