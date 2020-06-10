/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXCMMActionPerformer.h>

@protocol PXGridPresentation;
@interface PXCMMShowPhotosPickerActionPerformer : PXCMMActionPerformer {

	id<PXGridPresentation> _gridPresentation;

}

@property (nonatomic,readonly) id<PXGridPresentation> gridPresentation;              //@synthesize gridPresentation=_gridPresentation - In the implementation block
-(id)performActionWithSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performPhotosPickerActionWithSession:(id)arg1 gridPresentation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<PXGridPresentation>)gridPresentation;
@end
