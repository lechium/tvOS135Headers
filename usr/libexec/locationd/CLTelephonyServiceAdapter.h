//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLTelephonyServiceProtocol-Protocol.h"

@class NSString;

@interface CLTelephonyServiceAdapter : CLNotifierServiceAdapter <CLTelephonyServiceProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100123e50
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100123e2c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100871b8c
+ (_Bool)isSupported;	// IMP=0x0000000100127eb0
- (void)sendNotificationToClients:(id)arg1 notificationData:(id)arg2;	// IMP=0x0000000100127eac
- (_Bool)syncgetServingCdmaCell:(struct CdmaCell *)arg1;	// IMP=0x0000000100127af0
- (_Bool)syncgetServingGsmCell:(struct Cell *)arg1;	// IMP=0x0000000100127a58
- (_Bool)syncgetServingCells:(struct vector<CLCell, std::__1::allocator<CLCell>> *)arg1 addNeighborCells:(_Bool)arg2;	// IMP=0x0000000100127940
- (void)dumpLogWithReason:(id)arg1;	// IMP=0x0000000100127670
- (void)resetModemWithReason:(id)arg1;	// IMP=0x00000001001272b4
- (_Bool)syncgetSignalStrength:(int *)arg1;	// IMP=0x0000000100127028
- (_Bool)syncgetCopyPhoneNumber:(id *)arg1;	// IMP=0x0000000100126cec
- (_Bool)syncgetCopyIMSI:(id *)arg1;	// IMP=0x00000001001269c0
- (_Bool)syncgetCopyServingProviderFromCarrierBundle:(id *)arg1;	// IMP=0x0000000100126694
- (_Bool)syncgetCopyServingProvider:(id *)arg1;	// IMP=0x00000001001265ec
- (_Bool)syncgetCopyServingOperatorAbbreviated:(id *)arg1;	// IMP=0x0000000100126544
- (_Bool)syncgetCopyServingOperator:(id *)arg1;	// IMP=0x0000000100126218
- (_Bool)syncgetRefreshCellMonitor;	// IMP=0x00000001001261f8
- (_Bool)syncgetActiveEmergencyCall:(_Bool *)arg1;	// IMP=0x0000000100125e7c
- (_Bool)syncgetActiveCall:(_Bool *)arg1;	// IMP=0x0000000100125e38
- (_Bool)syncgetLastKnownServingMCC:(int *)arg1;	// IMP=0x0000000100125e04
- (_Bool)syncgetLastKnownSubscriberMCC:(int *)arg1;	// IMP=0x0000000100125b54
- (int)syncgetCellTransmitStatus;	// IMP=0x0000000100125b34
- (int)syncgetRegistrationStatus;	// IMP=0x0000000100125a08
- (void)fetchSignalStrengthMeasurementsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001259fc
- (int)syncgetRadioAccessTechnology;	// IMP=0x00000001001259ac
- (_Bool)syncgetIsRegisteredOnCell;	// IMP=0x0000000100125988
- (_Bool)syncgetDetectedCells:(struct vector<CLCell, std::__1::allocator<CLCell>> *)arg1;	// IMP=0x0000000100124ddc
- (void)queryForCtclNotification:(const struct __CFString *)arg1;	// IMP=0x0000000100124d6c
- (void)fetchUmtsApnWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100124d60
- (id)syncgetRegistrationInfoDictionary;	// IMP=0x0000000100124c08
- (_Bool)syncgetUplinkFrequency:(float *)arg1 andBandwidth:(float *)arg2;	// IMP=0x0000000100124bc8
- (void)disableWakeOnCellChange;	// IMP=0x0000000100124acc
- (void)enableWakeOnCellChange;	// IMP=0x00000001001249b8
- (void)assertCommCenter:(int)arg1 with:(int)arg2;	// IMP=0x000000010012483c
- (_Bool)syncgetCampOnlyState;	// IMP=0x0000000100124510
- (void)requestCamping:(_Bool)arg1;	// IMP=0x00000001001243e4
- (void)fetchActiveOrHeldWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010012412c
- (void)fetchIsCellAvailableWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001240ec
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001240b0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010012406c
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100124038
- (struct CLTelephonyService *)adaptee;	// IMP=0x0000000100123ffc
- (void)endService;	// IMP=0x0000000100123fd8
- (void)beginService;	// IMP=0x0000000100123f0c
- (id)init;	// IMP=0x0000000100123ec8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

