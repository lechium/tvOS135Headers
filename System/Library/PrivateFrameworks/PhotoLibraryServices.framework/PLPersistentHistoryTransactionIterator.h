/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSPersistentHistoryToken, NSManagedObjectContext;

@interface PLPersistentHistoryTransactionIterator : NSObject {

	NSArray* _transactions;
	unsigned long long _transactionIndex;
	NSPersistentHistoryToken* _lastIteratedToken;
	NSPersistentHistoryToken* _initialToken;
	unsigned long long _count;
	NSManagedObjectContext* _context;

}

@property (nonatomic,copy,readonly) NSPersistentHistoryToken * initialToken;                   //@synthesize initialToken=_initialToken - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                                       //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSPersistentHistoryToken * lastIteratedToken;              //@synthesize lastIteratedToken=_lastIteratedToken - In the implementation block
+(id)iteratorSinceToken:(id)arg1 withManagedObjectObjectContext:(id)arg2 error:(id*)arg3 ;
+(id)iteratorSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 managedObjectObjectContext:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)count;
-(NSManagedObjectContext *)context;
-(void)enumerateRemainingTransactionsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithInitialToken:(id)arg1 transactions:(id)arg2 managedObjectObjectContext:(id)arg3 ;
-(BOOL)_hasMoreTransactions;
-(BOOL)_enumerateOneTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)_safeTransactionAtIndex:(unsigned long long)arg1 ;
-(NSPersistentHistoryToken *)initialToken;
-(NSPersistentHistoryToken *)lastIteratedToken;
@end
