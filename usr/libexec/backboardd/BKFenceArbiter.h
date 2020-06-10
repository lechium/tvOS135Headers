//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKFenceArbiterServer, BSAtomicSignal, BSMachPortReceiveRight, BSMachPortSendRight, CAContext;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BKFenceArbiter : NSObject
{
    BKFenceArbiterServer *_server;	// 8 = 0x8
    CAContext *_context;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_fenceLock;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_fenceSemaphore;	// 48 = 0x30
    _Bool _fenceRunning;	// 56 = 0x38
    unsigned int _fenceCount;	// 60 = 0x3c
    unsigned long long _fenceName;	// 64 = 0x40
    BSAtomicSignal *_fenceInvalid;	// 72 = 0x48
    NSObject<OS_dispatch_semaphore> *_fenceInvalidSemaphore;	// 80 = 0x50
    unsigned int _caFencePort;	// 88 = 0x58
    BSMachPortSendRight *_caFence;	// 96 = 0x60
    BSMachPortReceiveRight *_preFenceReceiveRight;	// 104 = 0x68
    unsigned long long _preFenceGenerationToken;	// 112 = 0x70
    BSMachPortReceiveRight *_preFenceTriggerReceiveRight;	// 120 = 0x78
    unsigned int _lastAssertionName;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x000000010000ba30
- (void).cxx_destruct;	// IMP=0x000000010000a39c
- (id)_newAssertionForTriggerPort:(unsigned int)arg1;	// IMP=0x0000000100009c50
- (id)_newFenceHandle;	// IMP=0x0000000100009014
- (id)init;	// IMP=0x0000000100008f00

@end

