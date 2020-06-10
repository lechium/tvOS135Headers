/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class PGManager, NSObject, NSMutableArray, NSArray;

@interface PHASuggestionController : NSObject {

	PGManager* _graphManager;
	NSObject*<OS_os_log> _loggingConnection;
	NSMutableArray* _existingSuggestions;
	NSMutableArray* _existingSharingSuggestions;
	NSArray* _existingMemories;

}

@property (nonatomic,readonly) NSArray * existingSuggestions; 
@property (nonatomic,retain) NSArray * existingMemories;                   //@synthesize existingMemories=_existingMemories - In the implementation block
+(unsigned long long)_retirementDelayInDaysForSuggestionType:(unsigned short)arg1 ;
+(id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg1 ;
-(NSArray *)existingMemories;
-(void)setExistingMemories:(NSArray *)arg1 ;
-(id)initWithGraphManager:(id)arg1 ;
-(NSArray *)existingSuggestions;
-(void)processExistingSuggestionsWithOptions:(id)arg1 ;
-(BOOL)shouldRetireSuggestion:(id)arg1 atDate:(id)arg2 ;
-(BOOL)shouldDeleteSuggestion:(id)arg1 atDate:(id)arg2 ;
-(id)existingSuggestionsInSuggestions:(id)arg1 atDate:(id)arg2 processExistingSuggestions:(BOOL)arg3 ;
-(id)commitSuggestions:(id)arg1 options:(id)arg2 ;
-(id)collidableMemoriesWithReferenceDate:(id)arg1 andDelay:(double)arg2 ;
-(id)collidableSuggestionsWithReferenceDate:(id)arg1 andDelay:(double)arg2 sharingSuggestionsOnly:(BOOL)arg3 ;
-(id)generateSingleAssetSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)generateSharingSuggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)generateSuggestionsWithProfile:(unsigned char)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 ;
-(id)collidableSuggestionsWithOptions:(id)arg1 ;
-(id)suggestionInfosWithOptions:(id)arg1 ;
-(void)recordRetiredSuggestions:(id)arg1 ;
-(void)recordDeletedSuggestions:(id)arg1 ;
-(void)recordCreatedSuggestions:(id)arg1 duringSession:(id)arg2 ;
@end

