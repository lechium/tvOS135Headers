/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSQLiteConnectionDelegate;
#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableArray, NSMapTable, ICSQLiteConnectionOptions, NSError;

@interface ICSQLiteConnection : NSObject {

	NSMutableArray* _afterTransactionBlocks;
	sqlite3Ref _database;
	id<ICSQLiteConnectionDelegate> _delegate;
	BOOL _didResetForCorruption;
	NSMapTable* _preparedStatements;
	long long _transactionDepth;
	BOOL _transactionWantsRollback;
	ICSQLiteConnectionOptions* _options;

}

@property (nonatomic,copy,readonly) NSError * currentError; 
@property (nonatomic,copy,readonly) ICSQLiteConnectionOptions * options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<ICSQLiteConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long lastChangeCount; 
-(ICSQLiteConnectionOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)open;
-(BOOL)close;
-(id<ICSQLiteConnectionDelegate>)delegate;
-(void)setDelegate:(id<ICSQLiteConnectionDelegate>)arg1 ;
-(BOOL)truncate;
-(BOOL)_open;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_close;
-(NSError *)currentError;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(void)_finalizeAllStatements;
-(BOOL)resetAfterCorruptionError;
-(BOOL)resetAfterIOError;
-(id)prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(void)dispatchAfterTransaction:(/*^block*/id)arg1 ;
-(long long)lastChangeCount;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2 ;
-(void)_flushAfterTransactionBlocks;
-(BOOL)_performResetAfterCorruptionError;
-(id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)executePreparedQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 ;
@end
