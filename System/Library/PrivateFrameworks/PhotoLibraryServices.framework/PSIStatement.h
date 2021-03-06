/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIStatement : NSObject {

	sqlite3_stmtRef _stmt;

}

@property (readonly) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
-(void)dealloc;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(sqlite3_stmtRef)stmt;
-(id)initWithSQLite3Stmt:(sqlite3_stmtRef)arg1 ;
-(void)finalizze;
-(id)textAtColumn:(unsigned long long)arg1 ;
-(double)doubleAtColumn:(unsigned long long)arg1 ;
-(long long)int64AtColumn:(unsigned long long)arg1 ;
@end

