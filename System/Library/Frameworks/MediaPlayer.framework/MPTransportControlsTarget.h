/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPTransportControlsTarget <NSObject>
@optional
-(BOOL)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2;
-(BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
-(void)transportControlsDidResize:(id)arg1;

@end
