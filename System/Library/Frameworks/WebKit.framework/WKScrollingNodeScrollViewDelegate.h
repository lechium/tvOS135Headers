/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString;

@interface WKScrollingNodeScrollViewDelegate : NSObject <UIScrollViewDelegate> {

	ScrollingTreeScrollingNodeDelegateIOS* _scrollingTreeNodeDelegate;
	BOOL _inUserInteraction;

}

@property (assign,getter=_isInUserInteraction,nonatomic) BOOL inUserInteraction;              //@synthesize inUserInteraction=_inUserInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithScrollingTreeNodeDelegate:(ScrollingTreeScrollingNodeDelegateIOS*)arg1 ;
-(id)_actingParentScrollViewForScrollView:(id)arg1 ;
-(BOOL)_isInUserInteraction;
-(void)setInUserInteraction:(BOOL)arg1 ;
@end

