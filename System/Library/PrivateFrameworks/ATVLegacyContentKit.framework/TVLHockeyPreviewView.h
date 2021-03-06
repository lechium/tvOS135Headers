/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class TVLHeadToHeadBannerView, TVLItemTitleView, TVLHockeyScoreboardView;

@interface TVLHockeyPreviewView : UIView {

	TVLHeadToHeadBannerView* _bannerView;
	TVLItemTitleView* _titleView;
	TVLHockeyScoreboardView* _scoreboardView;

}

@property (nonatomic,retain) TVLHeadToHeadBannerView * bannerView;                  //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) TVLItemTitleView * titleView;                          //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) TVLHockeyScoreboardView * scoreboardView;              //@synthesize scoreboardView=_scoreboardView - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)layoutSubviews;
-(TVLItemTitleView *)titleView;
-(TVLHeadToHeadBannerView *)bannerView;
-(void)setBannerView:(TVLHeadToHeadBannerView *)arg1 ;
-(void)setTitleView:(TVLItemTitleView *)arg1 ;
-(TVLHockeyScoreboardView *)scoreboardView;
-(void)setScoreboardView:(TVLHockeyScoreboardView *)arg1 ;
@end

