//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

@class NSMutableArray, NWInterface;

@interface NESMIKEv2VPNFallbackSession : NESMSession
{
    _Bool _fallbackIsActive;	// 8 = 0x8
    int _sleepAckCount;	// 12 = 0xc
    NSMutableArray *_childSessions;	// 16 = 0x10
    unsigned long long _predicatedInterfaceIndex;	// 24 = 0x18
    unsigned long long _advisoryInterfaceIndex;	// 32 = 0x20
    NWInterface *_primaryCellularInterface;	// 40 = 0x28
    unsigned long long _cellularIfFlags;	// 48 = 0x30
    long long _installState;	// 56 = 0x38
    NSMutableArray *_configurationOperationArray;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100077a0c
@property(retain) NSMutableArray *configurationOperationArray; // @synthesize configurationOperationArray=_configurationOperationArray;
@property _Bool fallbackIsActive; // @synthesize fallbackIsActive=_fallbackIsActive;
@property int sleepAckCount; // @synthesize sleepAckCount=_sleepAckCount;
@property long long installState; // @synthesize installState=_installState;
@property unsigned long long cellularIfFlags; // @synthesize cellularIfFlags=_cellularIfFlags;
@property(retain) NWInterface *primaryCellularInterface; // @synthesize primaryCellularInterface=_primaryCellularInterface;
@property unsigned long long advisoryInterfaceIndex; // @synthesize advisoryInterfaceIndex=_advisoryInterfaceIndex;
@property unsigned long long predicatedInterfaceIndex; // @synthesize predicatedInterfaceIndex=_predicatedInterfaceIndex;
@property(retain) NSMutableArray *childSessions; // @synthesize childSessions=_childSessions;
- (void)startFallbackSession;	// IMP=0x00000001000773d4
- (void)resetFallbackInterfaceOnServer;	// IMP=0x0000000100076d78
- (void)handleClearConfigurationResult:(id)arg1;	// IMP=0x0000000100076aac
- (void)handleSetConfigurationResult:(id)arg1 tunnelInterfaceName:(id)arg2;	// IMP=0x0000000100076848
- (_Bool)shouldDisableInitialContactForSession:(id)arg1;	// IMP=0x00000001000765fc
- (void)handleNetworkConfigurationChange:(long long)arg1;	// IMP=0x0000000100076308
- (void)uninstall;	// IMP=0x0000000100075e7c
- (void)requestUninstall:(id)arg1;	// IMP=0x0000000100075b68
- (void)requestUninstall;	// IMP=0x000000010007553c
- (void)installPended;	// IMP=0x00000001000750c0
- (void)install;	// IMP=0x000000010007496c
- (void)registerSession:(id)arg1 fromClient:(id)arg2 fromSession:(id)arg3;	// IMP=0x0000000100074404
- (void)requestInstallForSession:(id)arg1 exclusive:(_Bool)arg2;	// IMP=0x00000001000740d4
- (void)requestInstall;	// IMP=0x00000001000739ac
- (void)setLastDisconnectErrorFromSession:(id)arg1 lastDisconnectError:(id)arg2;	// IMP=0x0000000100073798
- (void)setLastStopReasonFromSession:(id)arg1 lastStopReason:(int)arg2;	// IMP=0x00000001000735ac
- (void)setStatusFromSession:(id)arg1 andStatus:(int)arg2;	// IMP=0x0000000100073198
- (void)setStatus:(int)arg1;	// IMP=0x0000000100072f30
- (int)parentStatus:(int)arg1 secondStatus:(int)arg2;	// IMP=0x0000000100072978
- (void)prepareNetwork:(id)arg1;	// IMP=0x00000001000723d0
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x00000001000720d4
- (void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 previousFlags:(unsigned long long)arg3;	// IMP=0x0000000100071ec8
- (id)copyExtendedStatus;	// IMP=0x00000001000717e4
- (id)copyStatistics;	// IMP=0x0000000100071190
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x00000001000710c0
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x0000000100070678
- (void)ackSleep:(id)arg1;	// IMP=0x0000000100070560
- (void)handleUserSwitch;	// IMP=0x0000000100070288
- (void)handleUserLogout;	// IMP=0x000000010006ffb0
- (void)handleSleepTime:(double)arg1;	// IMP=0x000000010006fcbc
- (_Bool)handleSleep;	// IMP=0x000000010006f998
- (void)handleWakeup;	// IMP=0x000000010006f6c0
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x000000010006f3a4
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010006f15c
- (void)handleInitializeState;	// IMP=0x000000010006ee64
- (id)tunnelInstallState2String:(long long)arg1;	// IMP=0x000000010006ee04
- (id)tunnelSessionType2String:(id)arg1;	// IMP=0x000000010006ecc4
- (int)type;	// IMP=0x000000010006ecbc
- (void)dealloc;	// IMP=0x000000010006ec44
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010006e4e0
- (_Bool)startMonitoringPrimaryCellularInterface;	// IMP=0x000000010006e324
- (void)handleChangeEventForFallback:(_Bool)arg1;	// IMP=0x000000010006e15c
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andSessionType:(int)arg4;	// IMP=0x000000010006dd14

@end

