/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKAuthenticatorDelegate <NSObject>
@optional
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)presentPassphraseViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)authenticatorDidEncounterMatchMiss:(id)arg1;
-(void)authenticatorWillRestartEvaluation:(id)arg1;
-(void)authenticatorDidEncounterFingerOn:(id)arg1;
-(void)authenticatorDidEncounterFingerOff:(id)arg1;
-(void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
-(void)authenticatorDidEncounterBiometricLockout:(id)arg1;
-(void)authenticatorDidActivateTouchID:(id)arg1;
-(void)authenticatorDidDeactivateTouchID:(id)arg1 status:(long long)arg2;
-(id)passcodeViewController;
-(void)dismissPasscodeViewController;
-(id)passphraseViewController;
-(void)dismissPassphraseViewController;

@end
