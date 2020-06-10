/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDPDTelemetryController : NSObject
+(id)sharedInstance;
-(void)pcsAlreadyMigrated;
-(void)pcsMigrationSucceeded;
-(void)pcsMigrationFailed;
-(void)pcsRollbackSucceeded;
-(void)pcsRollbackFailed;
-(void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(BOOL)arg2 ;
-(void)signInFailedDueIncorrectICSCAttempts;
-(void)stateMachineFailureDueToSyncFailure;
-(void)didAttemptEscrowPreRecord;
-(void)didChangeLocalSecret;
-(void)didRemoveLocalSecret;
-(void)stateMachineStartedFromClient:(unsigned long long)arg1 ;
-(void)signInWithUserElectingResetProtectedData;
-(void)signInWithUserSkippingFlow;
-(void)piggybackAttempt;
-(void)piggybackSuccess;
-(void)didLockAccount;
-(void)didUnlockAccount;
-(void)signInFailedDueToLockedAccount;
@end

