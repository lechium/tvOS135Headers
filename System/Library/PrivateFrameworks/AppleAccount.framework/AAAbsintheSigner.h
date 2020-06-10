/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AppleAccount/AppleAccount-Structs.h>
@class NSObject, AAAbsintheSignerContextCache, AAURLSession, AAAbsintheContext;

@interface AAAbsintheSigner : NSObject {

	os_unfair_lock_s _contextLock;
	NSObject*<OS_dispatch_queue> _contextQueue;
	NSObject*<OS_dispatch_source> _contextTimerSource;
	AAAbsintheSignerContextCache* _contextCache;
	double _cacheTimeout;
	AAURLSession* _session;

}

@property (nonatomic,retain) AAURLSession * session;                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) AAAbsintheContext * context; 
@property (nonatomic,readonly) double cacheTimeout;                      //@synthesize cacheTimeout=_cacheTimeout - In the implementation block
+(id)sharedSigner;
+(/*^block*/id)_contextCreationBlock;
+(void)_setContextCreationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(AAURLSession *)session;
-(void)setSession:(AAURLSession *)arg1 ;
-(AAAbsintheContext *)context;
-(void)setContext:(AAAbsintheContext *)arg1 ;
-(void)signatureForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCacheTimeout:(double)arg1 ;
-(void)_contextWithCompletion:(/*^block*/id)arg1 ;
-(id)_contextLock_contextInvalidatingIfNecessary;
-(void)_contextLock_dequeueContextCleanup;
-(void)_contextLock_enqueueContextCleanup;
-(double)cacheTimeout;
-(void)_contextQueue_contextWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchSessionInfoWithRequestInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchCertificateDataWithCompletion:(/*^block*/id)arg1 ;
@end
