//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLRunningAggregatorAWDServiceProtocol-Protocol.h"

@class NSString;

@interface CLRunningAggregatorAWD : CLIntersiloService <CLRunningAggregatorAWDServiceProtocol>
{
    _Bool fHasRun;	// 8 = 0x8
    _Bool fInSession;	// 9 = 0x9
    struct deque<std::__1::pair<double, double>, std::__1::allocator<std::__1::pair<double, double>>> fStepWindow;	// 16 = 0x10
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::__1::default_delete<CLStepCountNotifier_Type::Client>> fStepCountClient;	// 64 = 0x40
}

+ (id)getSilo;	// IMP=0x00000001004db2bc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001004db298
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100892d80
- (id).cxx_construct;	// IMP=0x00000001004dba60
- (void).cxx_destruct;	// IMP=0x00000001004dba18
- (void)checkForRunningThreshold;	// IMP=0x00000001004db81c
- (void)clearStepArray;	// IMP=0x00000001004db80c
- (void)ageOutStepArray;	// IMP=0x00000001004db788
- (void)updateSession:(long long)arg1;	// IMP=0x00000001004db73c
- (void)onStepNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x00000001004db5a4
- (_Bool)syncgetCompanionOnlyNoGPSRun;	// IMP=0x00000001004db58c
- (void)endService;	// IMP=0x00000001004db530
- (void)beginService;	// IMP=0x00000001004db378
- (id)init;	// IMP=0x00000001004db334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

