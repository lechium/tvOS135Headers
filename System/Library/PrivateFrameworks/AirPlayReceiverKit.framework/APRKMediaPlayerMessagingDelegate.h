/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiverKit.framework/AirPlayReceiverKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol APRKMediaPlayerMessagingDelegate <NSObject>
@required
-(void)mediaPlayerNeedsTLSInfo:(id)arg1;
-(void)mediaPlayer:(id)arg1 wantsToUpdateStreamingTypeWithIsAudioValue:(BOOL)arg2;
-(void)mediaPlayer:(id)arg1 wantsToSendUpstreamMessageWithDictionary:(id)arg2;
-(void)mediaPlayer:(id)arg1 didGenerateFPSSecureStopRecordPayload:(id)arg2;

@end

