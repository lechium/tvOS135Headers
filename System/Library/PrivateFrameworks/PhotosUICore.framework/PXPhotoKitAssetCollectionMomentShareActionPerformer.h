/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>
#import <libobjc.A.dylib/PXCMMWorkflowCoordinatorDelegate.h>

@class PXCMMWorkflowCoordinator, NSString;

@interface PXPhotoKitAssetCollectionMomentShareActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXCMMWorkflowCoordinatorDelegate> {

	PXCMMWorkflowCoordinator* _workflowCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canPerformOnAssetCollection:(id)arg1 people:(id)arg2 ;
+(id)createAlertActionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollection:(id)arg2 person:(id)arg3 ;
-(void)performUserInteractionTask;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(long long)shareOriginForSession:(id)arg1 workflowCoordinator:(id)arg2 ;
-(void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4 ;
@end

