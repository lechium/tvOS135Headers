/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSTimer, NSIndexPath;

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout {

	BOOL _performActualRearrange;
	NSTimer* _dragPauseTimer;
	NSIndexPath* _dragIndexPathForMerge;
	NSIndexPath* _targetIndexPathForMerge;
	CGPoint _lastDragPoint;
	CGPoint _currentPosition;

}

@property (nonatomic,retain) NSTimer * dragPauseTimer;                                                         //@synthesize dragPauseTimer=_dragPauseTimer - In the implementation block
@property (assign,nonatomic) CGPoint lastDragPoint;                                                            //@synthesize lastDragPoint=_lastDragPoint - In the implementation block
@property (assign,nonatomic) CGPoint currentPosition;                                                          //@synthesize currentPosition=_currentPosition - In the implementation block
@property (assign,nonatomic) BOOL performActualRearrange;                                                      //@synthesize performActualRearrange=_performActualRearrange - In the implementation block
@property (nonatomic,retain) NSIndexPath * dragIndexPathForMerge;                                              //@synthesize dragIndexPathForMerge=_dragIndexPathForMerge - In the implementation block
@property (nonatomic,retain) NSIndexPath * targetIndexPathForMerge;                                            //@synthesize targetIndexPathForMerge=_targetIndexPathForMerge - In the implementation block
@property (nonatomic,readonly) id<PXPeopleDragAndDropCollectionViewDelegateLayout> mergeDelegate; 
-(id)init;
-(void)dealloc;
-(CGPoint)currentPosition;
-(void)setCurrentPosition:(CGPoint)arg1 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(CGPoint)arg2 ;
-(BOOL)performMergeIfPossible;
-(id<PXPeopleDragAndDropCollectionViewDelegateLayout>)mergeDelegate;
-(void)_potentialMergeWithDragIndexPath:(id)arg1 ontoIndexPath:(id)arg2 withPosition:(CGPoint)arg3 ;
-(void)_updateDragPause;
-(void)_cancelDragPauseTimer;
-(NSTimer *)dragPauseTimer;
-(void)setDragPauseTimer:(NSTimer *)arg1 ;
-(CGPoint)lastDragPoint;
-(void)setLastDragPoint:(CGPoint)arg1 ;
-(BOOL)performActualRearrange;
-(void)setPerformActualRearrange:(BOOL)arg1 ;
-(NSIndexPath *)dragIndexPathForMerge;
-(void)setDragIndexPathForMerge:(NSIndexPath *)arg1 ;
-(NSIndexPath *)targetIndexPathForMerge;
-(void)setTargetIndexPathForMerge:(NSIndexPath *)arg1 ;
@end
