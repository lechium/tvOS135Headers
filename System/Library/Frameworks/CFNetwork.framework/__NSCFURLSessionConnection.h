/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, SessionConnectionDelegate, OS_dispatch_data;
@class NSURLSessionTask, NSObject, NSURLResponse;

@interface __NSCFURLSessionConnection : NSObject <NSCopying> {

	NSURLSessionTask* _task;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<SessionConnectionDelegate> _delegate;
	NSURLResponse* _cacheResponse;
	NSObject*<OS_dispatch_data> _cacheData;
	unsigned long long _cacheDataMax;
	long long _maxCacheEntrySize;

}

@property (copy) NSURLSessionTask * task;                               //@synthesize task=_task - In the implementation block
@property (retain) id<SessionConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id<SessionConnectionDelegate>)delegate;
-(void)setDelegate:(id<SessionConnectionDelegate>)arg1 ;
-(void)cancel;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)resume;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)expectedProgressTargetChanged;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)setPriorityHint:(float)arg1 ;
-(void)setPoolPriority:(long long)arg1 ;
-(void)suspend;
-(void)setIsDownload:(BOOL)arg1 ;
-(id)_cachedResponse;
-(void)withWorkQueueAsync:(/*^block*/id)arg1 ;
-(void)_setupForCache:(BOOL)arg1 expectedLength:(long long)arg2 response:(id)arg3 ;
-(void)_appendDataToCache:(id)arg1 ;
-(void)_tossCache;
-(void)_storeCachedResponse:(id)arg1 ;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
@end

