/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSURL, NSNumber;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent {

	BOOL _requestingPlaybackInitialization;
	NSURL* _stationURL;
	NSNumber* _privateListeningOverride;

}

@property (nonatomic,readonly) NSURL * stationURL;                                                                           //@synthesize stationURL=_stationURL - In the implementation block
@property (getter=isRequestingPlaybackInitialization,nonatomic,readonly) BOOL requestingPlaybackInitialization;              //@synthesize requestingPlaybackInitialization=_requestingPlaybackInitialization - In the implementation block
@property (nonatomic,readonly) NSNumber * privateListeningOverride;                                                          //@synthesize privateListeningOverride=_privateListeningOverride - In the implementation block
-(NSURL *)stationURL;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSNumber *)privateListeningOverride;
-(BOOL)isRequestingPlaybackInitialization;
@end

