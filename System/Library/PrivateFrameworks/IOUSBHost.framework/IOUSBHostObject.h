/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IOUSBHost/IOUSBHost-Structs.h>
@class NSObject, NSMutableSet, NSMutableDictionary, NSArray, IOUSBHostInterestNotificationReference;

@interface IOUSBHostObject : NSObject {

	unsigned _ioService;
	unsigned _ioConnection;
	unsigned _interestNotificationObject;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _debugLoggingMask;
	IONotificationPortRef _ioNotificationPortRef;
	IONotificationPortRef _interestNotificationPortRef;
	/*^block*/id _interestHandler;
	NSObject*<OS_dispatch_queue> _interestNotificationQueue;
	NSMutableSet* _invalidDescriptorCache;
	NSMutableDictionary* _descriptorCache;
	NSArray* _supportedStringLanguages;
	IOUSBHostInterestNotificationReference* _interestNotificationReference;

}

@property (assign) unsigned long long debugLoggingMask;                                                 //@synthesize debugLoggingMask=_debugLoggingMask - In the implementation block
@property (assign) unsigned ioService;                                                                  //@synthesize ioService=_ioService - In the implementation block
@property (assign) unsigned ioConnection;                                                               //@synthesize ioConnection=_ioConnection - In the implementation block
@property (assign) IONotificationPortRef ioNotificationPortRef;                                         //@synthesize ioNotificationPortRef=_ioNotificationPortRef - In the implementation block
@property (assign) IONotificationPortRef interestNotificationPortRef;                                   //@synthesize interestNotificationPortRef=_interestNotificationPortRef - In the implementation block
@property (assign) unsigned interestNotificationObject;                                                 //@synthesize interestNotificationObject=_interestNotificationObject - In the implementation block
@property (copy) id interestHandler;                                                                    //@synthesize interestHandler=_interestHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                                  //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> interestNotificationQueue;                              //@synthesize interestNotificationQueue=_interestNotificationQueue - In the implementation block
@property (retain) NSMutableSet * invalidDescriptorCache;                                               //@synthesize invalidDescriptorCache=_invalidDescriptorCache - In the implementation block
@property (retain) NSMutableDictionary * descriptorCache;                                               //@synthesize descriptorCache=_descriptorCache - In the implementation block
@property (retain) NSArray * supportedStringLanguages;                                                  //@synthesize supportedStringLanguages=_supportedStringLanguages - In the implementation block
@property (retain) IOUSBHostInterestNotificationReference * interestNotificationReference;              //@synthesize interestNotificationReference=_interestNotificationReference - In the implementation block
@property (readonly) unsigned long long deviceAddress; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)destroy;
-(unsigned long long)deviceAddress;
-(unsigned)ioService;
-(unsigned)ioConnection;
-(const IOUSBDescriptorHeader*)descriptorWithType:(int)arg1 length:(unsigned long long*)arg2 error:(id*)arg3 ;
-(const IOUSBDescriptorHeader*)descriptorWithType:(int)arg1 length:(unsigned long long*)arg2 index:(unsigned long long)arg3 languageID:(unsigned long long)arg4 error:(id*)arg5 ;
-(IONotificationPortRef)ioNotificationPortRef;
-(unsigned long long)debugLoggingMask;
-(void)setInvalidDescriptorCache:(NSMutableSet *)arg1 ;
-(NSMutableSet *)invalidDescriptorCache;
-(id)initWithIOService:(unsigned)arg1 options:(unsigned long long)arg2 queue:(id)arg3 error:(id*)arg4 interestHandler:(/*^block*/id)arg5 ;
-(void)setDebugLoggingMask:(unsigned long long)arg1 ;
-(void)setIoService:(unsigned)arg1 ;
-(void)setIoConnection:(unsigned)arg1 ;
-(void)setIoNotificationPortRef:(IONotificationPortRef)arg1 ;
-(void)setInterestNotificationObject:(unsigned)arg1 ;
-(void)setDescriptorCache:(NSMutableDictionary *)arg1 ;
-(void)setInterestHandler:(id)arg1 ;
-(void)setInterestNotificationReference:(IOUSBHostInterestNotificationReference *)arg1 ;
-(NSMutableDictionary *)descriptorCache;
-(BOOL)openWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setInterestNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)interestNotificationQueue;
-(void)setInterestNotificationPortRef:(IONotificationPortRef)arg1 ;
-(IONotificationPortRef)interestNotificationPortRef;
-(IOUSBHostInterestNotificationReference *)interestNotificationReference;
-(void)closeWithOptions:(unsigned)arg1 ;
-(unsigned)interestNotificationObject;
-(BOOL)sendDeviceRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 bytesTransferred:(unsigned long long*)arg3 completionTimeout:(double)arg4 error:(id*)arg5 ;
-(BOOL)enqueueDeviceRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 completionTimeout:(double)arg3 error:(id*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)abortDeviceRequestsWithOption:(unsigned long long)arg1 error:(id*)arg2 ;
-(const IOUSBDescriptorHeader*)descriptorWithType:(int)arg1 length:(unsigned long long*)arg2 index:(unsigned long long)arg3 languageID:(unsigned long long)arg4 requestType:(int)arg5 requestRecipient:(int)arg6 error:(id*)arg7 ;
-(id)stringWithIndex:(unsigned long long)arg1 languageID:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithIOService:(unsigned)arg1 queue:(id)arg2 error:(id*)arg3 interestHandler:(/*^block*/id)arg4 ;
-(BOOL)sendDeviceRequest:(IOUSBDeviceRequest)arg1 error:(id*)arg2 ;
-(BOOL)sendDeviceRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 bytesTransferred:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)enqueueDeviceRequest:(IOUSBDeviceRequest)arg1 error:(id*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)enqueueDeviceRequest:(IOUSBDeviceRequest)arg1 data:(id)arg2 error:(id*)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)abortDeviceRequestsWithError:(id*)arg1 ;
-(id)stringWithIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)frameNumberWithTime:(unsigned long long*)arg1 ;
-(id)ioDataWithCapacity:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)interestHandler;
-(NSArray *)supportedStringLanguages;
-(void)setSupportedStringLanguages:(NSArray *)arg1 ;
@end

