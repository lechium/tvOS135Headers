/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/PLJournalEntryPayloadManagedObjectUpdate.h>
#import <libobjc.A.dylib/PLValidatedManagedObject.h>

@class PLPhotoLibraryPathManager, PLPhotoLibrary, NSString;

@interface PLManagedObject : NSManagedObject <PLJournalEntryPayloadManagedObjectUpdate, PLValidatedManagedObject>

@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) BOOL isRegisteredWithUserInterfaceContext; 
@property (nonatomic,copy,readonly) NSString * shortObjectIDURI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)attributeValidationRules;
+(id)objectIDDescription;
-(void)willSave;
-(PLPhotoLibraryPathManager *)pathManager;
-(PLPhotoLibrary *)photoLibrary;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)isSyncableChange;
-(NSString *)shortObjectIDURI;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(BOOL)isRegisteredWithUserInterfaceContext;
-(id)payloadsForChangedKeys:(id)arg1 ;
-(id)payloadIDsByPayloadClassIDToDeleteOnInsert;
@end

