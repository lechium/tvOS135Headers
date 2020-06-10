/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class NSString;

@interface CNQualityOfServiceSchedulerDecorator : NSObject <CNScheduler> {

	id<CNScheduler> _scheduler;
	unsigned long long _qualityOfService;

}

@property (nonatomic,readonly) id<CNScheduler> scheduler;                        //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) unsigned long long qualityOfService;              //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
-(unsigned long long)qualityOfService;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(id<CNScheduler>)scheduler;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithScheduler:(id)arg1 qualityOfService:(unsigned long long)arg2 ;
@end

