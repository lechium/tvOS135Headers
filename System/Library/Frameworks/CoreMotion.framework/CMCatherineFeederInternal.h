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

@interface CMCatherineFeederInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	CLConnectionClient* fLocationdConnection;

}
-(id)init;
-(void)dealloc;
-(void)_teardown;
-(void)_startDaemonConnection;
-(void)_feedCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 ;
@end

