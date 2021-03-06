/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray, MKMapSnapshotOptions, MKMapSnapshotter, UITraitCollection, MKMapCamera;

@interface MKGroupedPlacesSnapshotter : NSObject {

	NSArray* _mapItems;
	CGSize _mapSize;
	MKMapSnapshotOptions* _snapshotOptions;
	BOOL _useSnapshotService;
	MKMapSnapshotter* _snapshotter;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) MKMapCamera * camera; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(void)cancel;
-(MKMapCamera *)camera;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isLoading;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(UITraitCollection *)traitCollection;
-(id)initWithMapItems:(id)arg1 mapSize:(CGSize)arg2 useSnapshotService:(BOOL)arg3 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)_initSnapshotterWithMapItems;
@end

