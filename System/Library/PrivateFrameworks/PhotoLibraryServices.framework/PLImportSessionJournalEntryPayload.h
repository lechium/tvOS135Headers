/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLImportSessionJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (nonatomic,readonly) NSOrderedSet * assetUUIDs; 
+(unsigned)payloadVersion;
+(id)modelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)minimumSnapshotPayloadVersion;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(NSOrderedSet *)assetUUIDs;
-(void)updateAlbum:(id)arg1 includePendingChanges:(BOOL)arg2 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
@end

