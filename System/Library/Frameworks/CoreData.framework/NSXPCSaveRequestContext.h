/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStore, NSSaveChangesRequest, NSDictionary, NSManagedObjectContext, NSMutableDictionary, NSSet;

@interface NSXPCSaveRequestContext : NSObject {

	NSXPCStore* _store;
	NSSaveChangesRequest* _request;
	NSDictionary* _metadata;
	NSManagedObjectContext* _context;
	NSMutableDictionary* _changeCache;
	unsigned long long _interrupts;
	BOOL _forceUpdates;

}

@property (nonatomic,readonly) BOOL forceUpdates;                        //@synthesize forceUpdates=_forceUpdates - In the implementation block
@property (assign,nonatomic) unsigned long long interrupts;              //@synthesize interrupts=_interrupts - In the implementation block
@property (nonatomic,readonly) NSDictionary * changeCache; 
@property (nonatomic,readonly) NSSet * rowsToDelete; 
-(void)dealloc;
-(id)request;
-(NSDictionary *)changeCache;
-(NSSet *)rowsToDelete;
-(id)managedObjectContext;
-(id)newEncodedSaveRequest;
-(void)setInterrupts:(unsigned long long)arg1 ;
-(id)initForStore:(id)arg1 request:(id)arg2 metadata:(id)arg3 forceInsertsToUpdates:(BOOL)arg4 context:(id)arg5 ;
-(unsigned long long)interrupts;
-(void)_updateRollbackCacheForObjectWithID:(id)arg1 relationship:(id)arg2 withValuesFrom:(id)arg3 ;
-(id)_cacheNodePropertiesFromObject:(id)arg1 ;
-(void)_addRowForInsertOrUpdate:(id)arg1 ;
-(id)_encodeObjectValues:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_encodeObjectsForSave:(id)arg1 forDelete:(BOOL)arg2 ;
-(id)rowForID:(id)arg1 ;
-(BOOL)forceUpdates;
@end

