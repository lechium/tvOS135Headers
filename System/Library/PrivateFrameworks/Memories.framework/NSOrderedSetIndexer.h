/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOrderedSet, NSIndexSet;

@interface NSOrderedSetIndexer : NSObject {

	NSOrderedSet* _initialOrderedSet;
	NSOrderedSet* _finalOrderedSet;
	NSIndexSet* _insertedIndexesAfterDeletions;
	NSIndexSet* _deletedIndexesBeforeInsertions;

}

@property (nonatomic,retain) NSIndexSet * insertedIndexesAfterDeletions;               //@synthesize insertedIndexesAfterDeletions=_insertedIndexesAfterDeletions - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedIndexesBeforeInsertions;              //@synthesize deletedIndexesBeforeInsertions=_deletedIndexesBeforeInsertions - In the implementation block
@property (nonatomic,retain) NSOrderedSet * initialOrderedSet;                         //@synthesize initialOrderedSet=_initialOrderedSet - In the implementation block
@property (nonatomic,retain) NSOrderedSet * finalOrderedSet;                           //@synthesize finalOrderedSet=_finalOrderedSet - In the implementation block
+(id)indexerWithInitialSet:(id)arg1 finalSet:(id)arg2 ;
-(void)analyze;
-(NSIndexSet *)insertedIndexesAfterDeletions;
-(NSIndexSet *)deletedIndexesBeforeInsertions;
-(void)setInsertedIndexesAfterDeletions:(NSIndexSet *)arg1 ;
-(void)setDeletedIndexesBeforeInsertions:(NSIndexSet *)arg1 ;
-(id)initWithInitialSet:(id)arg1 finalSet:(id)arg2 ;
-(void)setInitialOrderedSet:(NSOrderedSet *)arg1 ;
-(void)setFinalOrderedSet:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)initialOrderedSet;
-(NSOrderedSet *)finalOrderedSet;
@end

