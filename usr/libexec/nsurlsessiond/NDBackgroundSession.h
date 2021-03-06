//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NDApplicationObserver-Protocol.h"
#import "NDBackgroundSessionProtocol-Protocol.h"
#import "NDCallbackQueueDelegate-Protocol.h"
#import "NDCredentialStorageDelegate-Protocol.h"
#import "NSURLSessionDataDelegate_Internal-Protocol.h"
#import "NSURLSessionDelegate_Internal-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate_Private-Protocol.h"
#import "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class NDApplication, NDCallbackQueue, NDCredentialStorage, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSURLSession, NSUUID, NSXPCConnection;
@protocol NDBackgroundSessionDelegate, NSXPCProxyCreating><NDBackgroundSessionClient, OS_dispatch_queue;

@interface NDBackgroundSession : NSObject <NDApplicationObserver, NDBackgroundSessionProtocol, NDCallbackQueueDelegate, NSURLSessionDataDelegate_Internal, NSURLSessionDownloadDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDownloadDelegate_Private, NSURLSessionDelegate_Internal, NDCredentialStorageDelegate>
{
    NSURLSession *_userInitiatedSession;	// 8 = 0x8
    NSURLSession *_discretionaryPrioritySession;	// 16 = 0x10
    NDCredentialStorage *_credentialStorage;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_archiveQueue;	// 32 = 0x20
    NDApplication *_clientApplication;	// 40 = 0x28
    NDApplication *_connectedExtension;	// 48 = 0x30
    NSMutableDictionary *_tasksToIdentifiers;	// 56 = 0x38
    NSMutableDictionary *_identifiersToTasks;	// 64 = 0x40
    NSMutableDictionary *_identifiersToMonitors;	// 72 = 0x48
    NSMutableDictionary *_identifiersToStreams;	// 80 = 0x50
    NSMutableDictionary *_identifiersToStreamQueues;	// 88 = 0x58
    NSMutableArray *_outstandingTaskIDs;	// 96 = 0x60
    double _lastArchiveTime;	// 104 = 0x68
    NSURL *_sessionDirectory;	// 112 = 0x70
    NSURL *_downloadDirectory;	// 120 = 0x78
    NSURL *_uploadsDirectory;	// 128 = 0x80
    _Bool _performsEVCertCheck;	// 136 = 0x88
    _Bool _clientImplementsWillSendRequest;	// 137 = 0x89
    _Bool _clientImplementsWillBeginDelayedRequest;	// 138 = 0x8a
    _Bool _clientImplementsSessionChallenge;	// 139 = 0x8b
    _Bool _clientImplementsTaskChallenge;	// 140 = 0x8c
    _Bool _sendsLaunchEvents;	// 141 = 0x8d
    _Bool _discretionary;	// 142 = 0x8e
    _Bool _obliterated;	// 143 = 0x8f
    _Bool _cleanedUp;	// 144 = 0x90
    _Bool _hasBeenSignalledToDeliverPendingEvents;	// 145 = 0x91
    _Bool _infersDiscretionary;	// 146 = 0x92
    _Bool _shouldPullInitialCredentials;	// 147 = 0x93
    CDUnknownBlockType _completeReconnectionBlock;	// 152 = 0x98
    int _clientPID;	// 160 = 0xa0
    NSXPCConnection *_xpcConn;	// 168 = 0xa8
    NSString *_watchExtensionBundleIdentifier;	// 176 = 0xb0
    _Bool _retryDataTasks;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_workQueue;	// 192 = 0xc0
    NDCallbackQueue *_callbackQueue;	// 200 = 0xc8
    NDApplication *_monitoredApplication;	// 208 = 0xd0
    NSMutableDictionary *_identifiersToTaskInfo;	// 216 = 0xd8
    id <NSXPCProxyCreating><NDBackgroundSessionClient> _clientProxy;	// 224 = 0xe0
    id <NDBackgroundSessionDelegate> _delegate;	// 232 = 0xe8
    NSUUID *_uuid;	// 240 = 0xf0
    NSString *_identifier;	// 248 = 0xf8
    NSString *_clientBundleID;	// 256 = 0x100
    NSString *_monitoredAppBundleID;	// 264 = 0x108
    NSString *_secondaryID;	// 272 = 0x110
    CDUnknownBlockType _invalidateReply;	// 280 = 0x118
    NSString *_sharedContainerIdentifier;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x0000000100028814
@property(copy) NSString *sharedContainerIdentifier; // @synthesize sharedContainerIdentifier=_sharedContainerIdentifier;
@property(copy) CDUnknownBlockType invalidateReply; // @synthesize invalidateReply=_invalidateReply;
@property(readonly) NSString *secondaryID; // @synthesize secondaryID=_secondaryID;
@property(readonly) NSString *monitoredAppBundleID; // @synthesize monitoredAppBundleID=_monitoredAppBundleID;
@property(readonly) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak id <NDBackgroundSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100028238
- (void)_URLSession:(id)arg1 openFileAtPath:(id)arg2 mode:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027ea4
- (id)_URLSession:(id)arg1 downloadTaskNeedsDownloadDirectory:(id)arg2;	// IMP=0x0000000100027e18
- (void)_URLSession:(id)arg1 downloadTask:(id)arg2 didReceiveResponse:(id)arg3;	// IMP=0x0000000100027b40
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x00000001000279bc
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;	// IMP=0x00000001000277e4
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000270f0
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0000000100026ed8
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x0000000100026c70
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0000000100026a2c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x0000000100026670
- (void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000261ec
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100025c08
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100025bf8
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100024c94
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024938
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x00000001000247f4
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100023c68
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002316c
- (_Bool)trustPassesExtendedValidation:(struct __SecTrust *)arg1;	// IMP=0x0000000100022fa0
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000100022e78
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022cbc
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022c5c
- (void)setTLSSessionCachePrefix:(id)arg1;	// IMP=0x0000000100022be8
- (void)setDiscretionaryOverride:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000227c8
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100022668
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100022508
- (void)setExpectedProgressTarget:(unsigned long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000223a8
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100022178
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100021e78
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x000000010002166c
- (void)setDescription:(id)arg1 forTask:(unsigned long long)arg2;	// IMP=0x00000001000214ec
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100021240
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1 withProperties:(id)arg2;	// IMP=0x0000000100020d4c
- (_Bool)shouldContinueDownloadBasedOnDiskSpace:(unsigned long long)arg1;	// IMP=0x0000000100020a60
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100020878
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100020674
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x0000000100020474
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x0000000100020464
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x0000000100020454
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000200e8
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 sandboxExtensionData:(id)arg4 identifier:(unsigned long long)arg5 uniqueIdentifier:(id)arg6 potentialCredentials:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x000000010001fab4
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 downloadFilePath:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010001f544
- (void)downloadTaskWithResumeData:(id)arg1 identifier:(unsigned long long)arg2 uniqueIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010001f118
- (void)performCommonSetupForTask:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3 discretionaryStatus:(_Bool)arg4;	// IMP=0x000000010001ecec
- (void)setupDASPropertiesOnTask:(id)arg1 taskInfo:(id)arg2 discretionaryStatus:(_Bool)arg3;	// IMP=0x000000010001e510
- (void)wakeUpClient;	// IMP=0x000000010001dfa8
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x000000010001dca8
- (void)errorOccurredDuringAuthCallbackDelivery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001dbf8
- (void)errorOccurredDuringFinishedCallbackDelivery:(id)arg1;	// IMP=0x000000010001dba4
- (id)getClientProxy;	// IMP=0x000000010001db9c
- (id)inputStreamWithFileHandle:(id)arg1 taskIdentifier:(unsigned long long)arg2;	// IMP=0x000000010001da04
- (id)makeTempUploadFile:(id)arg1 withExtensionData:(id)arg2;	// IMP=0x000000010001d66c
- (void)requeueTask:(unsigned long long)arg1;	// IMP=0x000000010001d65c
- (void)requeueTask:(unsigned long long)arg1 skipResume:(_Bool)arg2;	// IMP=0x000000010001d600
- (void)removeOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000010001d594
- (void)addOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000010001d528
- (void)enqueueTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000010001d2e8
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x000000010001d030
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x000000010001cd0c
- (void)handleWillBeginDelayedRequestForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c6b4
- (void)handleEarliestBeginDateForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c208
- (void)cancelMonitorForTask:(unsigned long long)arg1;	// IMP=0x000000010001c104
- (_Bool)currentDiscretionaryStatus:(id)arg1 withOptionalTaskInfo:(id)arg2;	// IMP=0x000000010001b8b0
- (long long)priorityForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x000000010001b89c
- (id)getTLSSessionCachePrefix;	// IMP=0x000000010001b864
- (id)getTasksForReconnection;	// IMP=0x000000010001b72c
- (void)triggerPowerlogPeriodicUpdate;	// IMP=0x000000010001b56c
- (void)fillInPropertiesForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x000000010001b498
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x000000010001b384
- (void)allowReconnect;	// IMP=0x000000010001b32c
- (void)reconnectClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b08c
- (void)clientDidDisconnect;	// IMP=0x000000010001afcc
- (void)cancelTasksRequiringClientConnectionAndResumeUnstartedTasks;	// IMP=0x000000010001ab78
- (_Bool)finalizeTaskCompletionWithSuppressedWake:(_Bool)arg1;	// IMP=0x000000010001aaec
- (void)handleCompletionOfTask:(id)arg1 identifier:(unsigned long long)arg2 taskInfo:(id)arg3 isRecoverable:(_Bool)arg4 suppressWake:(_Bool)arg5;	// IMP=0x000000010001a9c0
- (_Bool)clientIsActive;	// IMP=0x000000010001a9b0
- (_Bool)sessionHasOutstandingTasks;	// IMP=0x000000010001a988
- (void)removeUploadFileForTaskInfo:(id)arg1;	// IMP=0x000000010001a914
- (void)removeDownloadFileForTaskInfo:(id)arg1;	// IMP=0x000000010001a85c
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2 transactionMetrics:(id)arg3;	// IMP=0x0000000100019e1c
- (id)clientErrorForError:(id)arg1;	// IMP=0x0000000100019ba4
- (id)restoreTasks:(_Bool *)arg1;	// IMP=0x0000000100019a24
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x0000000100019924
- (id)restoreTask:(id)arg1 isOutstanding:(_Bool *)arg2;	// IMP=0x00000001000194b8
- (id)restoreCompletedTask:(id)arg1;	// IMP=0x0000000100018e6c
- (id)restoreInProgressTask:(id)arg1;	// IMP=0x00000001000187e0
- (id)createNewTaskFromInfo:(id)arg1;	// IMP=0x0000000100018254
- (void)ensureSessionDownloadDirectoryExists;	// IMP=0x00000001000180b0
- (void)configureTask:(id)arg1 withTaskInfo:(id)arg2;	// IMP=0x0000000100017e10
- (void)configureAdditionalPropertiesOnTask:(id)arg1 taskInfo:(id)arg2;	// IMP=0x0000000100017be8
- (id)sanitizeTaskProperties:(id)arg1;	// IMP=0x0000000100017370
- (id)adjustDiscretionaryStatusForTaskInfo:(id)arg1;	// IMP=0x00000001000172e0
- (void)updateTaskInfoBasedOnCurrentDiscretionaryStatus:(id)arg1;	// IMP=0x00000001000170ec
- (id)requestWithAdjustedWindowForTaskInfo:(id)arg1;	// IMP=0x0000000100016dd0
- (id)descriptionForTCPConnectionWaitingReason:(long long)arg1;	// IMP=0x0000000100016c98
- (id)descriptionForRequest:(id)arg1;	// IMP=0x0000000100016b68
- (id)descriptionForTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100016a78
- (void)archiveTaskInfo:(_Bool)arg1;	// IMP=0x0000000100016a08
- (id)tasksArchivePath;	// IMP=0x0000000100016990
- (void)obliterate;	// IMP=0x000000010001677c
- (void)cleanupSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016650
- (id)setupDownloadDirectory;	// IMP=0x00000001000163fc
- (void)clientApplicationWasReinstalled;	// IMP=0x0000000100015f2c
- (void)backgroundUpdatesEnabledForApplication:(id)arg1;	// IMP=0x0000000100015ea8
- (void)applicationWasSuspended:(id)arg1;	// IMP=0x0000000100015e24
- (_Bool)hasConnectedClient;	// IMP=0x0000000100015e04
- (void)setXPCConnection:(id)arg1;	// IMP=0x0000000100015b98
- (id)sessionForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x0000000100015b80
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x0000000100014c14
- (id)configurationWithClientConfiguration:(id)arg1 discretionary:(_Bool)arg2;	// IMP=0x0000000100013ce8
- (double)defaultWindowDurationForResourceTimeout:(double)arg1;	// IMP=0x0000000100013cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

