/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPHTTPClientDebugDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate;
@class NSString, NSObject, HMFNetAddress;

@interface HAPHTTPClient : HMFObject <HAPHTTPClientDebugDelegate, HMFLogging> {

	HTTPClientPrivateRef _httpClient;
	BOOL _invalidated;
	BOOL _invalidateRequested;
	NSString* _dnsName;
	long long _port;
	NSObject*<OS_dispatch_queue> _queue;
	id<HAPHTTPClientDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<HAPHTTPClientDebugDelegate> _debugDelegate;
	NSObject*<OS_dispatch_queue> _debugDelegateQueue;

}

@property (nonatomic,copy) NSString * dnsName;                                                    //@synthesize dnsName=_dnsName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<HAPHTTPClientDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HAPHTTPClientDebugDelegate> debugDelegate;                 //@synthesize debugDelegate=_debugDelegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> debugDelegateQueue;              //@synthesize debugDelegateQueue=_debugDelegateQueue - In the implementation block
@property (assign,nonatomic) BOOL invalidateRequested;                                            //@synthesize invalidateRequested=_invalidateRequested - In the implementation block
@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                               //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,readonly) long long port;                                                    //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * peerAddress; 
@property (nonatomic,readonly) NSString * peerEndpointDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<HAPHTTPClientDelegate>)delegate;
-(void)setDelegate:(id<HAPHTTPClientDelegate>)arg1 ;
-(long long)port;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)isInvalidated;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(HMFNetAddress *)peerAddress;
-(id<HAPHTTPClientDebugDelegate>)debugDelegate;
-(void)setDebugDelegate:(id<HAPHTTPClientDebugDelegate>)arg1 ;
-(id)logIdentifier;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(NSString *)peerEndpointDescription;
-(void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithDNSName:(id)arg1 queue:(id)arg2 ;
-(void)setDebugDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)enableUAPSessionSecurityWithReadKey:(unsigned char)arg1 writeKey:(unsigned char)arg2 error:(id*)arg3 ;
-(void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(id)initWithDNSName:(id)arg1 port:(long long)arg2 eventsEnabled:(BOOL)arg3 queue:(id)arg4 ;
-(int)_initializeCoreUtilsHTTPClientWithPort:(long long)arg1 withEventsEnabled:(BOOL)arg2 ;
-(void)setDebugDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)dnsName;
-(void)setInvalidateRequested:(BOOL)arg1 ;
-(void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned long long)arg4 timeout:(double)arg5 activity:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_handleHTTPResponseForMessage:(HTTPMessagePrivate*)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_serializeUAPJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)_deserializeUAPJSONData:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)debugDelegateQueue;
-(void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_debugDelegateRespondsToSelector:(SEL)arg1 ;
-(void)setDnsName:(NSString *)arg1 ;
-(BOOL)invalidateRequested;
@end

