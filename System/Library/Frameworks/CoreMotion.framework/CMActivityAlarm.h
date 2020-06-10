/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMActivityAlarm : NSObject {

	BOOL fIsValid;
	CFRunLoopRef fRunLoop;
	NSObject*<OS_dispatch_queue> fQueue;
	/*^block*/id fHandler;
	unsigned _trigger;
	double _duration;

}

@property (assign,nonatomic) double duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned trigger;              //@synthesize trigger=_trigger - In the implementation block
+(BOOL)activityAlarmAvailable;
+(id)activityAlarmInfo;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)fire;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(unsigned)trigger;
-(void)setTrigger:(unsigned)arg1 ;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onRunLoop:(CFRunLoopRef)arg3 withHandler:(/*^block*/id)arg4 ;
@end

