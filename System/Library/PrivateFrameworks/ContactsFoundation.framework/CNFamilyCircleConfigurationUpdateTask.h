/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@protocol CNDelegateAccountSource, CNDelegateAccountSink;
@class ACAccountStore, NSMutableArray, CNResult;

@interface CNFamilyCircleConfigurationUpdateTask : CNTask {

	id<CNDelegateAccountSource> _accountSource;
	id<CNDelegateAccountSink> _accountSink;
	ACAccountStore* _accountStore;
	NSMutableArray* _delegateAccounts;
	CNResult* _result;

}

@property (nonatomic,readonly) id<CNDelegateAccountSource> accountSource;              //@synthesize accountSource=_accountSource - In the implementation block
@property (nonatomic,readonly) id<CNDelegateAccountSink> accountSink;                  //@synthesize accountSink=_accountSink - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                          //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) NSMutableArray * delegateAccounts;                      //@synthesize delegateAccounts=_delegateAccounts - In the implementation block
@property (nonatomic,retain) CNResult * result;                                        //@synthesize result=_result - In the implementation block
+(id)os_log;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(CNResult *)result;
-(void)setResult:(CNResult *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)run:(id*)arg1 ;
-(id)initWithAccountSource:(id)arg1 accountSink:(id)arg2 accountStore:(id)arg3 ;
-(void)loadDefaultSourceIfNecessary;
-(void)loadDelegateAccountsFromSource;
-(void)loadDefaultSinkIfNecessary;
-(void)updateDelegateAccounts;
-(NSMutableArray *)delegateAccounts;
-(id<CNDelegateAccountSource>)accountSource;
-(id<CNDelegateAccountSink>)accountSink;
@end

