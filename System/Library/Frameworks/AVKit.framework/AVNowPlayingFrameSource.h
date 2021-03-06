/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVNowPlayingFrameSource <NSObject>
@required
-(unsigned long long)numberOfFramesForTransportBar:(id)arg1;
-(double)transportBar:(id)arg1 frameTimeForDisplayTime:(double)arg2;
-(double)transportBar:(id)arg1 displayTimeForFrameTime:(double)arg2;
-(void)transportBar:(id)arg1 didRevealFrameIndex:(unsigned long long)arg2;

@end

