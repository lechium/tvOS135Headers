/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/IDSSendXPCProtocol.h>

@class NSArray, IMRemoteObjectBroadcaster, Protocol, IMMessageContext, NSString;

@interface Broadcaster : NSProxy <IDSSendXPCProtocol> {

	NSArray* _targets;
	IMRemoteObjectBroadcaster* _parent;
	Protocol* _protocol;
	IMMessageContext* _messageContext;
	int _curXPCMessagePriority;
	/*^block*/id _completion;

}

@property (assign,nonatomic) int curXPCMessagePriority;              //@synthesize curXPCMessagePriority=_curXPCMessagePriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 ;
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 ;
-(int)curXPCMessagePriority;
-(void)setCurXPCMessagePriority:(int)arg1 ;
-(void)sendXPCObject:(id)arg1 ;
@end
