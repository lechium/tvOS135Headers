/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSString, NSArray, NSNumber, RTMapItemMO;

@interface RTAddressMO : RTCloudManagedObject

@property (nonatomic,copy) NSString * subThoroughfare; 
@property (nonatomic,copy) NSString * thoroughfare; 
@property (nonatomic,copy) NSString * subLocality; 
@property (nonatomic,copy) NSString * locality; 
@property (nonatomic,copy) NSString * subAdministrativeArea; 
@property (nonatomic,copy) NSString * administrativeArea; 
@property (nonatomic,copy) NSString * administrativeAreaCode; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * country; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * inlandWater; 
@property (nonatomic,copy) NSString * ocean; 
@property (nonatomic,retain) NSArray * areasOfInterest; 
@property (nonatomic,copy) NSNumber * island; 
@property (nonatomic,retain) RTMapItemMO * mapItem; 
+(id)fetchRequest;
+(id)managedObjectWithAddress:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithAddress:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

