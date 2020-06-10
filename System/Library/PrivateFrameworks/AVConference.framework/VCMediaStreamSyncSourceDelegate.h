/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMediaStreamSyncSourceDelegate <NSObject>
@required
-(void)updateSourceState:(int)arg1;
-(void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned)arg2;
-(void)updateSourcePlayoutSampleRTPTimestamp:(unsigned)arg1 systemTime:(double)arg2 uuid:(id)arg3;

@end
