/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXMediaProvider, NSString;

@interface PXGridInlinePlaybackRecord : NSObject {

	BOOL _isInvalid;
	float _videoScore;
	float _curationScore;
	id<PXDisplayAsset> _displayAsset;
	PXMediaProvider* _mediaProvider;
	id _geometryReference;
	long long _desiredPlayState;
	long long _visibilityScore;
	double _distanceToCenterScore;
	double _cellSizeScore;
	NSString* _diagnosticLog;
	SCD_Struct_PX9 _bestVideoTimeRange;

}

@property (assign,nonatomic) long long visibilityScore;                        //@synthesize visibilityScore=_visibilityScore - In the implementation block
@property (assign,nonatomic) double distanceToCenterScore;                     //@synthesize distanceToCenterScore=_distanceToCenterScore - In the implementation block
@property (assign,nonatomic) double cellSizeScore;                             //@synthesize cellSizeScore=_cellSizeScore - In the implementation block
@property (assign,nonatomic) BOOL isInvalid;                                   //@synthesize isInvalid=_isInvalid - In the implementation block
@property (copy,readonly) NSString * diagnosticScoresDescription; 
@property (copy) NSString * diagnosticLog;                                     //@synthesize diagnosticLog=_diagnosticLog - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> displayAsset;                //@synthesize displayAsset=_displayAsset - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) id geometryReference;                           //@synthesize geometryReference=_geometryReference - In the implementation block
@property (assign,nonatomic) long long desiredPlayState;                       //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) SCD_Struct_PX9 bestVideoTimeRange;              //@synthesize bestVideoTimeRange=_bestVideoTimeRange - In the implementation block
@property (nonatomic,readonly) float videoScore;                               //@synthesize videoScore=_videoScore - In the implementation block
@property (nonatomic,readonly) float curationScore;                            //@synthesize curationScore=_curationScore - In the implementation block
-(id)description;
-(BOOL)isPlaying;
-(BOOL)isInvalid;
-(float)curationScore;
-(SCD_Struct_PX9)bestVideoTimeRange;
-(float)videoScore;
-(void)setIsInvalid:(BOOL)arg1 ;
-(PXMediaProvider *)mediaProvider;
-(long long)desiredPlayState;
-(void)setDesiredPlayState:(long long)arg1 ;
-(void)prepareForVisible;
-(void)prepareForInvisible;
-(void)setDiagnosticLog:(NSString *)arg1 ;
-(NSString *)diagnosticLog;
-(void)setCellSizeScore:(double)arg1 ;
-(void)setDistanceToCenterScore:(double)arg1 ;
-(void)setVisibilityScore:(long long)arg1 ;
-(double)distanceToCenterScore;
-(double)cellSizeScore;
-(long long)visibilityScore;
-(id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 ;
-(NSString *)diagnosticScoresDescription;
-(id<PXDisplayAsset>)displayAsset;
-(id)geometryReference;
@end
