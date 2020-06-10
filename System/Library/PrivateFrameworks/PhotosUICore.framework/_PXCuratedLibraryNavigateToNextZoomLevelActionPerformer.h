/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXGLayout, PXGSpriteReference;

@interface _PXCuratedLibraryNavigateToNextZoomLevelActionPerformer : PXCuratedLibraryActionPerformer {

	PXGLayout* _layout;
	PXGSpriteReference* _hitSpriteReference;

}

@property (nonatomic,readonly) PXGLayout * layout;                                   //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) PXGSpriteReference * hitSpriteReference;              //@synthesize hitSpriteReference=_hitSpriteReference - In the implementation block
-(PXGLayout *)layout;
-(void)performUserInteractionTask;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 layout:(id)arg3 hitSpriteReference:(id)arg4 ;
-(id)initWithActionType:(id)arg1 viewModel:(id)arg2 ;
-(PXGSpriteReference *)hitSpriteReference;
@end
