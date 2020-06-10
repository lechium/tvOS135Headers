//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OTCuttlefishAccountStateHolder : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    NSString *_contextID;	// 32 = 0x20
    NSMutableSet *_monitors;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100179afc
@property(retain) NSMutableSet *monitors; // @synthesize monitors=_monitors;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)asyncNotifyAccountStateChanges:(id)arg1 from:(id)arg2;	// IMP=0x0000000100179968
- (_Bool)_onqueuePersistAccountChanges:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000100179780
- (_Bool)persistOctagonJoinAttempt:(int)arg1 error:(id *)arg2;	// IMP=0x0000000100179728
- (_Bool)persistLastHealthCheck:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100179684
- (_Bool)persistAccountChanges:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000100179498
- (_Bool)persistNewEpoch:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000100179440
- (_Bool)persistNewAccountState:(int)arg1 optionalAltDSID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100179394
- (_Bool)persistNewTrustState:(int)arg1 error:(id *)arg2;	// IMP=0x000000010017933c
- (_Bool)persistNewEgoPeerID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100179298
- (id)lastHealthCheckupDate:(id *)arg1;	// IMP=0x00000001001791bc
- (int)fetchPersistedJoinAttempt:(id *)arg1;	// IMP=0x0000000100179110
- (id)getEgoPeerID:(id *)arg1;	// IMP=0x0000000100178ff4
- (id)_onqueueLoadOrCreateAccountMetadata:(id *)arg1;	// IMP=0x0000000100178e30
- (id)loadOrCreateAccountMetadata:(id *)arg1;	// IMP=0x0000000100178cd8
- (void)registerNotification:(id)arg1;	// IMP=0x0000000100178c6c
- (id)initWithQueue:(id)arg1 container:(id)arg2 context:(id)arg3;	// IMP=0x0000000100178b50

@end

