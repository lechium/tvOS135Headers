/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/ASKResourceRequest.h>

@protocol ASKResourceDataConsumer, ASKImageRequestDelegate;
@class NSURLRequest;

@interface ASKImageRequest : ASKResourceRequest {

	id<ASKResourceDataConsumer> _dataConsumer;
	NSURLRequest* _urlRequest;
	id<ASKImageRequestDelegate> _delegate;

}

@property (nonatomic,readonly) id<ASKResourceDataConsumer> dataConsumer;                 //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,copy,readonly) NSURLRequest * urlRequest;                           //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,readonly) BOOL isResourceRequest; 
@property (nonatomic,__weak,readonly) id<ASKImageRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)searchBundles;
+(void)setSearchBundles:(id)arg1 ;
-(id)description;
-(id)init;
-(id<ASKImageRequestDelegate>)delegate;
-(id<ASKResourceDataConsumer>)dataConsumer;
-(NSURLRequest *)urlRequest;
-(unsigned long long)cacheOptions;
-(id)makeLoadOperation;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
-(BOOL)isResourceRequest;
-(BOOL)isSystemImageRequest;
-(id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 delegate:(id)arg3 ;
@end
