/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface __NSCFDummyQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(int)maxConcurrentOperationCount;
@end

