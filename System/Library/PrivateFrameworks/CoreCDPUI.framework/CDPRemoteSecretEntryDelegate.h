/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPRemoteSecretEntryDelegate
@required
-(BOOL)performingAccountRecovery;
-(void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2;
-(void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1;
-(void)performRemoteApproval:(id)arg1;
-(void)performRecoveryKeyRecovery:(id)arg1;
-(void)performAccountReset:(id)arg1;
-(void)finishValidation:(id)arg1 withError:(id)arg2;
-(void)dismissRecoveryFlow:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2;
-(void)cancelledRemoteSecretEntry:(id)arg1;

@end

