/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, PKAppleAccountInformation;

@interface PKAppleAccountManager : NSObject {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) PKAppleAccountInformation * appleAccountInformation; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
+(id)sharedInstance;
-(ACAccountStore *)accountStore;
-(id)_primaryAppleAccount;
-(id)_aidaAccount;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(PKAppleAccountInformation *)appleAccountInformation;
@end

