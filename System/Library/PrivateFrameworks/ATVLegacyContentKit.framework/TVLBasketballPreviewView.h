/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class TVLBasketballScoreboardView, TVLBasketballCourtView;

@interface TVLBasketballPreviewView : UIView {

	TVLBasketballScoreboardView* _scoreboardView;
	TVLBasketballCourtView* _courtView;

}

@property (nonatomic,retain) TVLBasketballScoreboardView * scoreboardView;              //@synthesize scoreboardView=_scoreboardView - In the implementation block
@property (nonatomic,retain) TVLBasketballCourtView * courtView;                        //@synthesize courtView=_courtView - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)layoutSubviews;
-(TVLBasketballScoreboardView *)scoreboardView;
-(void)setScoreboardView:(TVLBasketballScoreboardView *)arg1 ;
-(TVLBasketballCourtView *)courtView;
-(void)setCourtView:(TVLBasketballCourtView *)arg1 ;
@end
