/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSData, NSNumber, NSString, NSSet, RTMapItemMO;

@interface RTLearnedPlaceMO : RTCloudManagedObject

@property (nonatomic,retain) id<GEOMapItem> mapItemGeoMapItem; 
@property (nonatomic,retain) NSData * mapItemGeoMapItemHandle; 
@property (nonatomic,copy) NSNumber * mapItemSource; 
@property (nonatomic,copy) NSString * customLabel; 
@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * typeSource; 
@property (nonatomic,retain) NSSet * visits; 
@property (nonatomic,retain) RTMapItemMO * mapItem; 
+(id)fetchRequest;
+(id)managedObjectWithPlace:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithPlace:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)fetchRequestSortedByCreation;
-(void)didSave;
@end
