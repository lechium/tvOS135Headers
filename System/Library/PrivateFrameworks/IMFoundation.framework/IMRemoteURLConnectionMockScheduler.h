/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMRemoteURLConnectionMockScheduler : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
-(id)init;
-(BOOL)_connect;
-(void)scheduleMockResponse:(id)arg1 forURL:(id)arg2 ;
-(void)scheduleMockResponse:(id)arg1 ;
@end

