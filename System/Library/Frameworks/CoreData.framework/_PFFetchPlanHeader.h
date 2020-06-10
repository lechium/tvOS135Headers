/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSFetchRequest, NSPersistentStore, NSSQLModel, NSSQLEntity, NSManagedObjectContext, NSSQLRowCache;

@interface _PFFetchPlanHeader : NSObject {

	NSFetchRequest* fetch_request;
	unsigned requested_batch_size;
	NSPersistentStore* sql_core;
	NSSQLModel* sql_model;
	NSSQLEntity* statement_entity;
	NSManagedObjectContext* current_context;
	NSSQLRowCache* row_cache;
	/*function pointer*/void* entity_for_ek_funptr;
	struct {
		unsigned principal_entity_has_subentities : 1;
		unsigned fetch_only_primary_keys : 1;
		unsigned fetch_results_style : 3;
		unsigned use_clean_memory : 1;
		unsigned _reserved : 26;
	}  flags;

}
@end

