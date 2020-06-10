/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, PFVideoSharingOperation, PFPhotoSharingOperation;

@interface PFSharingRemakerOperation : NSObject {

	long long _inputType;
	NSURL* _imageOutputURL;
	NSURL* _videoOutputURL;
	NSString* __uuid;
	PFVideoSharingOperation* __videoOperation;
	PFPhotoSharingOperation* __imageOperation;

}

@property (setter=_setUUID:,nonatomic,copy) NSString * _uuid;                                                   //@synthesize _uuid=__uuid - In the implementation block
@property (assign,setter=_setInputType:,nonatomic) long long inputType;                                         //@synthesize inputType=_inputType - In the implementation block
@property (setter=_setVideoOperation:,nonatomic,retain) PFVideoSharingOperation * _videoOperation;              //@synthesize _videoOperation=__videoOperation - In the implementation block
@property (setter=_setImageOperation:,nonatomic,retain) PFPhotoSharingOperation * _imageOperation;              //@synthesize _imageOperation=__imageOperation - In the implementation block
@property (setter=_setImageOutputURL:,nonatomic,copy) NSURL * imageOutputURL;                                   //@synthesize imageOutputURL=_imageOutputURL - In the implementation block
@property (setter=_setVideoOutputURL:,nonatomic,copy) NSURL * videoOutputURL;                                   //@synthesize videoOutputURL=_videoOutputURL - In the implementation block
+(id)remakerOperationWithInputType:(long long)arg1 videoURL:(id)arg2 imageURL:(id)arg3 adjustmentData:(id)arg4 ;
-(id)init;
-(NSString *)_uuid;
-(void)_setUUID:(id)arg1 ;
-(long long)inputType;
-(void)_setInputType:(long long)arg1 ;
-(NSURL *)imageOutputURL;
-(void)_setImageOutputURL:(id)arg1 ;
-(NSURL *)videoOutputURL;
-(void)_setVideoOutputURL:(id)arg1 ;
-(PFVideoSharingOperation *)_videoOperation;
-(void)_setVideoOperation:(id)arg1 ;
-(PFPhotoSharingOperation *)_imageOperation;
-(void)_setImageOperation:(id)arg1 ;
@end

