/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;
@interface CPLTransportUpdateScopeTask : CPLEngineScopedTask {

	id<CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
	id<CPLEngineTransportUpdateTransportScopeTask> _updateTask;

}
-(void)cancel;
-(id)taskIdentifier;
-(void)launch;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
@end

