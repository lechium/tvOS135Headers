/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEORouteMatch;


@protocol VKRouteMatchedAnnotationPresentation <VKTrackableAnnotationPresentation>
@property (nonatomic,retain) GEORouteMatch * routeMatch; 
@required
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(id)arg1;
-(void)addPresentationCoordinateChangedObserver:(id)arg1;
-(void)removePresentationCoordinateChangedObserver:(id)arg1;

@end

