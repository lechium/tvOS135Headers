/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreLite/FMScheduler.h>

@class NSString;

@interface _FMImmediateScheduler : NSObject <FMScheduler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
@end

