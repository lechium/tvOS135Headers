/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/_TVCarouselViewController.h>
#import <libobjc.A.dylib/TVCarouselViewDelegate.h>

@protocol VUIPageControlView;
@class UIView, NSNumber, NSString;

@interface VUICarouselViewController : _TVCarouselViewController <TVCarouselViewDelegate> {

	UIView*<VUIPageControlView> _pageControlView;
	NSNumber* _pageControlBottomMarginNumber;

}

@property (nonatomic,retain) UIView*<VUIPageControlView> pageControlView;              //@synthesize pageControlView=_pageControlView - In the implementation block
@property (nonatomic,retain) NSNumber * pageControlBottomMarginNumber;                 //@synthesize pageControlBottomMarginNumber=_pageControlBottomMarginNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayoutSubviews;
-(void)updateWithViewElement:(id)arg1 ;
-(void)carouselView:(id)arg1 didCenterItemAtIndex:(unsigned long long)arg2 ;
-(void)_pageChanged:(long long)arg1 ;
-(UIView*<VUIPageControlView>)pageControlView;
-(void)setPageControlView:(UIView*<VUIPageControlView>)arg1 ;
-(void)setPageControlBottomMarginNumber:(NSNumber *)arg1 ;
-(NSNumber *)pageControlBottomMarginNumber;
@end

