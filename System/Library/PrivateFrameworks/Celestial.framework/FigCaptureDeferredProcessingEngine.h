/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BWGraphStatusDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, BWGraph, NSSet, NSDictionary, BWDeferredProcessingSourceNode, FigCaptureDeferredProcessingJob, NSString;

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	BWGraph* _graph;
	BOOL _graphRunning;
	NSSet* _allSensorIDStrings;
	NSDictionary* _defaultSensorIDsByPortType;
	BWDeferredProcessingSourceNode* _sourceNode;
	FigCaptureDeferredProcessingJob* _job;
	BOOL _interactiveQoS;
	long long _graphPrepareDurationNS;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedProcessingEngine;
-(id)init;
-(void)dealloc;
-(void)releaseResources;
-(void)executeJob:(id)arg1 ;
-(void)graphDidPrepareNodes:(id)arg1 ;
-(void)graph:(id)arg1 didFinishStartingWithError:(int)arg2 ;
-(void)_reportCoreAnalyticsDataWithError:(int)arg1 container:(id)arg2 ;
-(void)_runJob;
-(void)_handleJobCompletion:(int)arg1 ;
-(void)_prepareGraphForCurrentJob;
-(void)_cleanupFromJob;
-(id)_photoPortType;
@end

