/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlayerViewControllerPlaybackDelegate
@optional
-(void)didFinishScanningForPlayerViewController:(id)arg1;
-(void)playerViewController:(id)arg1 shouldScanAtRate:(double)arg2 completion:(/*^block*/id)arg3;
-(void)playerViewController:(id)arg1 shouldPauseWithCompletion:(/*^block*/id)arg2;
-(void)playerViewController:(id)arg1 shouldSeekToDate:(id)arg2 completion:(/*^block*/id)arg3;
-(void)playerViewController:(id)arg1 shouldSeekToTime:(double)arg2 completion:(/*^block*/id)arg3;
-(void)playerViewController:(id)arg1 shouldPlayFromTime:(double)arg2 completion:(/*^block*/id)arg3;

@end

