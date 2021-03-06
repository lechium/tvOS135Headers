/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PKPaymentSessionHandle : NSObject {

	NSObject*<OS_dispatch_queue> _internalSessionSerialQueue;

}
-(void)invalidateSession;
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isFirstInQueue;
@end

