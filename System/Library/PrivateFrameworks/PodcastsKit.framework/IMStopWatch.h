/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMStopWatch : NSObject {

	unsigned long long _startTime;
	NSString* _descriptionString;

}
+(void)initialize;
+(id)stopwatchWithDescription:(id)arg1 ;
+(id)stopwatch;
-(id)description;
-(id)init;
-(void)start;
-(void)report;
-(void)reset;
-(double)time;
-(void)setDescription:(id)arg1 ;
-(void)reportWithMarker:(id)arg1 ;
@end

