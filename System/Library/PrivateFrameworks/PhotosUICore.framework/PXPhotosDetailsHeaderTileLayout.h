/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@protocol PXPhotosDetailsHeaderTileLayoutDelegate;
@class PXPhotosDetailsHeaderSpec;

@interface PXPhotosDetailsHeaderTileLayout : PXTilingLayout {

	SCD_Struct_PX53 _delegateRespondsTo;
	PXPhotosDetailsHeaderSpec* _spec;
	long long _style;
	id<PXPhotosDetailsHeaderTileLayoutDelegate> _delegate;

}

@property (nonatomic,retain) PXPhotosDetailsHeaderSpec * spec;                                         //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long style;                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosDetailsHeaderTileLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXTileIdentifier contentTileIdentifier; 
@property (nonatomic,readonly) CGRect slideshowRect; 
-(id)init;
-(id<PXPhotosDetailsHeaderTileLayoutDelegate>)delegate;
-(void)setDelegate:(id<PXPhotosDetailsHeaderTileLayoutDelegate>)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(CGRect)contentBounds;
-(PXPhotosDetailsHeaderSpec *)spec;
-(void)setSpec:(PXPhotosDetailsHeaderSpec *)arg1 ;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(long long)tileKindForTileIdentifier:(PXTileIdentifier)arg1 ;
-(id)_viewSpecForTileWithIdentifier:(PXTileIdentifier)arg1 boundingSize:(CGSize)arg2 ;
-(double)_zPositionForTileWithIdentifier:(PXTileIdentifier)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(CGRect)slideshowRect;
-(CGRect)_rectForTileWithIdentifier:(PXTileIdentifier)arg1 ;
-(id)_userDataForTileWithIdentifier:(PXTileIdentifier)arg1 inContainingRect:(CGRect)arg2 ;
-(PXTileIdentifier)tileIdentifierForTileKind:(long long)arg1 ;
-(PXTileIdentifier)contentTileIdentifier;
-(CGRect)_contentsRectForAspectRatio:(double)arg1 ;
@end

