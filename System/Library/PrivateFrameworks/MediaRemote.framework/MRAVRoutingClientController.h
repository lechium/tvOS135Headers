/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MRMediaRemoteService, NSObject, NSMutableDictionary;

@interface MRAVRoutingClientController : NSObject {

	MRMediaRemoteService* _mediaRemoteService;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _pendingCompletionHandlersForCategories;
	NSMutableDictionary* _cachedRoutesForCategories;

}

@property (nonatomic,readonly) MRMediaRemoteService * mediaRemoteService;              //@synthesize mediaRemoteService=_mediaRemoteService - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithMediaRemoteService:(id)arg1 ;
-(void)fetchPickableRoutesForCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(MRMediaRemoteService *)mediaRemoteService;
@end
