/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKDurationSnapshot : NSObject {

	 snapshotTime;
	 rate;
	 elapsedDuration;
	 duration;

}

@property (readonly,nonatomic) double snapshotTime; 
@property (readonly,nonatomic) float rate; 
@property (readonly,nonatomic) double elapsedDuration; 
@property (readonly,nonatomic) double duration; 
-(id)init;
-(double)duration;
-(float)rate;
-(double)snapshotTime;
-(double)elapsedDuration;
-(id)initWithSnapshotTime:(double)arg1 rate:(float)arg2 elapsedDuration:(double)arg3 duration:(double)arg4 ;
@end

