//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_transaction, OS_xpc_object;

@interface MSDLocalMessageResponder : NSObject
{
    _Bool _demoPrepareInProgress;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcListener;	// 24 = 0x18
    NSObject<OS_xpc_object> *_connectionForPricing;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100024b88
- (void).cxx_destruct;	// IMP=0x0000000100028218
@property _Bool demoPrepareInProgress; // @synthesize demoPrepareInProgress=_demoPrepareInProgress;
@property __weak NSObject<OS_xpc_object> *connectionForPricing; // @synthesize connectionForPricing=_connectionForPricing;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (_Bool)saveOperationRequestIfNeeded:(id)arg1 server:(id)arg2 port:(id)arg3 completeBy:(int)arg4;	// IMP=0x0000000100028014
- (void)lostClientConnection:(id)arg1;	// IMP=0x0000000100027f1c
- (void)sendRebootTimeoutMessageToPricing:(int)arg1;	// IMP=0x0000000100027e44
- (void)handleMessage:(id)arg1 from:(id)arg2;	// IMP=0x0000000100025788
- (void)start;	// IMP=0x0000000100025248
- (_Bool)checkEntitlementsWithRequest:(id)arg1 from:(id)arg2;	// IMP=0x0000000100024dd0
- (id)getEntitlementsFrom:(id)arg1;	// IMP=0x0000000100024bf4

@end

