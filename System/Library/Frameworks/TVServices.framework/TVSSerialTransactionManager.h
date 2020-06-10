/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <TVServices/TVSTransactionManaging.h>

@protocol OS_os_log, TVSSerialTransactionManagerPolicy;
@class NSObject, BSTransaction, NSMutableArray, NSMutableOrderedSet, NSArray, NSString;

@interface TVSSerialTransactionManager : NSObject <BSTransactionObserver, TVSTransactionManaging> {

	NSObject*<OS_os_log> _log;
	BSTransaction* _runningTransaction;
	id<TVSSerialTransactionManagerPolicy> _policy;
	NSMutableArray* _mutableQueuedTransactions;
	NSMutableOrderedSet* _observerProxies;

}

@property (nonatomic,readonly) id<TVSSerialTransactionManagerPolicy> policy;              //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableQueuedTransactions;                //@synthesize mutableQueuedTransactions=_mutableQueuedTransactions - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * observerProxies;                     //@synthesize observerProxies=_observerProxies - In the implementation block
@property (nonatomic,readonly) BSTransaction * runningTransaction;                        //@synthesize runningTransaction=_runningTransaction - In the implementation block
@property (nonatomic,readonly) NSArray * queuedTransactions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                    //@synthesize log=_log - In the implementation block
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)transactionWillBegin:(id)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(id<TVSSerialTransactionManagerPolicy>)policy;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSMutableOrderedSet *)observerProxies;
-(id)initWithPolicy:(id)arg1 ;
-(void)addTransaction:(id)arg1 ;
-(NSArray *)queuedTransactions;
-(BSTransaction *)runningTransaction;
-(NSMutableArray *)mutableQueuedTransactions;
@end

