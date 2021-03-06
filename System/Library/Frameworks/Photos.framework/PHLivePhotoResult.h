/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHCompositeMediaResult.h>

@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {

	PHCompositeMediaResult* _imageResult;
	PHCompositeMediaResult* _videoResult;

}
-(id)imageData;
-(id)exifOrientation;
-(CGImageRef)imageRef;
-(id)imageURL;
-(id)videoURL;
-(BOOL)containsValidData;
-(id)imageUTI;
-(long long)uiOrientation;
-(unsigned)cgOrientation;
-(id)videoAdjustmentData;
-(void)_mergeInfoDictionaryFromResult:(id)arg1 ;
-(void)addImageResult:(id)arg1 ;
-(void)addVideoResult:(id)arg1 ;
@end

