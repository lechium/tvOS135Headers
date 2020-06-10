/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PCPersistentTimer, NSString, NSDate;

@interface MSVPersistentTimer : NSObject {

	PCPersistentTimer* _timer;
	NSString* _name;
	/*^block*/id _block;
	NSDate* _startDate;
	double _interval;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)_handleTimerElapsed:(id)arg1 ;
-(void)invalidateWithReason:(id)arg1 ;
-(id)initWithInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
@end
