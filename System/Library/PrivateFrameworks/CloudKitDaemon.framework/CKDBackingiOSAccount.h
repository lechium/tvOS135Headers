/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDBackingAccount.h>

@class ACAccountStore, ACAccount;

@interface CKDBackingiOSAccount : CKDBackingAccount {

	ACAccountStore* _accountStore;
	ACAccount* _parentAppleAccount;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ACAccount * ckAccount; 
@property (nonatomic,retain) ACAccount * parentAppleAccount;               //@synthesize parentAppleAccount=_parentAppleAccount - In the implementation block
+(id)primaryAccountInStore:(id)arg1 ;
+(id)accountWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)identifier;
-(id)username;
-(id)dsid;
-(ACAccountStore *)accountStore;
-(id)fullName;
-(id)displayedHostname;
-(id)primaryEmail;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(BOOL)isPrimaryEmailVerified;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canRenew;
-(id)cloudKitAuthTokenWithError:(id*)arg1 ;
-(id)iCloudAuthTokenWithError:(id*)arg1 ;
-(ACAccount *)ckAccount;
-(ACAccount *)parentAppleAccount;
-(id)_initWithParentAccount:(id)arg1 inStore:(id)arg2 ;
-(id)_accountCredentialForAccount:(id)arg1 withError:(id*)arg2 ;
-(void)setParentAppleAccount:(ACAccount *)arg1 ;
@end

