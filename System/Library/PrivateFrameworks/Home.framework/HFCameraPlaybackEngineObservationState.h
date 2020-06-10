/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFCameraPlaybackEngineObservationOptions;

@interface HFCameraPlaybackEngineObservationState : NSObject {

	HFCameraPlaybackEngineObservationOptions* _options;
	id _timeObservationToken;

}

@property (nonatomic,retain) HFCameraPlaybackEngineObservationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id timeObservationToken;                                         //@synthesize timeObservationToken=_timeObservationToken - In the implementation block
-(HFCameraPlaybackEngineObservationOptions *)options;
-(void)setOptions:(HFCameraPlaybackEngineObservationOptions *)arg1 ;
-(void)setTimeObservationToken:(id)arg1 ;
-(id)timeObservationToken;
@end

