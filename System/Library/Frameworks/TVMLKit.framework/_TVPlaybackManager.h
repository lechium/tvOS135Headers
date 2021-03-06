/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TVPlayer;

@interface _TVPlaybackManager : NSObject {

	_TVPlayer* _presentedPlayer;

}

@property (nonatomic,retain) _TVPlayer * presentedPlayer;              //@synthesize presentedPlayer=_presentedPlayer - In the implementation block
+(id)sharedInstance;
-(_TVPlayer *)presentedPlayer;
-(id)viewControllerForPlayer:(id)arg1 ;
-(void)presentWithPlayer:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentWithPlayer:(id)arg1 animated:(BOOL)arg2 prepareBlock:(/*^block*/id)arg3 ;
-(id)_viewControllerForPlayer:(id)arg1 remove:(BOOL)arg2 ;
-(void)setPresentedPlayer:(_TVPlayer *)arg1 ;
-(void)_playbackStateDidChange:(id)arg1 ;
-(void)stopPresentedPlayer;
-(void)resetPresentedPlayer;
-(void)stopBackgroundedPlayer;
@end

