/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/CLDispatchSilo.h>

@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo {

	NSMutableArray* _timerHolders;

}

@property (nonatomic,readonly) NSMutableArray * timerHolders;              //@synthesize timerHolders=_timerHolders - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(id)newTimer;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(void)updateLatchedAbsoluteTimestamp;
-(void)setLatchedAbsoluteTimestamp:(double)arg1 ;
-(NSMutableArray *)timerHolders;
@end

