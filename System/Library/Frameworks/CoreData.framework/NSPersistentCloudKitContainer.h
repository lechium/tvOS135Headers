/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentContainer.h>

@interface NSPersistentCloudKitContainer : NSPersistentContainer
+(id)discoverDefaultContainerIdentifier;
-(id)initWithName:(id)arg1 managedObjectModel:(id)arg2 ;
-(void)setPersistentStoreDescriptions:(id)arg1 ;
-(void)_loadStoreDescriptons:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)recordForManagedObjectID:(id)arg1 ;
-(id)recordsForManagedObjectIDs:(id)arg1 ;
-(BOOL)initializeCloudKitSchemaWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)recordIDForManagedObjectID:(id)arg1 ;
-(id)recordIDsForManagedObjectIDs:(id)arg1 ;
@end

