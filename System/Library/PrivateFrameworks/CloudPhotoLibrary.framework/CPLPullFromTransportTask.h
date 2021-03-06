/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@class CPLScopeFilter;

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask {

	CPLScopeFilter* _scopeFilter;

}

@property (nonatomic,retain) CPLScopeFilter * scopeFilter;              //@synthesize scopeFilter=_scopeFilter - In the implementation block
-(id)taskIdentifier;
-(id)enumerateScopesForTaskInTransaction:(id)arg1 ;
-(id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4 ;
-(CPLScopeFilter *)scopeFilter;
-(void)setScopeFilter:(CPLScopeFilter *)arg1 ;
-(BOOL)shouldProcessScope:(id)arg1 inTransaction:(id)arg2 ;
@end

