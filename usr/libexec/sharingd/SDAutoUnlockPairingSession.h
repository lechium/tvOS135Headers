//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAutoUnlockTransportClient-Protocol.h"

@class NSString, NSUUID, SDAutoUnlockAKSSession;
@protocol OS_dispatch_queue, OS_dispatch_source, SDAutoUnlockSessionDelegate;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockPairingSession : NSObject <SDAutoUnlockTransportClient>
{
    id <SDAutoUnlockSessionDelegate> _delegate;	// 8 = 0x8
    NSUUID *_sessionID;	// 16 = 0x10
    NSString *_deviceID;	// 24 = 0x18
    long long _pairingAKSSession;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 40 = 0x28
    SDAutoUnlockAKSSession *_aksSession;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_responseTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000362c8
@property(retain) NSObject<OS_dispatch_source> *responseTimer; // @synthesize responseTimer=_responseTimer;
@property(retain, nonatomic) SDAutoUnlockAKSSession *aksSession; // @synthesize aksSession=_aksSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property long long pairingAKSSession; // @synthesize pairingAKSSession=_pairingAKSSession;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak id <SDAutoUnlockSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleTimerFired;	// IMP=0x00000001000360e8
- (void)invalidateResponseTimer;	// IMP=0x0000000100036010
- (void)restartResponseTimer:(unsigned long long)arg1;	// IMP=0x0000000100035e14
- (id)dataFromUUID:(id)arg1;	// IMP=0x0000000100035d94
- (id)wrapPayload:(id)arg1 withType:(unsigned short)arg2 useProxy:(_Bool)arg3 senderID:(id)arg4;	// IMP=0x0000000100035bc4
- (id)wrapPayload:(id)arg1 withType:(unsigned short)arg2;	// IMP=0x0000000100035bb0
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x0000000100035bac
- (void)start;	// IMP=0x0000000100035ba8
- (void)invalidate;	// IMP=0x0000000100035a24
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2;	// IMP=0x0000000100035928
- (id)init;	// IMP=0x00000001000358c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

