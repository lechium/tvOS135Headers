/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVThumbLayerController.h>

@class AVFrameSet, AVFrame, UIImage, NSString;

@interface AVImagesThumbLayerController : NSObject <AVThumbLayerController> {

	double _desiredTimeInterval;
	double _toleranceBefore;
	double _toleranceAfter;
	/*^block*/id _actualTimeUpdateBlock;
	AVFrameSet* _frameSet;
	AVFrame* _currentFrame;

}

@property (nonatomic,retain) AVFrameSet * frameSet;                   //@synthesize frameSet=_frameSet - In the implementation block
@property (nonatomic,retain) AVFrame * currentFrame;                  //@synthesize currentFrame=_currentFrame - In the implementation block
@property (assign,nonatomic) double desiredTimeInterval;              //@synthesize desiredTimeInterval=_desiredTimeInterval - In the implementation block
@property (readonly) double toleranceBefore;                          //@synthesize toleranceBefore=_toleranceBefore - In the implementation block
@property (readonly) double toleranceAfter;                           //@synthesize toleranceAfter=_toleranceAfter - In the implementation block
@property (readonly) double actualTimeInterval; 
@property (nonatomic,copy) id actualTimeUpdateBlock;                  //@synthesize actualTimeUpdateBlock=_actualTimeUpdateBlock - In the implementation block
@property (readonly) UIImage * image; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIImage *)image;
-(AVFrameSet *)frameSet;
-(void)setFrameSet:(AVFrameSet *)arg1 ;
-(void)prefetchForTime:(double)arg1 ;
-(void)prefetchForTimes:(id)arg1 ;
-(BOOL)isExact;
-(double)desiredTimeInterval;
-(void)setDesiredTimeInterval:(double)arg1 ;
-(double)toleranceBefore;
-(double)toleranceAfter;
-(double)actualTimeInterval;
-(id)actualTimeUpdateBlock;
-(void)setActualTimeUpdateBlock:(id)arg1 ;
-(id)initWithFrameSet:(id)arg1 ;
-(AVFrame *)currentFrame;
-(long long)desiredFrameIndex;
-(void)setExactTimeInterval:(double)arg1 ;
-(void)setCurrentFrame:(AVFrame *)arg1 ;
@end

