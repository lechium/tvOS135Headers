/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioSessionControllerDelegate <NSObject>
@optional
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;
-(void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;

@end

