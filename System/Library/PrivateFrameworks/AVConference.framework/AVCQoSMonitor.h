/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCQoSMonitorDelegate;
@class NSObject, AVConferenceXPCClient, NSMutableArray, NSMutableDictionary, NSArray;

@interface AVCQoSMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	id<AVCQoSMonitorDelegate> _delegate;
	AVConferenceXPCClient* _connection;
	NSMutableArray* _registeredStreamTokens;
	NSMutableDictionary* _reportingIntervals;

}

@property (assign,nonatomic,__weak) id<AVCQoSMonitorDelegate> delegate; 
@property (nonatomic,readonly) NSArray * streamTokens;                               //@synthesize registeredStreamTokens=_registeredStreamTokens - In the implementation block
-(void)dealloc;
-(id<AVCQoSMonitorDelegate>)delegate;
-(void)setDelegate:(id<AVCQoSMonitorDelegate>)arg1 ;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(BOOL)generateInvalidStreamTokenWithError:(id*)arg1 ;
-(void)terminateConnection;
-(id)initWithStreamToken:(long long)arg1 queue:(id)arg2 error:(id*)arg3 ;
-(void)requestQoSReport;
-(id)registerStreamToken:(long long)arg1 ;
-(long long)reportingIntervalForStreamToken:(long long)arg1 ;
-(NSArray *)streamTokens;
@end

