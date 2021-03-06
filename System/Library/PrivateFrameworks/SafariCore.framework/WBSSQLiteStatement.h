/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariCore/SafariCore-Structs.h>
@class WBSSQLiteDatabase, NSDictionary, NSArray;

@interface WBSSQLiteStatement : NSObject {

	WBSSQLiteDatabase* _database;
	sqlite3_stmtRef _handle;
	NSDictionary* _columnNamesToIndexes;
	NSArray* _columnNames;

}

@property (nonatomic,readonly) NSArray * columnNames; 
@property (nonatomic,readonly) NSDictionary * columnNamesToIndexes; 
@property (nonatomic,readonly) sqlite3_stmtRef handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) WBSSQLiteDatabase * database;                     //@synthesize database=_database - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(sqlite3_stmtRef)handle;
-(void)reset;
-(WBSSQLiteDatabase *)database;
-(int)execute;
-(BOOL)_isValid;
-(BOOL)execute:(id*)arg1 ;
-(id)initWithDatabase:(id)arg1 query:(id)arg2 ;
-(void)bindString:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(id)fetch;
-(id)initWithDatabase:(id)arg1 query:(id)arg2 error:(id*)arg3 ;
-(NSArray *)columnNames;
-(BOOL)fetchWithEnumerationBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)bindInt:(int)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindInt64:(long long)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindDouble:(double)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindData:(id)arg1 atParameterIndex:(unsigned long long)arg2 ;
-(void)bindNullAtParameterIndex:(unsigned long long)arg1 ;
-(NSDictionary *)columnNamesToIndexes;
@end

