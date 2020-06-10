/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, MFSQLiteConnectionPool, MFSQLiteConnectionConfiguration;

@interface MFSQLiteConnection : NSObject {

	sqlite3Ref _db;
	NSString* _databaseName;
	CFDictionaryRef _statementCache;
	void* _ICUSearchContext;
	void* _CPSearchContext;
	long long _transactionType;
	unsigned long long _transactionCount;
	MFSQLiteConnectionPool* _pool;
	MFSQLiteConnectionConfiguration* _configuration;

}

@property (nonatomic,copy) MFSQLiteConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) MFSQLiteConnectionPool * pool;                       //@synthesize pool=_pool - In the implementation block
@property (nonatomic,readonly) sqlite3Ref db;                                            //@synthesize db=_db - In the implementation block
-(void)dealloc;
-(int)open;
-(void)close;
-(MFSQLiteConnectionConfiguration *)configuration;
-(void)setConfiguration:(MFSQLiteConnectionConfiguration *)arg1 ;
-(int)beginTransaction;
-(BOOL)isOpen;
-(sqlite3Ref)db;
-(id)initWithConfiguration:(id)arg1 ;
-(int)commitTransaction;
-(void)flush;
-(int)rollbackTransaction;
-(int)beginTransactionWithType:(long long)arg1 ;
-(MFSQLiteConnectionPool *)pool;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(const char*)_vfsModuleName;
-(void)_makeCompletePath;
-(void)_fixFilePermission;
-(void)setPool:(MFSQLiteConnectionPool *)arg1 ;
@end

