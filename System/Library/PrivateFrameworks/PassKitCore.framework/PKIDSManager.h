/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, PKIDSManagerDataSource;
@class NSMutableArray, NSMutableDictionary, PKProximityAdvertiser, NSHashTable, NSLock, NSObject, IDSService, NSArray, NSString;

@interface PKIDSManager : NSObject <IDSServiceDelegate> {

	NSMutableArray* _remoteDevices;
	NSMutableArray* _paymentRequests;
	NSMutableDictionary* _completionHandlers;
	NSMutableDictionary* _thumbnailCompletionHandlers;
	PKProximityAdvertiser* _proximityAdvertiser;
	NSHashTable* _delegates;
	NSLock* _delegatesLock;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _requestCLTMThrottleUncapToken;
	id<PKIDSManagerDataSource> _dataSource;
	NSMutableArray* _pendingCancellations;
	NSMutableDictionary* _pendingDiscoveries;
	IDSService* _service;
	NSMutableDictionary* _recentlySeenUUIDs;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSMutableArray * pendingCancellations;                   //@synthesize pendingCancellations=_pendingCancellations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingDiscoveries;                //@synthesize pendingDiscoveries=_pendingDiscoveries - In the implementation block
@property (nonatomic,retain) IDSService * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recentlySeenUUIDs;                 //@synthesize recentlySeenUUIDs=_recentlySeenUUIDs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * remoteDevices; 
@property (nonatomic,readonly) NSArray * paymentRequests; 
@property (nonatomic,readonly) NSArray * delegates; 
@property (assign,nonatomic) id<PKIDSManagerDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(IDSService *)service;
-(void)setService:(IDSService *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id<PKIDSManagerDataSource>)dataSource;
-(void)setDataSource:(id<PKIDSManagerDataSource>)arg1 ;
-(NSArray *)remoteDevices;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(NSArray *)delegates;
-(id)initWithTargetQueue:(id)arg1 ;
-(id)sendRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(id)cancelRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasRemoteDevices;
-(void)promptDetailsForVirtualCard:(id)arg1 showNotification:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithIDSService:(id)arg1 ;
-(void)_registerCTLMThrottleUncapNotification;
-(void)_registerListeners;
-(void)_createThumbnailCacheDirectory;
-(id)_remoteDevicesWithArchive;
-(void)_populateDevicesIfNeeded;
-(void)_unregisterCTLMThrottleUncapNotification;
-(BOOL)_queue_hasRemoteDevices;
-(void)discoverRemoteDevicesWithProximity:(BOOL)arg1 ;
-(BOOL)_queue_hasRegisteredAccounts;
-(void)_queue_sendDeviceDiscoveryRequestToAllDevicesWithProximity:(BOOL)arg1 ;
-(void)_queue_logCloudPairingState;
-(id)_queue_cancelRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_addThumbnailCompletionHandler:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(id)_queue_requestForIdentifier:(id)arg1 ;
-(void)_postCTLMThrottleUncapNotification;
-(BOOL)_queue_deviceIsRegistered:(id)arg1 ;
-(void)_queue_sendDiscoveryResponse:(id)arg1 toDeviceWithFromID:(id)arg2 ;
-(id)_preparePaymentDeviceResponseForRequestingDevice:(id)arg1 userDisabled:(BOOL)arg2 ;
-(void)_archiveDevicesToDisk;
-(void)_queue_removeThumbnailCompletionHandlersForKeys:(id)arg1 ;
-(void)_queue_sendDeviceDiscoveryRequestWithProximity:(BOOL)arg1 devices:(id)arg2 ;
-(void)_paymentDiscoveryResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentHostUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_thumbnailResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentDiscoveryRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentCancellationReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentClientUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentSetupRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_thumbnailRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_promptDetailsForVirtualCardRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)_fetchPaymentInstrumentsForRequestingDevice:(id)arg1 ;
-(NSArray *)paymentRequests;
-(void)discoverRemoteDevices;
-(id)sendSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateMessage:(id)arg1 ;
-(id)requestForIdentifier:(id)arg1 ;
-(void)deleteArchivedDevices;
-(NSMutableArray *)pendingCancellations;
-(void)setPendingCancellations:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)pendingDiscoveries;
-(void)setPendingDiscoveries:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)recentlySeenUUIDs;
-(void)setRecentlySeenUUIDs:(NSMutableDictionary *)arg1 ;
@end

