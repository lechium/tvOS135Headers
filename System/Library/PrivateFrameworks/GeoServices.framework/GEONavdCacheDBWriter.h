/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBWriter.h>

@interface GEONavdCacheDBWriter : GEODBWriter {

	sqlite3_stmtRef _sqlInsertCache;
	sqlite3_stmtRef _sqlDeleteRowForRowID;
	sqlite3_stmtRef _sqlUpdateCache;
	sqlite3_stmtRef _sqlDeleteAllRows;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(long long)_insertWithKey:(id)arg1 value:(id)arg2 ;
-(BOOL)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3 ;
-(void)_deleteRowsWithRowIDs:(id)arg1 ;
-(void)_deleteAllRows;
-(void)_openIfNecessary;
-(void)performTableCreationTasks;
-(void)performStatementPreparationTasks;
-(void)_createCacheTable;
@end

