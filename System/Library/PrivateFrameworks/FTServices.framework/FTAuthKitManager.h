/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AKAppleIDSession, NSObject;

@interface FTAuthKitManager : NSObject {

	AKAppleIDSession* _akAppleIDSession;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)anisetteHeadersForRequest:(id)arg1 completionBlockQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 forRequest:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end
