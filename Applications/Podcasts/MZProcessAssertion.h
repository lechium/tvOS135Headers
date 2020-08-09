//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion;
@protocol OS_dispatch_queue;

@interface MZProcessAssertion : NSObject
{
    unsigned long long _identifier;	// 8 = 0x8
    BKSProcessAssertion *_bkProcessAssertion;	// 16 = 0x10
    id _expirationObserver;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _expirationBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010007ea7c
@property(copy, nonatomic) CDUnknownBlockType expirationBlock; // @synthesize expirationBlock=_expirationBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id expirationObserver; // @synthesize expirationObserver=_expirationObserver;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void)invalidate;	// IMP=0x000000010007e9a8
- (void)_expireBackgroundTask;	// IMP=0x000000010007e7b8
@property(retain, nonatomic) BKSProcessAssertion *bkProcessAssertion; // @synthesize bkProcessAssertion=_bkProcessAssertion;
- (id)_onQueueGetBkProcessAssertion;	// IMP=0x000000010007e654
- (void)_onQueueSetBkProcessAssertion:(id)arg1;	// IMP=0x000000010007e3b0
- (void)dealloc;	// IMP=0x000000010007e320
- (id)description;	// IMP=0x000000010007e28c
- (id)initWithExpirationBlock:(CDUnknownBlockType)arg1 debugDescription:(id)arg2;	// IMP=0x000000010007de90

@end

