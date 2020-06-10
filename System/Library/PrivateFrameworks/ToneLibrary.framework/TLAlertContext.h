/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface TLAlertContext : NSObject {

	BOOL _beingInterrupted;
	long long _playbackBackEnd;
	NSObject*<OS_dispatch_source> _timeoutTimerSource;

}

@property (assign,nonatomic) long long playbackBackEnd;                                     //@synthesize playbackBackEnd=_playbackBackEnd - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimerSource;              //@synthesize timeoutTimerSource=_timeoutTimerSource - In the implementation block
@property (assign,getter=isBeingInterrupted,nonatomic) BOOL beingInterrupted;               //@synthesize beingInterrupted=_beingInterrupted - In the implementation block
-(long long)playbackBackEnd;
-(void)setPlaybackBackEnd:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimerSource;
-(void)setTimeoutTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)isBeingInterrupted;
-(void)setBeingInterrupted:(BOOL)arg1 ;
@end

