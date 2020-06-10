/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICMediaRedownloadResponse, ICStoreURLRequest, NSDictionary, NSString;

@interface ICMediaRedownloadRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	ICMediaRedownloadResponse* _redownloadResponse;
	ICStoreURLRequest* _storeURLRequest;
	BOOL _playbackRequest;
	BOOL _streamingRental;
	BOOL _usePrioritizedURLSession;
	BOOL _includeKeybagSyncData;
	BOOL _includeSubscriptionKeybagSyncData;
	NSDictionary* _redownloadParameters;
	NSString* _requestURLBagKey;

}

@property (nonatomic,copy) ICStoreRequestContext * requestContext;                       //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) NSDictionary * redownloadParameters;                          //@synthesize redownloadParameters=_redownloadParameters - In the implementation block
@property (nonatomic,copy) NSString * requestURLBagKey;                                  //@synthesize requestURLBagKey=_requestURLBagKey - In the implementation block
@property (assign,nonatomic) BOOL includeKeybagSyncData;                                 //@synthesize includeKeybagSyncData=_includeKeybagSyncData - In the implementation block
@property (assign,nonatomic) BOOL includeSubscriptionKeybagSyncData;                     //@synthesize includeSubscriptionKeybagSyncData=_includeSubscriptionKeybagSyncData - In the implementation block
@property (assign,getter=isPlaybackRequest,nonatomic) BOOL playbackRequest;              //@synthesize playbackRequest=_playbackRequest - In the implementation block
@property (assign,getter=isStreamingRental,nonatomic) BOOL streamingRental;              //@synthesize streamingRental=_streamingRental - In the implementation block
@property (assign,nonatomic) BOOL usePrioritizedURLSession;                              //@synthesize usePrioritizedURLSession=_usePrioritizedURLSession - In the implementation block
-(id)init;
-(void)cancel;
-(void)execute;
-(ICStoreRequestContext *)requestContext;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setPlaybackRequest:(BOOL)arg1 ;
-(BOOL)isPlaybackRequest;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setRequestURLBagKey:(NSString *)arg1 ;
-(void)setIncludeKeybagSyncData:(BOOL)arg1 ;
-(void)setIncludeSubscriptionKeybagSyncData:(BOOL)arg1 ;
-(id)initWithRequestContext:(id)arg1 redownloadParameters:(id)arg2 ;
-(NSDictionary *)redownloadParameters;
-(void)_executeWithActiveICloudAccountProperties:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 redownloadParametersString:(id)arg2 ;
-(BOOL)isStreamingRental;
-(void)setStreamingRental:(BOOL)arg1 ;
-(BOOL)usePrioritizedURLSession;
-(void)setUsePrioritizedURLSession:(BOOL)arg1 ;
-(void)setRedownloadParameters:(NSDictionary *)arg1 ;
-(NSString *)requestURLBagKey;
-(BOOL)includeKeybagSyncData;
-(BOOL)includeSubscriptionKeybagSyncData;
@end

