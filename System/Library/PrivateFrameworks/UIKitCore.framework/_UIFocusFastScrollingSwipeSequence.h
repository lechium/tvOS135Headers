/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScrollView;

@interface _UIFocusFastScrollingSwipeSequence : NSObject {

	UIScrollView* _scrollView;
	unsigned long long _headingLock;
	long long _consecutiveSwipeCount;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) unsigned long long headingLock;                //@synthesize headingLock=_headingLock - In the implementation block
@property (assign,nonatomic) long long consecutiveSwipeCount;               //@synthesize consecutiveSwipeCount=_consecutiveSwipeCount - In the implementation block
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(unsigned long long)headingLock;
-(void)setHeadingLock:(unsigned long long)arg1 ;
-(long long)consecutiveSwipeCount;
-(void)setConsecutiveSwipeCount:(long long)arg1 ;
@end
