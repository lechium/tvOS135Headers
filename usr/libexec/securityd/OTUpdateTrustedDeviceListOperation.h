//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class NSOperation, NSString, OTOperationDependencies;
@protocol OctagonFlagString, OctagonStateString;

__attribute__((visibility("hidden")))
@interface OTUpdateTrustedDeviceListOperation : CKKSGroupOperation <OctagonStateTransitionOperationProtocol>
{
    _Bool _logForUpgrade;	// 10 = 0xa
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    NSString<OctagonStateString> *_stateIfListUpdates;	// 40 = 0x28
    NSString<OctagonFlagString> *_retryFlag;	// 48 = 0x30
    NSOperation *_finishedOp;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010006fd90
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) NSString<OctagonFlagString> *retryFlag; // @synthesize retryFlag=_retryFlag;
@property(retain) NSString<OctagonStateString> *stateIfListUpdates; // @synthesize stateIfListUpdates=_stateIfListUpdates;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property _Bool logForUpgrade; // @synthesize logForUpgrade=_logForUpgrade;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)afterAuthKitFetch:(id)arg1 accountIsDemo:(_Bool)arg2;	// IMP=0x000000010006faf8
- (void)groupStart;	// IMP=0x000000010006f7ac
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 listUpdatesState:(id)arg3 errorState:(id)arg4 retryFlag:(id)arg5;	// IMP=0x000000010006f664

@end

