/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, PSYSyncCoordinator, NSString;

@interface IMDQuickSwitchController : NSObject <PSYSyncCoordinatorDelegate, IDSServiceDelegate> {

	IDSService* _quickSwitchIDSService;
	PSYSyncCoordinator* _syncCoordinator;

}

@property (nonatomic,retain) IDSService * quickSwitchIDSService;                //@synthesize quickSwitchIDSService=_quickSwitchIDSService - In the implementation block
@property (nonatomic,retain) PSYSyncCoordinator * syncCoordinator;              //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)_defaultPairedDevice;
-(void)_deleteFileAtPath:(id)arg1 ;
-(PSYSyncCoordinator *)syncCoordinator;
-(void)setSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)_cleanUpTemporaryFiles;
-(BOOL)_isPairedDeviceInProxyMode;
-(void)_initiateQuickSwitch;
-(unsigned long long)_getFileSizeAtPath:(id)arg1 ;
-(id)_getTempDBPath;
-(id)_getTempRecentsPath;
-(id)_getZippedDBPath;
-(id)_getZippedRecentsPath;
-(id)_getTruncatedDBPath;
-(id)_getDowngradedDBPath;
-(BOOL)_sendIDSMessage:(id)arg1 ;
-(void)_quickSwitchCompleted:(BOOL)arg1 ;
-(void)_notifyPSYWithResult:(BOOL)arg1 ;
-(BOOL)_sendIDSFile:(id)arg1 withCommand:(long long)arg2 ;
-(long long)_getCurrentDBVersion;
-(BOOL)_truncateDBToPath:(id)arg1 ;
-(BOOL)_sendZippedFileAtPath:(id)arg1 withCommand:(long long)arg2 ;
-(void)_notifyPSYDataSent;
-(void)_compressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_handleQuickSwitchInitiateRequest;
-(void)_handleDBVersionResponse:(id)arg1 ;
-(void)_handleRecentsRequest;
-(void)_handleQuickSwitchCompleted:(id)arg1 ;
-(void)_handleIncomingDB:(id)arg1 ;
-(void)_handleIncomingRecents:(id)arg1 ;
-(BOOL)_supportsQuickSwitchWithPairedDevice;
-(void)dummyMethod;
-(void)_decompressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_sendDBVersionResponse:(long long)arg1 ;
-(void)_sendRecentsRequest;
-(void)_sendQuickSwitchCompletedWithResult:(BOOL)arg1 ;
-(IDSService *)quickSwitchIDSService;
-(void)setQuickSwitchIDSService:(IDSService *)arg1 ;
@end

