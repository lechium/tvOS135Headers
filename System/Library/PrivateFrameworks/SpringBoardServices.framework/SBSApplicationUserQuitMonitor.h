/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSApplicationUserQuitMonitorServerToClientInterface.h>

@protocol OS_dispatch_queue, SBSApplicationUserQuitMonitorDelegate;
@class NSObject, BSServiceConnection, NSString;

@interface SBSApplicationUserQuitMonitor : NSObject <SBSApplicationUserQuitMonitorServerToClientInterface> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	BSServiceConnection* _connection;
	id<SBSApplicationUserQuitMonitorDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(oneway void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1 ;
-(void)_connectionQueue_setupAndActivate;
-(void)_connectionQueue_invalidate;
@end

