/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleServiceClientInterface.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleClient.h>

@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection, NSMutableDictionary, NSString;

@interface SBSRemoteAlertHandleXPCClient : NSObject <SBSRemoteAlertHandleServiceClientInterface, SBSRemoteAlertHandleClient> {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _connectionAccessQueue;
	BSServiceConnection* _connection;
	BOOL _connectionActivated;
	BOOL _connectionInvalidated;
	NSMutableDictionary* _handleIDToHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_connection;
-(void)_handleError:(id)arg1 ;
-(oneway void)remoteAlertHandleWithIDDidActivate:(id)arg1 ;
-(oneway void)remoteAlertHandleWithIDDidDeactivate:(id)arg1 ;
-(oneway void)remoteAlertHandleWithID:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3 ;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2 ;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2 ;
-(void)invalidateRemoteAlertHandle:(id)arg1 ;
-(void)_invalidateHandleForHandleID:(id)arg1 withError:(id)arg2 ;
@end

