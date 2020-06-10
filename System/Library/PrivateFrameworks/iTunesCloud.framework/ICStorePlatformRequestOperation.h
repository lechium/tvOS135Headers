/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreURLRequest, ICStorePlatformRequest;

@interface ICStorePlatformRequestOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreURLRequest* _activeURLRequest;
	ICStorePlatformRequestOperation* _strongSelf;
	ICStorePlatformRequest* _platformRequest;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICStorePlatformRequest * platformRequest;              //@synthesize platformRequest=_platformRequest - In the implementation block
@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(id)_requestContext;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_executePersonalized;
-(void)_executeUnpersonalized;
-(id)_URLRequestWithBaseURL:(id)arg1 ;
-(void)_enqueueDataRequest:(id)arg1 ;
-(id)initWithPlatformRequest:(id)arg1 ;
-(ICStorePlatformRequest *)platformRequest;
@end

