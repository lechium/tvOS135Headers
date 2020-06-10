/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSSimpleAssertion.h>

@class ITIdleTimerConfiguration, NSString;

@interface ITIdleTimerAssertion : BSSimpleAssertion {

	ITIdleTimerConfiguration* _configuration;

}

@property (getter=_uniqueReason,nonatomic,copy,readonly) NSString * uniqueReason; 
@property (nonatomic,copy,readonly) ITIdleTimerConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
-(ITIdleTimerConfiguration *)configuration;
-(id)succinctDescriptionBuilder;
-(id)_uniqueReason;
-(id)_initWithConfiguration:(id)arg1 forReason:(id)arg2 invalidationBlock:(/*^block*/id)arg3 ;
@end

