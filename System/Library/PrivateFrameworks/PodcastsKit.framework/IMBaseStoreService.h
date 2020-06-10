/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMURLRequestEncoder, NSURLSessionConfiguration, IMURLSession;

@interface IMBaseStoreService : NSObject {

	BOOL _wantsJSSignature;
	BOOL _personalizeRequests;
	/*^block*/id _callback;
	IMURLRequestEncoder* _requestEncoder;
	NSURLSessionConfiguration* _configuration;
	IMURLSession* _amsUrlSession;

}

@property (nonatomic,copy) id callback;                                              //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) IMURLRequestEncoder * requestEncoder;                   //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) IMURLSession * amsUrlSession;                           //@synthesize amsUrlSession=_amsUrlSession - In the implementation block
@property (assign,nonatomic) BOOL wantsJSSignature;                                  //@synthesize wantsJSSignature=_wantsJSSignature - In the implementation block
@property (assign,nonatomic) BOOL personalizeRequests;                               //@synthesize personalizeRequests=_personalizeRequests - In the implementation block
+(unsigned long long)defaultConcurrentOperationCount;
+(BOOL)shouldFollowRedirects;
+(id)signatureQueryParams;
-(id)init;
-(NSURLSessionConfiguration *)configuration;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)signRequest:(id)arg1 ;
-(id)bag;
-(void)cancelAllRequests;
-(void)performRequest:(/*^block*/id)arg1 ;
-(IMURLRequestEncoder *)requestEncoder;
-(void)setRequestEncoder:(IMURLRequestEncoder *)arg1 ;
-(BOOL)personalizeRequests;
-(void)setPersonalizeRequests:(BOOL)arg1 ;
-(void)performDataRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithConcurrentOperationCount:(long long)arg1 ;
-(IMURLSession *)amsUrlSession;
-(void)performUrlRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)wantsJSSignature;
-(void)setWantsJSSignature:(BOOL)arg1 ;
-(void)setAmsUrlSession:(IMURLSession *)arg1 ;
@end
