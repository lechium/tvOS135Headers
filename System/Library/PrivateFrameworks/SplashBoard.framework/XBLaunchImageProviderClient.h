/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCClient.h>

@class XBApplicationLaunchCompatibilityInfo;

@interface XBLaunchImageProviderClient : BSBaseXPCClient {

	XBApplicationLaunchCompatibilityInfo* _appInfo;

}
+(void)preheatServiceWithTimeout:(double)arg1 ;
-(id)init;
-(id)initWithApplicationInfo:(id)arg1 ;
-(unsigned)generateImageWithContext:(id)arg1 error:(id*)arg2 ;
@end

