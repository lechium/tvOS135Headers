/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFMyriadEmergencyDelegate, OS_dispatch_source, OS_dispatch_queue;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject;

@interface AFMyriadEmergencyManager : NSObject {

	id<AFMyriadEmergencyDelegate> _delegate;
	CFNotificationCenterRef _center;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _handled;
	BOOL _informed;

}
+(id)currentManager;
-(void)informDelegateEmergencyHandled;
-(void)informDelegateEmergencyNotHandled;
-(void)_createDispatchTimerFor:(double)arg1 toExecute:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 onQueue:(id)arg2 ;
-(void)initiateEmergencyCallMyriad;
@end

