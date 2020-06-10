/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPMusicNowPlayingImage.h>

@class UIImage, TVImageProxy, NSString;

@interface _TVPMusicNowPlayingProxyImage : NSObject <TVPMusicNowPlayingImage> {

	BOOL _loading;
	TVImageProxy* _imageProxy;
	UIImage* _image;

}

@property (nonatomic,readonly) TVImageProxy * imageProxy;                //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize desiredImageSize; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
-(CGSize)desiredImageSize;
-(TVImageProxy *)imageProxy;
-(id)initWithImageProxy:(id)arg1 ;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDesiredImageSize:(CGSize)arg1 ;
@end

