/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKEvent.h>

@class TISKSessionSamples;

@interface TISKBucketSwitchEvent : TISKEvent {

	TISKSessionSamples* _sessionSamples;

}

@property (nonatomic,retain) TISKSessionSamples * sessionSamples;              //@synthesize sessionSamples=_sessionSamples - In the implementation block
-(id)description;
-(id)init:(id)arg1 order:(long long)arg2 ;
-(TISKSessionSamples *)sessionSamples;
-(void)setSessionSamples:(TISKSessionSamples *)arg1 ;
@end
