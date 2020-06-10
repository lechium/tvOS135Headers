/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSStoreRequest, VSOptional, SSRequest;

@interface VSStoreRequestOperation : VSAsyncOperation {

	int _requestCompletionFlag;
	VSStoreRequest* _request;
	VSOptional* _result;
	SSRequest* _storeServicesRequest;

}

@property (nonatomic,retain) VSOptional * result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) SSRequest * storeServicesRequest;              //@synthesize storeServicesRequest=_storeServicesRequest - In the implementation block
@property (nonatomic,copy) VSStoreRequest * request;                        //@synthesize request=_request - In the implementation block
-(id)init;
-(VSStoreRequest *)request;
-(void)setRequest:(VSStoreRequest *)arg1 ;
-(void)cancel;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(BOOL)_isFirstToFinish;
-(void)setStoreServicesRequest:(SSRequest *)arg1 ;
-(SSRequest *)storeServicesRequest;
@end
