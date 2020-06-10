/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSDictionary, AMSSQLiteStatement;

@interface AMSSQLiteCursor : NSObject {

	NSDictionary* _columnIndexByName;
	sqlite3_stmtRef _statement;
	AMSSQLiteStatement* _statementWrapper;

}

@property (nonatomic,readonly) long long numberOfColumns; 
-(id)initWithStatement:(id)arg1 ;
-(long long)numberOfColumns;
-(long long)int64ForColumnIndex:(int)arg1 ;
-(id)stringForColumnIndex:(int)arg1 ;
-(id)numberForColumnIndex:(int)arg1 ;
-(int)intForColumnIndex:(int)arg1 ;
-(id)dataForColumnIndex:(int)arg1 ;
-(double)doubleForColumnIndex:(int)arg1 ;
-(id)stringForColumnName:(id)arg1 ;
-(id)dataForColumnName:(id)arg1 ;
-(double)doubleForColumnName:(id)arg1 ;
-(int)intForColumnName:(id)arg1 ;
-(long long)int64ForColumnName:(id)arg1 ;
-(id)numberForColumnName:(id)arg1 ;
-(int)columnIndexForColumnName:(id)arg1 ;
-(id)dateForColumnIndex:(int)arg1 ;
-(id)URLForColumnIndex:(int)arg1 ;
-(id)dateForColumnName:(id)arg1 ;
-(id)URLForColumnName:(id)arg1 ;
-(int)_columnTypeForColumnIndex:(int)arg1 ;
@end

