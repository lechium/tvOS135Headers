/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class NSObject, NSCache, NSHashTable;

@interface BSSqliteDatabaseConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _queue_dbConnection;
	NSCache* _queue_queryCache;
	NSHashTable* _queue_observers;

}
+(int)_sqliteOpenFlagsForDataProtectionClass:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)close;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)performSyncWithDatabase:(/*^block*/id)arg1 ;
-(void)performWithDatabase:(/*^block*/id)arg1 ;
-(id)lastErrorMessage;
-(id)_initWithSqlitePath:(id)arg1 dataProtectionClass:(unsigned long long)arg2 ;
-(void)_closeConnection;
-(id)_sqliteErrorForResult:(int)arg1 errorMessage:(id)arg2 ;
-(void)_queue_close;
-(id)initWithInMemoryDatabase;
-(id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2 ;
-(id)prepareStatement:(id)arg1 ;
-(BOOL)truncateDatabaseAndReturnError:(out id*)arg1 ;
@end

