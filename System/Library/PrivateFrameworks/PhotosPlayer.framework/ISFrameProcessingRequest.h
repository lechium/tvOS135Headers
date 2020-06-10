/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class CIImage;

@interface ISFrameProcessingRequest : NSObject {

	CIImage* _image;
	long long _type;
	double _renderScale;
	SCD_Struct_IS1 _time;

}

@property (nonatomic,retain) CIImage * image;                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) SCD_Struct_IS1 time;              //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double renderScale;               //@synthesize renderScale=_renderScale - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(SCD_Struct_IS1)time;
-(void)setTime:(SCD_Struct_IS1)arg1 ;
-(CIImage *)image;
-(void)setImage:(CIImage *)arg1 ;
-(double)renderScale;
-(void)setRenderScale:(double)arg1 ;
@end

