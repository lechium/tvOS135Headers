/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSArray;

@interface FMFetchOptions : NSObject {

	NSPredicate* _predicate;
	NSArray* _sortDescriptors;

}

@property (nonatomic,retain) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
-(id)init;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
@end

