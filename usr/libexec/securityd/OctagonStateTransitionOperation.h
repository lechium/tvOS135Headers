//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSResultOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface OctagonStateTransitionOperation : CKKSResultOperation <OctagonStateTransitionOperationProtocol>
{
    NSString<OctagonStateString> *_nextState;	// 8 = 0x8
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
}

+ (id)named:(id)arg1 entering:(id)arg2;	// IMP=0x0000000100156680
+ (id)named:(id)arg1 intending:(id)arg2 errorState:(id)arg3 withBlockTakingSelf:(CDUnknownBlockType)arg4;	// IMP=0x0000000100156508
- (void).cxx_destruct;	// IMP=0x00000001001564c8
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (id)description;	// IMP=0x00000001001563d0
- (id)initIntending:(id)arg1 errorState:(id)arg2;	// IMP=0x000000010015631c

@end

