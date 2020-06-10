/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection;

@interface FBSOpenApplicationService : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	BSServiceConnection* _connection;

}
+(id)new;
+(id)serviceName;
+(id)serviceWithDefaultShellEndpoint;
+(id)serviceWithEndpoint:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)canOpenApplication:(id)arg1 reason:(long long*)arg2 ;
-(id)_initWithEndpoint:(id)arg1 ;
-(void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_remoteTarget;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

