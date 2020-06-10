/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WFActionableNotificationManager : NSObject {

	NSMutableDictionary* _handlersForIdentifiers;
	NSObject*<OS_dispatch_queue> _handlersQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * handlersForIdentifiers;              //@synthesize handlersForIdentifiers=_handlersForIdentifiers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> handlersQueue;                //@synthesize handlersQueue=_handlersQueue - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)addNotificationRequestWithContentBody:(id)arg1 actions:(id)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleNotificationResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)handlersForIdentifiers;
-(NSObject*<OS_dispatch_queue>)handlersQueue;
@end
