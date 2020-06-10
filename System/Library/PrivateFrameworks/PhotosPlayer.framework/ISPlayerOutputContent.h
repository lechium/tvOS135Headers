/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISWrappedAVPlayer;

@interface ISPlayerOutputContent : NSObject {

	BOOL _photoIsOriginal;
	int _photoEXIFOrientation;
	CGImageRef _photo;
	ISWrappedAVPlayer* _videoPlayer;
	CGSize _videoSize;

}

@property (nonatomic,readonly) CGImageRef photo;                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) BOOL photoIsOriginal;                         //@synthesize photoIsOriginal=_photoIsOriginal - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                     //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;              //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,readonly) CGSize videoSize;                             //@synthesize videoSize=_videoSize - In the implementation block
-(id)description;
-(void)dealloc;
-(CGImageRef)photo;
-(int)photoEXIFOrientation;
-(ISWrappedAVPlayer *)videoPlayer;
-(id)initWithPhoto:(CGImageRef)arg1 photoIsOriginal:(BOOL)arg2 photoEXIFOrientation:(int)arg3 videoPlayer:(id)arg4 videoSize:(CGSize)arg5 ;
-(BOOL)photoIsOriginal;
-(CGSize)videoSize;
@end
