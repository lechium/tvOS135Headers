/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIProgressBarLayout, VUITextLayout, VUITextBadgeLayout;

@interface VUIUpNextOverlayLayout : TVViewLayout {

	TVImageLayout* _appImageLayout;
	TVImageLayout* _logoImageLayout;
	VUIProgressBarLayout* _progressBarLayout;
	TVImageLayout* _badgeLayout;
	VUITextLayout* _titleLayout;
	VUITextLayout* _subtitleLayout;
	VUITextBadgeLayout* _textBadgeLayout;

}

@property (nonatomic,retain) TVImageLayout * appImageLayout;                        //@synthesize appImageLayout=_appImageLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * logoImageLayout;                       //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
@property (nonatomic,retain) VUIProgressBarLayout * progressBarLayout;              //@synthesize progressBarLayout=_progressBarLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * badgeLayout;                           //@synthesize badgeLayout=_badgeLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleLayout;                           //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * subtitleLayout;                        //@synthesize subtitleLayout=_subtitleLayout - In the implementation block
@property (nonatomic,retain) VUITextBadgeLayout * textBadgeLayout;                  //@synthesize textBadgeLayout=_textBadgeLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(id)appImageLayout;
+(id)logoImageLayout;
+(void)_setAppImageDefaultSize:(id)arg1 ;
+(void)_setLogoImageDefaultSize:(id)arg1 ;
-(id)init;
-(TVImageLayout *)appImageLayout;
-(TVImageLayout *)logoImageLayout;
-(VUITextBadgeLayout *)textBadgeLayout;
-(TVImageLayout *)badgeLayout;
-(VUITextLayout *)titleLayout;
-(VUIProgressBarLayout *)progressBarLayout;
-(void)setTextBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(void)setAppImageLayout:(TVImageLayout *)arg1 ;
-(void)setLogoImageLayout:(TVImageLayout *)arg1 ;
-(void)setProgressBarLayout:(VUIProgressBarLayout *)arg1 ;
-(void)setBadgeLayout:(TVImageLayout *)arg1 ;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)subtitleLayout;
-(void)setSubtitleLayout:(VUITextLayout *)arg1 ;
@end
