/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, GEOAnalyticsPipelineRemoteProxy;

@interface GEOAnalyticsPipelineReportOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;
	id _transaction;
	NSObject*<OS_dispatch_queue> _runQueue;
	GEOAnalyticsPipelineRemoteProxy* _remoteProxy;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completionBlock;

}
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithRemoteProxy:(id)arg1 runQueue:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_completeOperation;
@end

