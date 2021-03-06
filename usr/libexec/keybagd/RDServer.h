//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDKeybagd-Protocol.h"
#import "RDServer-Protocol.h"

@class NSMutableDictionary, NSString;

@interface RDServer : NSObject <RDServer, BDKeybagd>
{
    int _switchState;	// 8 = 0x8
    NSMutableDictionary *_pidsToClients;	// 16 = 0x10
    NSMutableDictionary *_userToSwitchTo;	// 24 = 0x18
}

+ (id)sharedBubbleXPCInterface;	// IMP=0x000000010000d588
+ (id)sharedXPCInterface;	// IMP=0x000000010000d504
+ (id)sharedServer;	// IMP=0x000000010000d44c
- (void).cxx_destruct;	// IMP=0x000000010001547c
@property int switchState; // @synthesize switchState=_switchState;
@property(retain, nonatomic) NSMutableDictionary *userToSwitchTo; // @synthesize userToSwitchTo=_userToSwitchTo;
@property(retain, nonatomic) NSMutableDictionary *pidsToClients; // @synthesize pidsToClients=_pidsToClients;
- (void)provisionDevice:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000151f0
- (int)asidForClient:(id)arg1 withAuid:(unsigned int *)arg2 withPid:(int)arg3;	// IMP=0x00000001000151dc
- (void)registerUserPersonaObserverForPID:(int)arg1 withMachServiceName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014f6c
- (void)registerUserPersonaStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014d70
- (_Bool)notifyNextPersonaObserver:(id)arg1 withUser:(unsigned int)arg2;	// IMP=0x0000000100014ad0
- (void)_broadcastPersonaUpdates:(int)arg1 withAuid:(unsigned int)arg2;	// IMP=0x00000001000149a4
- (void)personaLogoutWithPid:(int)arg1 WithUserODuuid:(id)arg2 withUid:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000148b8
- (void)personaLoginWithPid:(int)arg1 WithUserODuuid:(id)arg2 withUid:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000147cc
- (void)fetchMultiPersonaBundleIdentifiersforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000145b0
- (void)setMultiPersonaBundlesIdentifiers:(id)arg1 forPid:(int)arg2 WithcompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014350
- (void)fetchBundleIdentifiersForPersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000140a0
- (void)setSinglePersonaBundlesIdentifiers:(id)arg1 forPersona:(id)arg2 forPid:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100013dc4
- (void)fetchPersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013b34
- (void)fetchAsidMapforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013920
- (void)fetchAllUsersPersonaListforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001370c
- (void)fetchPersonaListforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000134f8
- (void)disablePersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013220
- (void)deletePersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100012f48
- (void)createPersona:(id)arg1 passcodeData:(id)arg2 forPid:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100012b6c
- (void)reengageUserQuotaForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012a80
- (void)suspendUserQuotaForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012984
- (void)removeUserSyncTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001274c
- (void)addUserSyncTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000124ec
- (void)removeUserSyncTask:(id)arg1 forPID:(int)arg2;	// IMP=0x00000001000124dc
- (void)addUserSyncTask:(id)arg1 forPID:(int)arg2;	// IMP=0x00000001000124cc
- (id)fetchUserBlockTaskList;	// IMP=0x00000001000123f0
- (id)fetchUserSyncTaskList;	// IMP=0x0000000100012314
- (void)fetchUserSwitchBlockingTaskListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010001218c
- (void)_broadcastDeviceLoginSessionStateDidUpdate;	// IMP=0x000000010001211c
- (void)_broadcastUserSwitchTaskListDidUpdate;	// IMP=0x00000001000120ac
- (void)removeUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011e80
- (void)addUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011c90
- (void)removeUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2;	// IMP=0x0000000100011c80
- (void)addUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2;	// IMP=0x0000000100011c70
- (void)_reallySwitchUser:(_Bool)arg1;	// IMP=0x00000001000114ac
- (void)_checkIfWeShouldSwitchUser:(_Bool)arg1;	// IMP=0x0000000100011198
- (_Bool)LogoutToUser:(id)arg1;	// IMP=0x0000000100010e30
- (void)switchToUser:(id)arg1;	// IMP=0x0000000100010a14
- (void)_broadcastBubbleDidPop;	// IMP=0x00000001000109b8
- (void)StopBubbleWithPID:(int)arg1 WithUID:(unsigned int)arg2 WithStatus:(unsigned long long)arg3;	// IMP=0x00000001000108e8
- (void)removeMachServiceName:(id)arg1 withPID:(int)arg2 WithUID:(unsigned int)arg3;	// IMP=0x00000001000107dc
- (void)fetchMachServiceNameswithPID:(int)arg1 WithUID:(unsigned int)arg2 WithCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010680
- (void)resumeSyncBubbleForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001050c
- (void)terminateSyncBubbleForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001027c
- (void)loginUICheckinForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010020
- (void)loginComplete;	// IMP=0x000000010000ff30
- (_Bool)inLoginSession;	// IMP=0x000000010000fea4
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 pid:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010000fdc0
- (void)logoutToLoginSessionWithPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fb5c
- (void)switchToLoginUserWithPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f940
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 pid:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010000f8a4
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 pid:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010000f2e4
- (id)_whitelistedPreferencesKeys;	// IMP=0x000000010000f1cc
- (void)unregisterStakeholderForPID:(int)arg1 status:(unsigned long long)arg2 reason:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ef44
- (void)registerUserSyncStakeholderForPID:(int)arg1 machServiceName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ebcc
- (_Bool)inLogoutProcess;	// IMP=0x000000010000eb6c
- (_Bool)anyBubblePopClients;	// IMP=0x000000010000e9d4
- (void)registerBubblePopStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e730
- (void)registerCriticalUserSwitchStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e4dc
- (void)registerUserSwitchStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e2a4
- (id)bubbleStakeHolder;	// IMP=0x000000010000e100
- (id)criticalStakeHolder;	// IMP=0x000000010000df5c
- (void)_enumerateClientsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ddd8
- (id)_clientForPID:(int)arg1;	// IMP=0x000000010000dd28
- (void)removeBubbleClient:(id)arg1;	// IMP=0x000000010000dbcc
- (void)addBubbleClient:(id)arg1;	// IMP=0x000000010000da40
- (void)removeClient:(id)arg1;	// IMP=0x000000010000d84c
- (void)addClient:(id)arg1;	// IMP=0x000000010000d670
- (id)init;	// IMP=0x000000010000d60c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

