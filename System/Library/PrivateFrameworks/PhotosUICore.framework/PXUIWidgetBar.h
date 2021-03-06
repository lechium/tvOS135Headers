/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXWidgetBar.h>

@class PXUIWidgetBarViewTile;

@interface PXUIWidgetBar : PXWidgetBar {

	PXUIWidgetBarViewTile* __viewTile;

}

@property (nonatomic,readonly) PXUIWidgetBarViewTile * _viewTile;              //@synthesize _viewTile=__viewTile - In the implementation block
-(void)updateView;
-(id)createTileAnimator;
-(id)checkOutTileWithKind:(long long)arg1 ;
-(void)checkInTile:(id)arg1 ;
-(PXUIWidgetBarViewTile *)_viewTile;
@end

