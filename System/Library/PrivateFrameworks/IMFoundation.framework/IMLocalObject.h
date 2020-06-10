/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProtocolChecker, NSString, NSArray;

@interface IMLocalObject : NSObject {

	id _internal;

}

@property (assign,nonatomic) id target; 
@property (nonatomic,readonly) NSProtocolChecker * protocolChecker; 
@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,retain) NSString * processName; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL wasInterrupted; 
@property (nonatomic,retain) NSArray * whitelistedClasses; 
+(void)initialize;
+(void)_registerIMLocalObject:(id)arg1 ;
+(void)_unregisterIMLocalObject:(id)arg1 ;
+(id)_imLocalObjectQueue;
+(void)_setExceptionHandlingDisabled:(BOOL)arg1 ;
+(id)_registeredIMLocalObjectForPort:(unsigned)arg1 ;
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSObject*<OS_xpc_object>)connection;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(NSString *)portName;
-(NSProtocolChecker *)protocolChecker;
-(void)_portDidBecomeInvalid;
-(void)_portInterrupted;
-(NSArray *)whitelistedClasses;
-(void)_enqueueInvocation:(id)arg1 ;
-(id)_currentMessageContext;
-(id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4 offMainThread:(BOOL)arg5 ;
-(void)_handleNewInvocations;
-(void)_cancelHandlerCompleted;
-(void)_clearPort:(BOOL)arg1 signalRunLoopIfNeeded:(BOOL)arg2 ;
-(void)_clearPort:(BOOL)arg1 ;
-(BOOL)isValidSelector:(SEL)arg1 ;
-(void)terminated;
-(BOOL)_handleInvocation:(id)arg1 ;
-(id)_peekInvocation;
-(void)_popInvocation;
-(BOOL)handleInvocation:(id)arg1 ;
-(void)_noteNewInvocation;
-(void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2 ;
-(void)_enqueueInvocationWithPriority:(id)arg1 xpcMessage:(id)arg2 priority:(int)arg3 ;
-(void)_handleInvocationForSendMessage:(id)arg1 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 ;
-(BOOL)wasInterrupted;
-(void)_systemShutdown:(id)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(void)_enqueueInvocationWithPriority:(id)arg1 priority:(int)arg2 ;
-(void)setWhitelistedClasses:(NSArray *)arg1 ;
@end

