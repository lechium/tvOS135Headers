/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RTLaunchServices : NSObject
+(void)createProcessAssertionForPid:(int)arg1 timeout:(double)arg2 queue:(id)arg3 timeoutHandler:(/*^block*/id)arg4 ;
+(void)launchClientWithBundleIdentifier:(id)arg1 restorationIdentifier:(id)arg2 eventAgentManager:(id)arg3 handler:(/*^block*/id)arg4 ;
+(BOOL)canOpenApplication:(id)arg1 ;
@end

