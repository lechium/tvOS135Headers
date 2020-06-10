/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKRotationFilterDelegate;
#import <MapKit/MapKit-Structs.h>
@class VKMapView;

@interface MKRotationFilter : NSObject {

	VKMapView* _mapLayer;
	double _gestureStartAngle;
	BOOL _userRotatedAwayFromVerticalYaw;
	double _previousVerticalYawOverride;
	BOOL _snappedToNorth;
	BOOL _snappedAtStart;
	BOOL _snappingEnabled;
	double _additionalSnappingAngle;
	id<MKRotationFilterDelegate> _delegate;

}

@property (assign,getter=isSnappedToNorth,nonatomic) BOOL snappedToNorth;               //@synthesize snappedToNorth=_snappedToNorth - In the implementation block
@property (assign,nonatomic) double additionalSnappingAngle;                            //@synthesize additionalSnappingAngle=_additionalSnappingAngle - In the implementation block
@property (assign,nonatomic,__weak) id<MKRotationFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<MKRotationFilterDelegate>)delegate;
-(void)setDelegate:(id<MKRotationFilterDelegate>)arg1 ;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2 ;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1 ;
-(id)initWithMapLayer:(id)arg1 ;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1 withSnapping:(BOOL)arg2 ;
-(void)updateSnappedToNorth;
-(void)setSnappedToNorth:(BOOL)arg1 ;
-(BOOL)hasAdditionalSnappingAngle;
-(void)snapToNorthAnimated:(BOOL)arg1 forceTrueNorth:(BOOL)arg2 ;
-(BOOL)isSnappedToNorth;
-(double)additionalSnappingAngle;
-(void)setAdditionalSnappingAngle:(double)arg1 ;
@end
