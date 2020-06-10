/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/INCodableAttributeRelationComparing.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLPlacemarkInternal, NSString, CNPostalAddress, CLLocation, CLRegion, NSTimeZone, NSDictionary, NSArray;

@interface CLPlacemark : NSObject <INCodableAttributeRelationComparing, INJSONSerializable, NSCopying, NSSecureCoding> {

	CLPlacemarkInternal* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CNPostalAddress * postalAddress; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) CLRegion * region; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZone; 
@property (nonatomic,copy,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * thoroughfare; 
@property (nonatomic,copy,readonly) NSString * subThoroughfare; 
@property (nonatomic,copy,readonly) NSString * locality; 
@property (nonatomic,copy,readonly) NSString * subLocality; 
@property (nonatomic,copy,readonly) NSString * administrativeArea; 
@property (nonatomic,copy,readonly) NSString * subAdministrativeArea; 
@property (nonatomic,copy,readonly) NSString * postalCode; 
@property (nonatomic,copy,readonly) NSString * ISOcountryCode; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (nonatomic,copy,readonly) NSString * inlandWater; 
@property (nonatomic,copy,readonly) NSString * ocean; 
@property (nonatomic,copy,readonly) NSArray * areasOfInterest; 
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)placemarkWithGEOMapItem:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2 ;
-(id)_intents_defaultReadableDescription;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(id)_intents_indexingRepresentation;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(CLRegion *)region;
-(CLLocation *)location;
-(id)formattedAddressLines;
-(NSString *)administrativeArea;
-(NSString *)locality;
-(id)fullThoroughfare;
-(NSString *)country;
-(NSDictionary *)addressDictionary;
-(NSArray *)areasOfInterest;
-(NSString *)subAdministrativeArea;
-(NSString *)subLocality;
-(NSString *)thoroughfare;
-(NSString *)subThoroughfare;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(id)_geoMapItem;
-(CNPostalAddress *)postalAddress;
-(NSString *)postalCode;
-(id)_initWithGeoMapItem:(id)arg1 ;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 ;
-(id)initWithPlacemark:(id)arg1 ;
-(NSString *)ISOcountryCode;
@end
