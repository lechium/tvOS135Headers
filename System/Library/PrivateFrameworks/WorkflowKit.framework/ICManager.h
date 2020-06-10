/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@class ICScheme, NSMutableArray, NSLock;

@interface ICManager : NSObject <WFApplicationStateObserver> {

	BOOL _allowsOpeningFromBackground;
	BOOL _enteringForeground;
	BOOL _resignedActiveWhileOpeningURL;
	ICScheme* _callbackScheme;
	NSMutableArray* _queuedRequests;
	NSLock* _queueLock;

}

@property (nonatomic,retain) NSMutableArray * queuedRequests;                 //@synthesize queuedRequests=_queuedRequests - In the implementation block
@property (nonatomic,retain) NSLock * queueLock;                              //@synthesize queueLock=_queueLock - In the implementation block
@property (assign,nonatomic) BOOL enteringForeground;                         //@synthesize enteringForeground=_enteringForeground - In the implementation block
@property (assign,nonatomic) BOOL resignedActiveWhileOpeningURL;              //@synthesize resignedActiveWhileOpeningURL=_resignedActiveWhileOpeningURL - In the implementation block
@property (nonatomic,retain) ICScheme * callbackScheme;                       //@synthesize callbackScheme=_callbackScheme - In the implementation block
@property (assign,nonatomic) BOOL allowsOpeningFromBackground;                //@synthesize allowsOpeningFromBackground=_allowsOpeningFromBackground - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(BOOL)enteringForeground;
-(void)setEnteringForeground:(BOOL)arg1 ;
-(void)performRequest:(id)arg1 ;
-(void)queueRequest:(id)arg1 ;
-(void)registerHandler:(/*^block*/id)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3 ;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2 ;
-(BOOL)handleOpenURL:(id)arg1 fromSourceApplication:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(BOOL)handleIncomingRequest:(id)arg1 ;
-(void)registerHandler:(/*^block*/id)arg1 forIncomingRequestsWithAction:(id)arg2 legacyAction:(id)arg3 scheme:(id)arg4 ;
-(id)popQueuedRequest;
-(void)performQueuedRequestIfApplicable;
-(void)_performRequest:(id)arg1 ;
-(ICScheme *)callbackScheme;
-(void)setCallbackScheme:(ICScheme *)arg1 ;
-(BOOL)allowsOpeningFromBackground;
-(void)setAllowsOpeningFromBackground:(BOOL)arg1 ;
-(NSMutableArray *)queuedRequests;
-(void)setQueuedRequests:(NSMutableArray *)arg1 ;
-(NSLock *)queueLock;
-(void)setQueueLock:(NSLock *)arg1 ;
-(BOOL)resignedActiveWhileOpeningURL;
-(void)setResignedActiveWhileOpeningURL:(BOOL)arg1 ;
@end
