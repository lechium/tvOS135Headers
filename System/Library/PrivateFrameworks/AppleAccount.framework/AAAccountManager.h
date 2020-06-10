/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _accounts;
	NSMutableArray* _originalAccounts;
	id _accountStoreDidChangeObserver;

}
+(id)sharedManager;
-(void)dealloc;
-(void)reloadAccounts;
-(id)accountWithIdentifier:(id)arg1 ;
-(id)accounts;
-(id)_accountStore;
-(id)primaryAccount;
-(void)updateAccount:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)accountWithPersonID:(id)arg1 ;
-(void)saveAllAccounts;
@end
