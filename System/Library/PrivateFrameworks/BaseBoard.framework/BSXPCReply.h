/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCReply : NSObject {

	NSObject*<OS_xpc_object> _reply;
	int _sent;

}
+(id)replyForMessage:(id)arg1 ;
+(id)messageWithReply:(id)arg1 ;
-(id)_initWithReply:(id)arg1 ;
-(id)initWithReply:(id)arg1 ;
-(id)initForMessage:(id)arg1 ;
-(void)sendReply:(/*^block*/id)arg1 ;
-(long long)messageKind;
-(id)message;
@end
