/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPlacesMapGeotaggableInfoDelegate, OS_dispatch_queue;
#import <PlacesKit/PlacesKit-Structs.h>
@class PKExtendedTraitCollection, NSObject, NSString;

@interface PXPlacesSnapshotOptions : NSObject {

	BOOL _shouldSkipPlaceholder;
	BOOL _showsPointLabels;
	PKExtendedTraitCollection* _extendedTraitCollection;
	id<PXPlacesMapGeotaggableInfoDelegate> _geotaggableInformationDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _cacheDirectoryPath;
	double _visibleDistance;
	unsigned long long _snapshotMapType;
	CGSize _viewSize;

}

@property (nonatomic,retain) PKExtendedTraitCollection * extendedTraitCollection;                                //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,retain) id<PXPlacesMapGeotaggableInfoDelegate> geotaggableInformationDelegate;              //@synthesize geotaggableInformationDelegate=_geotaggableInformationDelegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * cacheDirectoryPath;                                                      //@synthesize cacheDirectoryPath=_cacheDirectoryPath - In the implementation block
@property (assign,nonatomic) double visibleDistance;                                                             //@synthesize visibleDistance=_visibleDistance - In the implementation block
@property (assign,nonatomic) unsigned long long snapshotMapType;                                                 //@synthesize snapshotMapType=_snapshotMapType - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                                                    //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPlaceholder;                                                         //@synthesize shouldSkipPlaceholder=_shouldSkipPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL showsPointLabels;                                                              //@synthesize showsPointLabels=_showsPointLabels - In the implementation block
-(id)description;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setViewSize:(CGSize)arg1 ;
-(CGSize)viewSize;
-(NSString *)cacheDirectoryPath;
-(BOOL)showsPointLabels;
-(void)setShowsPointLabels:(BOOL)arg1 ;
-(PKExtendedTraitCollection *)extendedTraitCollection;
-(void)setShouldSkipPlaceholder:(BOOL)arg1 ;
-(void)setCacheDirectoryPath:(NSString *)arg1 ;
-(void)setGeotaggableInformationDelegate:(id<PXPlacesMapGeotaggableInfoDelegate>)arg1 ;
-(void)setExtendedTraitCollection:(PKExtendedTraitCollection *)arg1 ;
-(void)setSnapshotMapType:(unsigned long long)arg1 ;
-(id<PXPlacesMapGeotaggableInfoDelegate>)geotaggableInformationDelegate;
-(double)visibleDistance;
-(void)setVisibleDistance:(double)arg1 ;
-(unsigned long long)snapshotMapType;
-(BOOL)shouldSkipPlaceholder;
@end

