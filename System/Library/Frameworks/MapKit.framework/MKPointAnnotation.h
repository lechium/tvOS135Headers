/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/MKAnnotationRepresentation.h>
#import <libobjc.A.dylib/MKAnnotationPrivate.h>

@class CLLocation, VKCustomFeature, NSString;

@interface MKPointAnnotation : MKShape <MKGeoJSONObject, MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate> {

	CLLocationCoordinate2D _coordinate;
	long long _representation;
	VKCustomFeature* _customFeature;
	CLLocation* _location;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long representation;                       //@synthesize representation=_representation - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double course; 
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,retain) CLLocation * location;                          //@synthesize location=_location - In the implementation block
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(void)prepareForReuse;
-(id)annotation;
-(BOOL)isPersistent;
-(id)feature;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(long long)representation;
-(id)reuseIdentifier;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)viewRepresentation;
-(BOOL)_shouldDeselectWhenDragged;
-(void)_setHiddenForOffscreen:(BOOL)arg1 ;
-(BOOL)shouldRepresentSelf;
-(void)_invalidateCachedCoordinate;
-(BOOL)_isPendingSelectionAnimated;
-(BOOL)showsBalloonCallout;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)setShowsBalloonCallout:(BOOL)arg1 ;
-(void)setRepresentation:(long long)arg1 ;
@end

