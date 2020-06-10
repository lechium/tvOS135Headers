/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libamsupport.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libamsupport.dylib/libamsupport.dylib-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURLSession, NSDictionary, NSString;

@interface AMSupportURLSession : NSObject <NSURLSessionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	double _timeout;
	float _priority;
	NSURLSession* _session;
	NSDictionary* _options;
	BOOL _sslEvalFailed;

}

@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) float priority;                                  //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                          //@synthesize options=_options - In the implementation block
@property (readonly) BOOL sslEvalFailed;                                      //@synthesize sslEvalFailed=_sslEvalFailed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSession *)session;
-(void)setOptions:(NSDictionary *)arg1 ;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(double)timeout;
-(void)sendRequest:(CFHTTPMessageRef)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)sslEvalFailed;
-(id)_defaultSessionConfigurationWithIdentifier:(id)arg1 ;
-(id)_newSession;
-(id)_urlRequestForHTTPMessage:(CFHTTPMessageRef)arg1 ;
@end

