/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDAccountManagerObserver <NSObject>
@optional
-(void)accountManager:(id)arg1 didAddAccount:(id)arg2;
-(void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;
-(void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;
-(void)accountManager:(id)arg1 didAddAccountEvent:(id)arg2;
-(void)accountManager:(id)arg1 didUpdateAccountEvent:(id)arg2;
-(void)accountManager:(id)arg1 didRemoveAccountEvent:(id)arg2;
-(void)accountManager:(id)arg1 didSetScheduledPayments:(id)arg2 forAccountIdentifier:(id)arg3;
-(void)accountManager:(id)arg1 statementsChangedForAccountIdentifier:(id)arg2;
-(void)accountManager:(id)arg1 scheduledPaymentsChangedForAccountIdentifier:(id)arg2;

@end

