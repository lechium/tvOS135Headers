/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAutoScroller.h>

@class CADisplayLink;

@interface PXUIAutoScroller : PXAutoScroller {

	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)_handleDisplayLink:(id)arg1 ;
-(CGRect)visibleRectForScrollView:(id)arg1 ;
-(void)startRepeating;
-(void)stopRepeating;
-(BOOL)autoscrollWithOffset:(CGPoint)arg1 ;
-(void)updateWithGestureRecognizer:(id)arg1 ;
@end

