/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportGetLibraryInfoTask, CPLEngineTransportFetchTransportScopeTask;
@class NSObject, NSData;

@interface CPLScopeUpdateScopeTask : CPLEngineScopedTask {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportGetLibraryInfoTask> _getLibraryInfo;
	id<CPLEngineTransportFetchTransportScopeTask> _fetchTransportScope;
	NSData* _fetchedTransportScope;
	BOOL _retryingFetchingTransportScope;

}
-(void)cancel;
-(id)taskIdentifier;
-(void)launch;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5 ;
-(void)_getLibraryInfo;
-(void)_fetchTransportScope;
-(void)_markScopeAsDeletedAndSucceedTaskWithFlags:(id)arg1 ;
-(void)_markScopeAsFeatureDisabledWithFlags:(id)arg1 ;
-(void)_markScopeHasBadTransportScopeWithError:(id)arg1 ;
@end

