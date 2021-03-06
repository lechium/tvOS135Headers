/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKTransitLineMarker.h>

@protocol GEOTransitLine;
@class NSString;

@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker> {

	id<GEOTransitLine> _line;
	CLLocationCoordinate2D _locationHint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)artwork;
-(id)labelText;
-(id)mapItemIdentifier;
-(id)initWithGEOTransitLine:(id)arg1 locationHint:(CLLocationCoordinate2D)arg2 ;
@end

