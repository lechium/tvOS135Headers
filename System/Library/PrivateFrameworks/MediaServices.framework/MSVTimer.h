/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface MSVTimer : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;

}
+(id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
+(id)timerWithInterval:(double)arg1 block:(/*^block*/id)arg2 ;
+(id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id)initWithInterval:(double)arg1 repeats:(BOOL)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

