//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTIInputSystemDelegate-Protocol.h"

@class NSMutableSet, NSString, RTIInputSystemService, RTIInputSystemServiceSession;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPTextInputDaemon : NSObject <RTIInputSystemDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    RTIInputSystemService *_rtiService;	// 16 = 0x10
    RTIInputSystemServiceSession *_rtiSession;	// 24 = 0x18
    NSMutableSet *_sessionPeerIDs;	// 32 = 0x20
    id <RPMessageable> _messenger;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100050388
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3;	// IMP=0x0000000100050268
- (void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3;	// IMP=0x000000010005015c
- (void)inputSystemService:(id)arg1 inputSessionDocumentDidChange:(id)arg2;	// IMP=0x000000010004ffcc
- (void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2;	// IMP=0x000000010004fec8
- (void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2;	// IMP=0x000000010004fdc4
- (void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2;	// IMP=0x000000010004fac4
- (void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;	// IMP=0x000000010004fa00
- (void)_sendTextInputPayloadEvent:(id)arg1 rtiPayload:(id)arg2;	// IMP=0x000000010004f6ac
- (void)_handleTextInputChange:(id)arg1 options:(id)arg2;	// IMP=0x000000010004f38c
- (void)_handleSessionStop:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004f248
- (void)_handleSessionStart:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004eff4
- (void)invalidate;	// IMP=0x000000010004ef00
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x000000010004ea70
- (id)init;	// IMP=0x000000010004ea08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

