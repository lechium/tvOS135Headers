//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBCloudSyncOperationDelegate-Protocol.h"

@class ACAccount, HBCloudSyncDatabaseFacade, NSError, NSString, TVSPreferences, TVSStateMachine;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HBCloudSyncManager : NSObject <HBCloudSyncOperationDelegate>
{
    id _headboardPrefsObserverToken;	// 8 = 0x8
    _Bool _isDeviceToCloudSyncRequestPending;	// 16 = 0x10
    _Bool _didPerformMigrationCheck;	// 17 = 0x11
    NSError *_cloudSyncOperationError;	// 24 = 0x18
    TVSStateMachine *_stateMachine;	// 32 = 0x20
    TVSPreferences *_sharedHeadBoardPreferences;	// 40 = 0x28
    ACAccount *_activeAccount;	// 48 = 0x30
    HBCloudSyncDatabaseFacade *_cloudSyncDatabaseFacade;	// 56 = 0x38
    long long _totalRetryAttemptsMadePostFailure;	// 64 = 0x40
    double _waitTimeBeforeRetryingSyncOperation;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_cloudSyncManagerQueue;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_cloudSyncTimerSource;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_cloudSyncOperationRetryTimerSource;	// 96 = 0x60
}

+ (id)sharedCloudSyncManager;	// IMP=0x0000000100029498
+ (void)initialize;	// IMP=0x0000000100029434
- (void).cxx_destruct;	// IMP=0x000000010002e1a4
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cloudSyncOperationRetryTimerSource; // @synthesize cloudSyncOperationRetryTimerSource=_cloudSyncOperationRetryTimerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cloudSyncTimerSource; // @synthesize cloudSyncTimerSource=_cloudSyncTimerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cloudSyncManagerQueue; // @synthesize cloudSyncManagerQueue=_cloudSyncManagerQueue;
@property(nonatomic) double waitTimeBeforeRetryingSyncOperation; // @synthesize waitTimeBeforeRetryingSyncOperation=_waitTimeBeforeRetryingSyncOperation;
@property(nonatomic) long long totalRetryAttemptsMadePostFailure; // @synthesize totalRetryAttemptsMadePostFailure=_totalRetryAttemptsMadePostFailure;
@property(nonatomic) _Bool didPerformMigrationCheck; // @synthesize didPerformMigrationCheck=_didPerformMigrationCheck;
@property(nonatomic) _Bool isDeviceToCloudSyncRequestPending; // @synthesize isDeviceToCloudSyncRequestPending=_isDeviceToCloudSyncRequestPending;
@property(retain, nonatomic) HBCloudSyncDatabaseFacade *cloudSyncDatabaseFacade; // @synthesize cloudSyncDatabaseFacade=_cloudSyncDatabaseFacade;
@property(retain, nonatomic) ACAccount *activeAccount; // @synthesize activeAccount=_activeAccount;
@property(retain, nonatomic) TVSPreferences *sharedHeadBoardPreferences; // @synthesize sharedHeadBoardPreferences=_sharedHeadBoardPreferences;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSError *cloudSyncOperationError; // @synthesize cloudSyncOperationError=_cloudSyncOperationError;
- (id)_updateInternalCloudSyncState;	// IMP=0x000000010002e030
- (id)_beginCloudToDeviceSync;	// IMP=0x000000010002dfec
- (id)_beginDeviceToCloudSync;	// IMP=0x000000010002dfa8
- (void)_resetRetryParameters;	// IMP=0x000000010002df3c
- (void)_cancelRetryTimerSource;	// IMP=0x000000010002df00
- (void)_cancelTimerSource;	// IMP=0x000000010002dec4
- (_Bool)_fireDeviceToCloudSyncOperationIfPending;	// IMP=0x000000010002dd54
- (void)_scheduleSyncOperationRetryTimerForPostingEvent:(id)arg1;	// IMP=0x000000010002d9c8
- (void)_scheduleCloudSyncTimerWithDefaultTimeOut;	// IMP=0x000000010002d724
- (void)_retryFailedOperationByPostingEvent:(id)arg1;	// IMP=0x000000010002d458
- (_Bool)_shouldRetryFailedOperation;	// IMP=0x000000010002d3f4
- (void)cloudSyncOperationDidCompleteSuccessfully:(id)arg1;	// IMP=0x000000010002d1d0
- (void)cloudSyncOperationDidFailWithError:(id)arg1;	// IMP=0x000000010002d050
- (void)cloudSyncOperationWillBegin;	// IMP=0x000000010002cfe0
- (void)_initializeStateMachine;	// IMP=0x000000010002a3f4
- (void)networkUpdated:(id)arg1;	// IMP=0x000000010002a2fc
- (_Bool)isiCloudSyncEnabled;	// IMP=0x000000010002a194
- (void)enableCloudSync;	// IMP=0x000000010002a0f0
- (void)disableCloudSync;	// IMP=0x000000010002a04c
- (void)startSyncingCloudChangesToDevice:(_Bool)arg1;	// IMP=0x0000000100029e8c
- (void)saveAndStartSyncingDeviceToCloud;	// IMP=0x0000000100029d5c
- (void)dealloc;	// IMP=0x0000000100029cd4
- (id)init;	// IMP=0x0000000100029504

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
