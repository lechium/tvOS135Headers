/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface DADConnection : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSObject*<OS_dispatch_queue> _muckingWithConn;
	NSObject*<OS_dispatch_queue> _muckingWithInFlightCollections;
	NSMutableSet* _accountIdsWithAlreadyResetCerts;
	NSMutableSet* _accountIdsWithAlreadyResetThrottleTimers;
	/*^block*/id _statusReportBlock;
	NSMutableDictionary* _inFlightSearchQueries;
	NSMutableDictionary* _inFlightFolderChanges;
	NSMutableDictionary* _inFlightAttachmentDownloads;
	NSMutableDictionary* _inFlightCalendarAvailabilityRequests;
	NSMutableDictionary* _inFlightCalendarDirectorySearches;
	NSMutableDictionary* _inFlightShareRequests;
	NSMutableDictionary* _inFlightOofSettingsRequests;
	NSMutableDictionary* _inFlightGrantedDelegatesListRequests;
	NSMutableDictionary* _inFlightUpdateGrantedDelegatePermissionRequests;
	BOOL _registered;

}

@property (assign,nonatomic) BOOL registered;              //@synthesize registered=_registered - In the implementation block
+(id)sharedConnection;
+(unsigned long long)_nextStopMonitoringStatusToken;
+(void)setShouldIgnoreAccountChanges;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)_init;
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
-(void)handleURL:(id)arg1 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(void)_tearDownInFlightObjects;
-(void)_initializeConnection;
-(void)_initializeXPCConnection:(id)arg1 ;
-(void)_serverDiedWithReason:(id)arg1 ;
-(void)_dispatchMessage:(id)arg1 ;
-(id)decodedErrorFromData:(id)arg1 ;
-(id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2 ;
-(void)reallyRegisterForInterrogation;
-(BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(BOOL)arg3 ;
-(void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)_checkInvalidIdExistsInXPCRely:(id)arg1 ;
-(BOOL)_validateXPCReply:(id)arg1 ;
-(void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1 withToken:(unsigned long long)arg2 waitForReply:(BOOL)arg3 ;
-(void)_resetThrottleTimersForAccountId:(id)arg1 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(/*^block*/id)arg2 ;
-(void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2 ;
-(void)externalIdentificationInfoForAccountID:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
-(void)_registerForAppResumedNotification;
-(void)resetTimersAndWarnings;
-(void)_foldersUpdated:(id)arg1 ;
-(void)_policyKeyChanged:(id)arg1 ;
-(void)_logDataAccessStatus:(id)arg1 ;
-(void)_serverContactsSearchQueryFinished:(id)arg1 ;
-(void)_folderChangeFinished:(id)arg1 ;
-(void)_getStatusReportsFromClient:(id)arg1 ;
-(void)_downloadProgress:(id)arg1 ;
-(void)_downloadFinished:(id)arg1 ;
-(void)_shareResponseFinished:(id)arg1 ;
-(void)_oofSettingsRequestsFinished:(id)arg1 ;
-(void)_calendarAvailabilityRequestReturnedResults:(id)arg1 ;
-(void)_calendarAvailabilityRequestFinished:(id)arg1 ;
-(void)_grantedDelegatesListRequestFinished:(id)arg1 ;
-(void)_updateGrantedDelegatePermissionRequestFinished:(id)arg1 ;
-(void)_calendarDirectorySearchReturnedResults:(id)arg1 ;
-(void)_calendarDirectorySearchFinished:(id)arg1 ;
-(void)_initializeConnectionWithXPCEndpoint:(id)arg1 ;
-(BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(BOOL)requestPolicyUpdateForAccountID:(id)arg1 ;
-(id)currentPolicyKeyForAccountID:(id)arg1 ;
-(void)requestDaemonStartMonitoringAgentsWithToken:(unsigned long long)arg1 ;
-(unsigned long long)requestDaemonStopMonitoringAgents;
-(void)requestDaemonStartMonitoringAgentsSyncWithToken:(unsigned long long)arg1 ;
-(unsigned long long)requestDaemonStopMonitoringAgentsSync;
-(void)removeStoresForAccountWithID:(id)arg1 ;
-(void)requestDaemonShutdown;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 ;
-(BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 ;
-(BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)cancelServerContactsSearch:(id)arg1 ;
-(BOOL)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4 ;
-(void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2 ;
-(void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 ;
-(id)statusReports;
-(BOOL)registerForInterrogationWithBlock:(/*^block*/id)arg1 ;
-(void)fillOutCurrentEASTimeZoneInfo;
-(id)activeSyncDeviceIdentifier;
-(BOOL)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(BOOL)arg3 ;
-(BOOL)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(BOOL)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(id)requestGrantedDelegatesListForAccountID:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
-(void)cancelGrantedDelegatesListRequestWithID:(id)arg1 ;
-(id)updateGrantedDelegatePermissionForAccountID:(id)arg1 grantedDelegate:(id)arg2 resultsBlock:(/*^block*/id)arg3 ;
-(id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
@end

