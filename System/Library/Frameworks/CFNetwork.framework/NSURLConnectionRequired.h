/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLConnectionRequired <NSObject>
@optional
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
-(void)cancel;
-(void)start;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_setDelegateQueue:(id)arg1;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1;

@end

