/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIAsyncInvocation : NSObject {

	Av* _observer;
	/*^block*/id _invocationBlock;
	AB _invocationBlockHasBeenCalled;
	Aq _invokeCallCount;

}
+(id)invocationWithBlock:(/*^block*/id)arg1 ;
+(id)emptyInvocation;
-(void)dealloc;
-(id)invoke;
@end
