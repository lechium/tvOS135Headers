/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class GEOPDLinkedPlace, GEOMapItemIdentifier, GEOFeatureStyleAttributes;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {

	GEOPDLinkedPlace* _linkedPlace;
	GEOMapItemIdentifier* _identifier;
	GEOFeatureStyleAttributes* _styleAttributes;

}
-(id)name;
-(id)description;
-(BOOL)isValid;
-(id)_identifier;
-(SCD_Struct_GE32)coordinate;
-(int)referenceFrame;
-(unsigned long long)_muid;
-(id)_styleAttributes;
-(BOOL)_hasMUID;
-(int)_resultProviderID;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)_hasResultProviderID;
-(BOOL)_isInLinkedPlaceRelationship;
-(id)initWithLinkedPlace:(id)arg1 ;
@end
