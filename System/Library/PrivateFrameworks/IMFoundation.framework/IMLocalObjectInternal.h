/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_semaphore;
#import <IMFoundation/IMFoundation-Structs.h>
@class IMMessageContext, NSRecursiveLock, NSObject, NSString, NSProtocolChecker, NSArray, NSMutableArray, NSLock;

@interface IMLocalObjectInternal : NSObject {

	IMMessageContext* _currentMessageContext;
	NSRecursiveLock* _lock;
	id _target;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _deathLock;
	NSString* _portName;
	NSString* _processName;
	NSProtocolChecker* _protocolChecker;
	NSArray* _whitelistedClasses;
	NSMutableArray* _componentQueue;
	NSLock* _componentQueueLock;
	NSRecursiveLock* _componentQueueProcessingLock;
	CFRunLoopSourceRef _runloopSource;
	BOOL _pendingComponentQueueProcessing;
	BOOL _busyForwarding;
	BOOL _offMainThread;
	BOOL _wasInterrupted;

}
-(void)dealloc;
@end

