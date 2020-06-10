/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariCore/SafariCore-Structs.h>
@interface WBSSQLiteRow : NSObject {

	sqlite3_stmtRef _handle;

}
-(id)init;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(int)intAtIndex:(unsigned long long)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(id)initWithStatement:(id)arg1 ;
-(id)initWithCurrentRowOfEnumerator:(id)arg1 ;
-(BOOL)_isNullAtIndex:(unsigned long long)arg1 ;
-(RawData*)uncopiedRawDataAtIndex:(unsigned long long)arg1 ;
-(BOOL)boolAtIndex:(unsigned long long)arg1 ;
-(id)uncopiedDataAtIndex:(unsigned long long)arg1 ;
-(id)debugDictionaryRepresentationWithStatement:(id)arg1 ;
@end

