/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSInternalQueueController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	void* _contextKey;

}
+(id)sharedInstance;
-(id)init;
-(id)queue;
-(id)initWithQueue:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)assertQueueIsNotCurrent;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(BOOL)arg2 ;
-(void)assertQueueIsCurrent;
-(BOOL)isQueueCurrent;
-(id)initWithName:(char*)arg1 contextKey:(void*)arg2 ;
@end
