//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLStepCountNotifierProtocol-Protocol.h"

@class NSString;

@interface CLStepCountNotifierAdapter : CLNotifierServiceAdapter <CLStepCountNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001007ac3a8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001007ac384
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001008ad57c
+ (_Bool)isSupported;	// IMP=0x00000001007acfc0
- (void)resumeCalorimetryAfterPendingStepCountNotifications;	// IMP=0x00000001007ace90
- (void)getPedometerBinsAndHistoryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001007acd50
- (void)getPedometerCalibrationBins:(long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001007acc14
- (_Bool)syncgetIsStrideCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x00000001007acbdc
- (id)syncgetStepCadenceToStrideLengthDefaultBins;	// IMP=0x00000001007acb94
- (id)syncgetRawSpeedToKValueDefaultBins;	// IMP=0x00000001007acb4c
- (void)setStepCadenceToStrideLengthBins:(id)arg1;	// IMP=0x00000001007acb04
- (void)setRawSpeedToKValueBins:(id)arg1;	// IMP=0x00000001007acabc
- (id)syncgetCopyStepCadenceToStrideLengthBins;	// IMP=0x00000001007aca84
- (id)syncgetCopyRawSpeedToKValueBins;	// IMP=0x00000001007aca4c
- (int)syncgetQueryPedometerDataSince:(struct CLStepCountEntry)arg1 withResponseArray:(vector_e18d6468 *)arg2;	// IMP=0x00000001007aca14
- (id)syncgetDbUUID;	// IMP=0x00000001007ac9ec
- (void)reset;	// IMP=0x00000001007ac9b8
- (struct CLStepDistance)syncgetQueryStartTime:(double *)arg1 andStopTime:(double *)arg2;	// IMP=0x00000001007ac7a0
- (_Bool)syncgetEnabled;	// IMP=0x00000001007ac774
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000001007ac67c
- (void)strideCalibratorSetSession:(long long)arg1;	// IMP=0x00000001007ac644
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001007ac608
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001007ac5c4
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001007ac590
- (struct CLStepCountNotifier *)adaptee;	// IMP=0x00000001007ac554
- (void)endService;	// IMP=0x00000001007ac530
- (void)beginService;	// IMP=0x00000001007ac464
- (id)init;	// IMP=0x00000001007ac420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

