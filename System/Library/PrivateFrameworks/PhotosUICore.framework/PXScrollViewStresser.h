/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink, UIScrollView;

@interface PXScrollViewStresser : NSObject {

	unsigned _scrollDirection;
	CADisplayLink* _displayLink;
	UIScrollView* _scrollView;
	long long _scrollCount;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                      //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                        //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) unsigned scrollDirection;                         //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) long long scrollCount;                            //@synthesize scrollCount=_scrollCount - In the implementation block
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
+(id)sharedInstance;
-(BOOL)isScrolling;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setScrollDirection:(unsigned)arg1 ;
-(unsigned)scrollDirection;
-(void)_handleDisplayLink:(id)arg1 ;
-(void)startScrollingScrollView:(id)arg1 axis:(long long)arg2 ;
-(void)stopScrolling;
-(long long)scrollCount;
-(void)setScrollCount:(long long)arg1 ;
@end

