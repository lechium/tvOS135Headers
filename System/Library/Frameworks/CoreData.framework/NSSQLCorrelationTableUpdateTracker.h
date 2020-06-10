/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLManyToMany;

@interface NSSQLCorrelationTableUpdateTracker : NSObject {

	NSSQLManyToMany* _relationship;
	id _inserts;
	id _deletes;
	id _masterUpdates;
	id _otherUpdates;

}

@property (nonatomic,readonly) NSSQLManyToMany * relationship;              //@synthesize relationship=_relationship - In the implementation block
-(void)dealloc;
-(NSSQLManyToMany *)relationship;
-(BOOL)hasInserts;
-(void)enumerateInsertsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasDeletes;
-(void)enumerateDeletesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasMasterReorders;
-(void)enumerateMasterReordersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMasterReordersPart2UsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasReorders;
-(void)enumerateReordersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInsertsOIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateReordersOIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMasterReordersOIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDeletesOIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)_organizeValues:(id)arg1 ;
-(id)initForRelationship:(id)arg1 ;
-(void)trackInserts:(id)arg1 deletes:(id)arg2 reorders:(id)arg3 forObjectWithID:(id)arg4 ;
-(void)trackReorders:(id)arg1 forObjectWithID:(id)arg2 ;
@end

