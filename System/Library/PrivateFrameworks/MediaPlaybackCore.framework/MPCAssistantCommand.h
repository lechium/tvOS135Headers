/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MPCAssistantSendCommand, MPCAssistantContext, NSObject, NSMutableDictionary, NSDate;

@interface MPCAssistantCommand : NSObject {

	MPCAssistantSendCommand* _sendCommand;
	MPCAssistantContext* _context;
	NSObject*<OS_dispatch_queue> _sendCommandQueue;
	NSMutableDictionary* _analytics;
	NSObject*<OS_dispatch_queue> _analyticsQueue;
	NSDate* _startDate;

}
-(id)init;
-(void)sendCommand:(unsigned)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setAnalyticsKey:(id)arg1 value:(id)arg2 ;
-(void)_setAnalyticsError:(id)arg1 ;
-(void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_findOutputDevicesForDestination:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendPlaybackArchive:(id)arg1 toDestination:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

