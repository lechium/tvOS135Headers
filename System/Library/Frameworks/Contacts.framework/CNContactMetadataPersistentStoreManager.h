/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSPersistentContainer;

@interface CNContactMetadataPersistentStoreManager : NSObject {

	NSURL* _storeLocation;
	NSPersistentContainer* _container;

}

@property (nonatomic,readonly) NSURL * storeLocation;                          //@synthesize storeLocation=_storeLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
+(id)os_log;
+(id)createModel;
+(id)currentManagedObjectModel;
+(id)defaultStoreLocation;
+(id)createPersistentContainer;
-(id)init;
-(NSPersistentContainer *)container;
-(id)persistentStoreCoordinator;
-(void)performWorkWithManagedObjectContext:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithStoreLocation:(id)arg1 ;
-(BOOL)setupIfNeeded:(id*)arg1 ;
-(id)createManagedObjectContext;
-(BOOL)createStoreDirectoryIfNeeded:(id*)arg1 ;
-(NSURL *)storeLocation;
-(id)storeDescription;
@end
