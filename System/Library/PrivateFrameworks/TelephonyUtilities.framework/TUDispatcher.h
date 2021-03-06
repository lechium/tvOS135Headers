/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TUDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)dispatcherWithIdentifier:(id)arg1 ;
+(id)dispatcherWithQueue:(id)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(/*^block*/id)qosUserInteractiveDispatchBlockForBlock:(/*^block*/id)arg1 ;
-(void)dispatchSynchronousBlock:(/*^block*/id)arg1 ;
-(void)dispatchAsynchronousBlock:(/*^block*/id)arg1 ;
-(void)boostQualityOfService;
@end

