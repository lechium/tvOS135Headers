/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _MKUserTrackingButton, MKMapView;

@interface MKUserTrackingButton : UIView {

	_MKUserTrackingButton* _button;

}

@property (assign,nonatomic,__weak) MKMapView * mapView; 
+(id)userTrackingButtonWithMapView:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
@end

