/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/_HMFCFHTTPServerConnectionDelegate.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFHTTPClientConnectionDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, _HMFCFHTTPServerConnection, HMFNetAddress, NSString;

@interface HMFHTTPClientConnection : HMFObject <_HMFCFHTTPServerConnectionDelegate, HMFLogging> {

	id<HMFHTTPClientConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingRespones;
	_HMFCFHTTPServerConnection* _internal;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRespones;                      //@synthesize pendingRespones=_pendingRespones - In the implementation block
@property (nonatomic,readonly) _HMFCFHTTPServerConnection * internal;                 //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * peerAddress; 
@property (__weak) id<HMFHTTPClientConnectionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)close;
-(id<HMFHTTPClientConnectionDelegate>)delegate;
-(void)setDelegate:(id<HMFHTTPClientConnectionDelegate>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(_HMFCFHTTPServerConnection *)internal;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)shortDescription;
-(HMFNetAddress *)peerAddress;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(NSMutableArray *)pendingRespones;
-(void)sendResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

