/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _IMTimingInstance : NSObject {

	double _startTiming;
	double _stopTiming;
	double _totalTime;
	BOOL _isRunning;

}

@property (assign,nonatomic) double totalTime;              //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) BOOL isRunning;                //@synthesize isRunning=_isRunning - In the implementation block
+(id)createTimingInstanceWithStartTime:(float)arg1 ;
-(id)description;
-(id)init;
-(BOOL)isRunning;
-(double)totalTime;
-(void)setTotalTime:(double)arg1 ;
-(void)startUsingTime:(double)arg1 ;
-(void)stopUsingTime:(double)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
@end

