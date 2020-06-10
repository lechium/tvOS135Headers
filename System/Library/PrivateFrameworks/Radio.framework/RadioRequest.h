/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, RadioRequestContext, NSDictionary;

@interface RadioRequest : NSObject {

	BOOL _cachedResponse;
	long long _errorCode;
	NSObject*<OS_dispatch_queue> _queue;
	RadioRequestContext* _requestContext;
	double _retryInterval;
	long long _status;
	NSDictionary* _unparsedResponseDictionary;
	BOOL _asynchronousBackgroundRequest;

}

@property (assign,getter=isAsynchronousBackgroundRequest,nonatomic) BOOL asynchronousBackgroundRequest;              //@synthesize asynchronousBackgroundRequest=_asynchronousBackgroundRequest - In the implementation block
@property (getter=isCachedResponse,readonly) BOOL cachedResponse; 
@property (copy) RadioRequestContext * requestContext; 
@property (readonly) long long status; 
@property (readonly) long long errorCode; 
@property (readonly) double retryInterval; 
@property (copy,readonly) NSDictionary * unparsedResponseDictionary; 
+(id)defaultURLCache;
+(void)loadServiceConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)setCachedResponse:(BOOL)arg1 ;
-(long long)status;
-(long long)errorCode;
-(void)setStatus:(long long)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(RadioRequestContext *)requestContext;
-(void)setRequestContext:(RadioRequestContext *)arg1 ;
-(BOOL)isCachedResponse;
-(BOOL)isAsynchronousBackgroundRequest;
-(void)_loadRadioStoreBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_loadRadioStoreBagAndAllowRetry:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(void)setUnparsedResponseDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)unparsedResponseDictionary;
-(void)setAsynchronousBackgroundRequest:(BOOL)arg1 ;
@end
