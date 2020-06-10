//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLGyroCalibrationDatabaseProtocol-Protocol.h"

@class NSString;

@interface CLGyroCalibrationDatabaseLocationdAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x000000010016149c
+ (id)getSilo;	// IMP=0x0000000100161274
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100161250
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100873394
- (int)syncgetNumTemperatures;	// IMP=0x000000010016178c
- (_Bool)syncgetWipeDatabase;	// IMP=0x0000000100161768
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100161720
- (_Bool)syncgetInsertWithBias:(const CDStruct_869f9c67 *)arg1 variance:(const CDStruct_869f9c67 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;	// IMP=0x00000001001616cc
- (double)syncgetLastMiniCalibration;	// IMP=0x0000000100161690
- (_Bool)syncgetSupportsMiniCalibration;	// IMP=0x000000010016166c
- (int)syncgetNonFactoryRoundCount;	// IMP=0x0000000100161648
- (_Bool)syncgetBiasFit:(CDStruct_4d1f5584 *)arg1;	// IMP=0x0000000100161614
- (void)startFactoryGYTT;	// IMP=0x00000001001615f0
- (int)syncgetMaxDynamicTemperature;	// IMP=0x00000001001615cc
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_869f9c67 *)arg1 slope:(CDStruct_869f9c67 *)arg2 l2Error:(CDStruct_869f9c67 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_869f9c67 *)arg5 deltaSlope:(CDStruct_869f9c67 *)arg6 deltaError:(CDStruct_869f9c67 *)arg7 isDeltaDynamic:(_Bool)arg8;	// IMP=0x0000000100161500
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100161460
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010016141c
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001613e8
- (struct CLGyroCalibrationDatabase *)adaptee;	// IMP=0x00000001001613ac
- (void)endService;	// IMP=0x0000000100161388
- (void)beginService;	// IMP=0x0000000100161330
- (id)init;	// IMP=0x00000001001612ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
