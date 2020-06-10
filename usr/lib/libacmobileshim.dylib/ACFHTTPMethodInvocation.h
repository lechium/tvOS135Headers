/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACFRunLoopScheduling.h>

@class ACFHTTPMethod, NSURL, ACFHTTPMethodInvocationInternal, NSString;

@interface ACFHTTPMethodInvocation : NSObject <ACFRunLoopScheduling> {

	ACFHTTPMethod* _method;
	NSURL* _url;
	double _timeout;
	id _delegate;
	id _internal;
	BOOL _isWaitingForResponse;

}

@property (retain,readonly) ACFHTTPMethodInvocationInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (assign) BOOL isWaitingForResponse;                                        //@synthesize isWaitingForResponse=_isWaitingForResponse - In the implementation block
@property (assign) id<ACFHTTPMethodInvocationDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) ACFHTTPMethod * method;                                  //@synthesize method=_method - In the implementation block
@property (retain,readonly) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (readonly) double timeout;                                                 //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)invocation;
+(id)invokeHTTPMethodSynchronously:(id)arg1 withURL:(id)arg2 timeout:(double)arg3 result:(id*)arg4 ;
+(id)invocationWithMethod:(id)arg1 url:(id)arg2 timeout:(double)arg3 delegate:(id)arg4 invokeImmediately:(BOOL)arg5 ;
-(id)init;
-(void)dealloc;
-(id<ACFHTTPMethodInvocationDelegate>)delegate;
-(void)setDelegate:(id<ACFHTTPMethodInvocationDelegate>)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)invoke;
-(void)cancel;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(ACFHTTPMethod *)method;
-(double)timeout;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURL *)url;
-(ACFHTTPMethodInvocationInternal *)internal;
-(id)initWithMethod:(id)arg1 url:(id)arg2 timeout:(double)arg3 delegate:(id)arg4 invokeImmediately:(BOOL)arg5 ;
-(void)setIsWaitingForResponse:(BOOL)arg1 ;
-(BOOL)isWaitingForResponse;
@end

