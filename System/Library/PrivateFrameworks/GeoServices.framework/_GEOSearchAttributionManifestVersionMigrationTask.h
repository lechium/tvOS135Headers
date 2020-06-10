/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol OS_dispatch_queue, GEORequestCounterTicket, NSObject;
@class GEOSearchAttributionManifestVersionMigrator, NSObject, NSURL, GEOActiveTileGroup, GEOReportedProgress, NSURLSession, NSURLSessionDataTask, GEOSearchAttributionManifest, GEOActiveTileGroupMigrationTaskOptions, NSString, NSProgress;

@interface _GEOSearchAttributionManifestVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {

	GEOSearchAttributionManifestVersionMigrator* _migrator;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _running;
	NSURL* _newSearchAttributionManifestURL;
	GEOActiveTileGroup* _oldTileGroup;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	GEOReportedProgress* _progress;
	NSURLSession* _urlSession;
	NSURLSessionDataTask* _downloadTask;
	id<GEORequestCounterTicket> _requestCounterTicket;
	GEOSearchAttributionManifest* _attributionManifest;
	id<NSObject> _transaction;
	GEOActiveTileGroupMigrationTaskOptions* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction;                                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options;              //@synthesize options=_options - In the implementation block
-(id)init;
-(void)dealloc;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)cancel;
-(void)setOptions:(GEOActiveTileGroupMigrationTaskOptions *)arg1 ;
-(NSProgress *)progress;
-(id<NSObject>)transaction;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)populateTileGroup:(id)arg1 ;
-(void)removeOldData:(id)arg1 ;
-(long long)estimatedWeight;
-(void)setTransaction:(id<NSObject>)arg1 ;
-(id)initWithMigrator:(id)arg1 newSearchAttributionManifestURL:(id)arg2 oldTileGroup:(id)arg3 ;
-(void)_completeWithError:(id)arg1 ;
-(void)_handleResponse:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
@end

