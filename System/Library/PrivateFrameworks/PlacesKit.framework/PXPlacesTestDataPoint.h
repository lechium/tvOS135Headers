/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesGeotaggable.h>

@class NSString;

@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable> {

	CLLocationCoordinate2D _coordinate;
	NSString* _name;

}

@property (readonly) CGImageRef image; 
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(CLLocationCoordinate2D)coordinate;
-(CGImageRef)image;
-(long long)compareTo:(id)arg1 ;
-(id)initWithName:(id)arg1 location:(CLLocationCoordinate2D)arg2 ;
@end
