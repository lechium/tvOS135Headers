/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSITable.h>

@class PSIStatement;

@interface PSIWordEmbeddingTable : PSITable {

	PSIStatement* _insertStatement;
	PSIStatement* _insertPrefixStatement;
	PSIStatement* _deleteStatement;
	PSIStatement* _deletePrefixStatement;
	PSIStatement* _checkStatement;
	PSIStatement* _selectMatchesStatement;
	PSIStatement* _selectStatement;
	CFLocaleRef _locale;
	BOOL _localeIsGerman;

}
-(void)clear;
-(id)wordEmbeddingVersion;
-(void)finalizze;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 locale:(id)arg4 ;
-(void)cacheWritableStatements;
-(void)cacheSearchableStatements;
-(id)dumpWordEmbeddingTable;
-(id)matchesForToken:(id)arg1 ;
-(id)wordEmbeddingsForToken:(id)arg1 ;
-(BOOL)isInsertedWithWord:(id)arg1 ;
-(void)insertWord:(id)arg1 synonyms:(id)arg2 ;
-(void)removeWord:(id)arg1 ;
@end

