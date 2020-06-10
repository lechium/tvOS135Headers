/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

@interface VUIAppleTVChannelLogoLayout : TVViewLayout {

	TVImageLayout* _channelLogoImageLayout;
	VUITextLayout* _channelsTextLayout;

}

@property (nonatomic,retain) VUITextLayout * channelsTextLayout;                  //@synthesize channelsTextLayout=_channelsTextLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * channelLogoImageLayout;              //@synthesize channelLogoImageLayout=_channelLogoImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 ;
-(id)init;
-(TVImageLayout *)channelLogoImageLayout;
-(void)setChannelLogoImageLayout:(TVImageLayout *)arg1 ;
-(VUITextLayout *)channelsTextLayout;
-(void)setChannelsTextLayout:(VUITextLayout *)arg1 ;
@end

