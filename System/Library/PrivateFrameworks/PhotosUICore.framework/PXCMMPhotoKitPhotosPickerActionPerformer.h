/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCMMShowPhotosPickerActionPerformer.h>
#import <libobjc.A.dylib/PXCMMPhotoKitActionPerformer.h>

@class UIViewController, PXCMMPhotoKitSession;

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer> {

	UIViewController* _photosPickerViewController;

}

@property (nonatomic,readonly) PXCMMPhotoKitSession * session; 
-(void)performUserInteractionTask;
-(void)_pickerDidCompleteWithPickedAssets:(id)arg1 ;
-(id)_currentAssets;
-(id)_currentSelectedAssets;
@end

