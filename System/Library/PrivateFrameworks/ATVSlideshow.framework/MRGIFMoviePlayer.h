/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSString;

@interface MRGIFMoviePlayer : NSObject {

	NSString* _path;
	CGSize _size;
	CGImageSourceRef _imageSource;
	CGImageRef _currentImage;
	unsigned _currentIndex;
	unsigned _numberOfImages;
	double _nextImageTime;
	double _playTimeOffset;
	float _imageDuration;
	BOOL _isPlaying;

}

@property (assign,nonatomic) BOOL isPlaying;               //@synthesize isPlaying=_isPlaying - In the implementation block
@property (readonly) CGImageRef currentImage; 
-(void)dealloc;
-(void)cleanup;
-(void)setTime:(double)arg1 ;
-(BOOL)isPlaying;
-(CGImageRef)currentImage;
-(void)setIsPlaying:(BOOL)arg1 ;
-(id)initWithPath:(id)arg1 andSize:(CGSize)arg2 ;
-(void)getNextImage;
@end

