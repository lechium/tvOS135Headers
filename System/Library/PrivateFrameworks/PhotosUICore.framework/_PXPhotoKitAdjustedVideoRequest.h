/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class PLPhotoEditRenderer, PHVideoRequestOptions;

@interface _PXPhotoKitAdjustedVideoRequest : _PXPhotoKitAdjustedUIMediaRequest {

	PLPhotoEditRenderer* _renderer;
	PHVideoRequestOptions* _options;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) PHVideoRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
-(PHVideoRequestOptions *)options;
-(void)start;
-(id)resultHandler;
-(id)initWithRenderQueue:(id)arg1 asset:(id)arg2 imageManager:(id)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)_renderIfNeeded;
-(void)_handlePlayerItem:(id)arg1 error:(id)arg2 ;
@end
