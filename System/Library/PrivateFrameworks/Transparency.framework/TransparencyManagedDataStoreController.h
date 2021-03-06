/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TransparencyManagedDataStore, NSPersistentContainer, NSManagedObjectContext, NSHashTable;

@interface TransparencyManagedDataStoreController : NSObject {

	Aq _sequenceId;
	BOOL _movedDatabase;
	TransparencyManagedDataStore* _dataStore;
	TransparencyManagedDataStore* _xpcQueueDataStore;
	TransparencyManagedDataStore* _mainQueueDataStore;
	NSPersistentContainer* _persistentContainer;
	NSManagedObjectContext* _topLevelContext;
	NSManagedObjectContext* _mainQueueContext;
	NSHashTable* _mocStore;

}

@property (retain) NSPersistentContainer * persistentContainer;                    //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (retain) NSManagedObjectContext * topLevelContext;                       //@synthesize topLevelContext=_topLevelContext - In the implementation block
@property (retain) NSManagedObjectContext * mainQueueContext;                      //@synthesize mainQueueContext=_mainQueueContext - In the implementation block
@property (assign) BOOL movedDatabase;                                             //@synthesize movedDatabase=_movedDatabase - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;                       //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) TransparencyManagedDataStore * xpcQueueDataStore;               //@synthesize xpcQueueDataStore=_xpcQueueDataStore - In the implementation block
@property (retain) TransparencyManagedDataStore * mainQueueDataStore;              //@synthesize mainQueueDataStore=_mainQueueDataStore - In the implementation block
@property (retain) NSHashTable * mocStore;                                         //@synthesize mocStore=_mocStore - In the implementation block
@property (readonly) BOOL loadedStore; 
@property (readonly) NSManagedObjectContext * backgroundContext; 
@property (readonly) Aq* sequenceId; 
+(void)reportCoreDataEventForEntity:(id)arg1 write:(BOOL)arg2 code:(long long)arg3 underlyingError:(id)arg4 ;
-(id)init;
-(id)bundleURL;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(NSPersistentContainer *)persistentContainer;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(NSManagedObjectContext *)backgroundContext;
-(NSManagedObjectContext *)mainQueueContext;
-(void)setMainQueueContext:(NSManagedObjectContext *)arg1 ;
-(void)loadPersistentStores;
-(void)setMocStore:(NSHashTable *)arg1 ;
-(BOOL)movedDatabase;
-(void)setTopLevelContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)topLevelContext;
-(long long)currentSequenceId:(id*)arg1 ;
-(void)handleDidSaveNotification:(id)arg1 ;
-(void)saveTopLevelContext;
-(void)setXpcQueueDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)setMainQueueDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)createContexts;
-(void)createDataStores;
-(BOOL)shouldMoveAsideDatabase:(id)arg1 ;
-(BOOL)moveAsideDatabase:(id)arg1 ;
-(void)setMovedDatabase:(BOOL)arg1 ;
-(NSHashTable *)mocStore;
-(BOOL)saveContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadedStore;
-(Aq*);
-(TransparencyManagedDataStore *)xpcQueueDataStore;
-(TransparencyManagedDataStore *)mainQueueDataStore;
@end

