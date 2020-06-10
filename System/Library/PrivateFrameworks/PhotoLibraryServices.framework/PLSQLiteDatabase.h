/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLSQLiteDatabase : NSObject {

	sqlite3Ref _database;

}
+(id)openDatabaseAtPath:(id)arg1 ;
+(sqlite3Ref)_openSQLiteDatabaseAtPath:(const char*)arg1 ;
-(BOOL)close;
-(BOOL)commitTransaction;
-(BOOL)rollbackTransaction;
-(BOOL)beginExclusiveTransaction;
-(id)initWithOpenedSQLite3Database:(sqlite3Ref)arg1 ;
-(BOOL)beginDeferredTransaction;
-(BOOL)prepareAndEvaluateStatement:(id)arg1 ;
-(BOOL)prepareStatement:(id)arg1 andStepThroughResultsWithBlock:(/*^block*/id)arg2 ;
-(sqlite3_stmtRef)_prepareStatement:(id)arg1 ;
-(BOOL)_execute:(id)arg1 ;
@end

