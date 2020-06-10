/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRExternalDevice.h>
#import <libobjc.A.dylib/MRProtocolClientConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction;
@class NSObject, CURunLoopThread, NSDate, MRExternalClientConnection, _MROriginProtobuf, _MRDeviceInfoMessageProtobuf, _MRNowPlayingPlayerPathProtobuf, NSDictionary, NSData, _MRContentItemProtobuf, MRExternalDeviceTransport, NSRunLoop, NSString;

@interface MRTransportExternalDevice : MRExternalDevice <MRProtocolClientConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _workerQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	CURunLoopThread* _runLoopThread;
	BOOL _wantsNowPlayingNotifications;
	BOOL _wantsNowPlayingArtworkNotifications;
	BOOL _wantsVolumeNotifications;
	BOOL _wantsOutputDeviceNotifications;
	BOOL _usingSystemPairing;
	NSDate* _connectionStateTimestamp;
	unsigned _connectionState;
	unsigned _connectionOptions;
	long long _cachedServerDisconnectError;
	unsigned long long _reconnectionAttemptCount;
	BOOL _forceReconnectOnConnectionFailure;
	BOOL _disconnecting;
	BOOL _isClientSyncActive;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _isCallingClientCallback;
	MRExternalClientConnection* _clientConnection;
	_MROriginProtobuf* _customOrigin;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSDictionary* _nowPlayingInfo;
	NSData* _nowPlayingArtwork;
	_MRContentItemProtobuf* _nowPlayingItem;
	MRExternalDeviceTransport* _transport;
	long long _connectionRecoveryBehavior;
	/*^block*/id _pairingCallback;
	NSObject*<OS_dispatch_queue> _pairingCallbackQueue;
	/*^block*/id _connectionStateCallback;
	NSObject*<OS_dispatch_queue> _connectionStateCallbackQueue;
	/*^block*/id _nameCallback;
	NSObject*<OS_dispatch_queue> _nameCallbackQueue;
	/*^block*/id _pairingAllowedCallback;
	NSObject*<OS_dispatch_queue> _pairingAllowedCallbackQueue;
	/*^block*/id _customDataCallback;
	NSObject*<OS_dispatch_queue> _customDataCallbackQueue;
	/*^block*/id _outputDevicesUpdatedCallback;
	NSObject*<OS_dispatch_queue> _outputDevicesUpdatedCallbackQueue;
	/*^block*/id _outputDevicesRemovedCallback;
	NSObject*<OS_dispatch_queue> _outputDevicesRemovedCallbackQueue;
	/*^block*/id _volumeCallback;
	NSObject*<OS_dispatch_queue> _volumeCallbackQueue;
	/*^block*/id _volumeControlCapabilitiesCallback;
	NSObject*<OS_dispatch_queue> _volumeControlCapabilitiesCallbackQueue;
	NSObject*<OS_dispatch_queue> _outputContextCallbackQueue;
	NSRunLoop* _runLoop;

}

@property (nonatomic,retain) MRExternalClientConnection * clientConnection;                                    //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,retain) _MROriginProtobuf * customOrigin;                                                 //@synthesize customOrigin=_customOrigin - In the implementation block
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfo;                                        //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) NSData * nowPlayingArtwork;                                                       //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (nonatomic,retain) NSDictionary * nowPlayingInfo;                                                    //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) _MRContentItemProtobuf * nowPlayingItem;                                          //@synthesize nowPlayingItem=_nowPlayingItem - In the implementation block
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                                     //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) id pairingCallback;                                                                 //@synthesize pairingCallback=_pairingCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pairingCallbackQueue;                                //@synthesize pairingCallbackQueue=_pairingCallbackQueue - In the implementation block
@property (nonatomic,copy) id connectionStateCallback;                                                         //@synthesize connectionStateCallback=_connectionStateCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionStateCallbackQueue;                        //@synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue - In the implementation block
@property (nonatomic,copy) id nameCallback;                                                                    //@synthesize nameCallback=_nameCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nameCallbackQueue;                                   //@synthesize nameCallbackQueue=_nameCallbackQueue - In the implementation block
@property (nonatomic,copy) id pairingAllowedCallback;                                                          //@synthesize pairingAllowedCallback=_pairingAllowedCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pairingAllowedCallbackQueue;                         //@synthesize pairingAllowedCallbackQueue=_pairingAllowedCallbackQueue - In the implementation block
@property (nonatomic,copy) id customDataCallback;                                                              //@synthesize customDataCallback=_customDataCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> customDataCallbackQueue;                             //@synthesize customDataCallbackQueue=_customDataCallbackQueue - In the implementation block
@property (nonatomic,copy) id outputDevicesUpdatedCallback;                                                    //@synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outputDevicesUpdatedCallbackQueue;                   //@synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue - In the implementation block
@property (nonatomic,copy) id outputDevicesRemovedCallback;                                                    //@synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outputDevicesRemovedCallbackQueue;                   //@synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue - In the implementation block
@property (nonatomic,copy) id volumeCallback;                                                                  //@synthesize volumeCallback=_volumeCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> volumeCallbackQueue;                                 //@synthesize volumeCallbackQueue=_volumeCallbackQueue - In the implementation block
@property (nonatomic,copy) id volumeControlCapabilitiesCallback;                                               //@synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> volumeControlCapabilitiesCallbackQueue;              //@synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outputContextCallbackQueue;                          //@synthesize outputContextCallbackQueue=_outputContextCallbackQueue - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                                              //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,readonly) MRExternalDeviceTransport * transport;                                          //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) long long connectionRecoveryBehavior;                                             //@synthesize connectionRecoveryBehavior=_connectionRecoveryBehavior - In the implementation block
@property (assign,nonatomic) BOOL isCallingClientCallback;                                                     //@synthesize isCallingClientCallback=_isCallingClientCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(long long)port;
-(void)setName:(id)arg1 ;
-(id)hostName;
-(NSRunLoop *)runLoop;
-(MRExternalDeviceTransport *)transport;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(MRExternalClientConnection *)clientConnection;
-(void)setClientConnection:(MRExternalClientConnection *)arg1 ;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)supportedMessages;
-(void)setUsingSystemPairing:(BOOL)arg1 ;
-(void)connectWithOptions:(unsigned)arg1 ;
-(void)disconnect:(id)arg1 ;
-(void)unpair;
-(void)sendCustomData:(id)arg1 withName:(id)arg2 ;
-(void)setConnectionStateCallback:(id)arg1 ;
-(void)setConnectionStateCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNameCallback:(id)arg1 ;
-(void)setNameCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCustomDataCallback:(id)arg1 ;
-(void)setCustomDataCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setVolumeCallback:(id)arg1 ;
-(void)setVolumeCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)connectionStateCallback;
-(NSObject*<OS_dispatch_queue>)connectionStateCallbackQueue;
-(NSObject*<OS_dispatch_queue>)nameCallbackQueue;
-(id)nameCallback;
-(NSObject*<OS_dispatch_queue>)customDataCallbackQueue;
-(id)customDataCallback;
-(NSObject*<OS_dispatch_queue>)volumeCallbackQueue;
-(id)volumeCallback;
-(BOOL)wantsNowPlayingNotifications;
-(void)setWantsNowPlayingNotifications:(BOOL)arg1 ;
-(BOOL)wantsVolumeNotifications;
-(void)setWantsVolumeNotifications:(BOOL)arg1 ;
-(BOOL)wantsOutputDeviceNotifications;
-(void)setWantsOutputDeviceNotifications:(BOOL)arg1 ;
-(unsigned)connectionState;
-(BOOL)isPaired;
-(BOOL)isUsingSystemPairing;
-(_MROriginProtobuf *)customOrigin;
-(void)setPairingCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setConnectionStateCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setNameCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setPairingAllowedCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setCustomDataCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setVolumeCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)modifyOutputContextOfType:(unsigned)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)ping:(double)arg1 callback:(/*^block*/id)arg2 withQueue:(id)arg3 ;
-(void)sendButtonEvent:(MRHIDButtonEvent)arg1 ;
-(id)initWithTransport:(id)arg1 ;
-(void)sendClientUpdatesConfigMessage;
-(void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(BOOL)wantsNowPlayingArtworkNotifications;
-(id)errorForCurrentState;
-(void)setIsCallingClientCallback:(BOOL)arg1 ;
-(id)currentClientUpdatesConfigMessage;
-(void)setWantsNowPlayingArtworkNotifications:(BOOL)arg1 ;
-(void)_localDeviceInfoDidChangeNotification:(id)arg1 ;
-(void)_transportDeviceInfoDidChangeNotification:(id)arg1 ;
-(void)_contentItemUpdatedNotification:(id)arg1 ;
-(void)_handleDeviceInfoChange:(id)arg1 oldDevice:(id)arg2 ;
-(void)_cleanUpWithReason:(long long)arg1 ;
-(void)_onSerialQueue_registerOriginCallbacks;
-(void)_updateNowPlayingInfo;
-(void)setNowPlayingItem:(_MRContentItemProtobuf *)arg1 ;
-(void)setNowPlayingArtwork:(NSData *)arg1 ;
-(void)_callClientConnectionStateCallback:(unsigned)arg1 previousConnectionState:(unsigned)arg2 error:(id)arg3 ;
-(void)setPairingCallback:(id)arg1 ;
-(void)setPairingCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPairingAllowedCallback:(id)arg1 ;
-(void)setPairingAllowedCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOutputDevicesUpdatedCallback:(id)arg1 ;
-(void)setOutputDevicesUpdatedCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOutputDevicesRemovedCallback:(id)arg1 ;
-(void)setOutputDevicesRemovedCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setVolumeControlCapabilitiesCallback:(id)arg1 ;
-(void)setVolumeControlCapabilitiesCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_cleanUpStreamsWithReason:(long long)arg1 ;
-(id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned)arg1 ;
-(id)_onWorkerQueue_loadDeviceInfo;
-(id)_onWorkerQueue_openSecuritySession;
-(id)_onWorkerQueue_setupCustomOrigin;
-(id)_onWorkerQueue_reRegisterCustomOrigin;
-(id)_onWorkerQueue_syncClientState;
-(void)setConnectionState:(unsigned)arg1 error:(id)arg2 ;
-(void)_onWorkerQueue_connectWithOptions:(unsigned)arg1 isRetry:(BOOL)arg2 ;
-(void)_onSerialQueue_prepareToConnectWithOptions:(unsigned)arg1 ;
-(void)_onWorkerQueue_disconnect:(id)arg1 ;
-(void)_onSerialQueue_prepareToDisconnect:(id)arg1 ;
-(void)sendClientUpdatesConfigMessageWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleCryptoPairingMessage:(id)arg1 ;
-(void)_handleSetStateMessage:(id)arg1 ;
-(void)_handleNotificationMessage:(id)arg1 ;
-(void)_handleSetArtworkMessage:(id)arg1 ;
-(void)_handleTransactionMessage:(id)arg1 ;
-(void)_handleDeviceInfoUpdateMessage:(id)arg1 ;
-(void)_handleSetConnectionStateMessage:(id)arg1 ;
-(void)_handleGenericMessage:(id)arg1 ;
-(void)_handleSetNowPlayingClientMessage:(id)arg1 ;
-(void)_handleSetNowPlayingPlayerMessage:(id)arg1 ;
-(void)_handleRemoveClientMessage:(id)arg1 ;
-(void)_handleRemovePlayerMessage:(id)arg1 ;
-(void)_handleUpdateClientMessage:(id)arg1 ;
-(void)_handleUpdateContentItemsMessage:(id)arg1 ;
-(void)_handleUpdateContentItemArtworkMessage:(id)arg1 ;
-(void)_handleUpdatePlayerMessage:(id)arg1 ;
-(void)_handlePromptForRouteAuthorizationMessage:(id)arg1 ;
-(void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1 ;
-(void)_handleVolumeDidChangeMessage:(id)arg1 ;
-(void)_handleVolumeControlCapabilitiesDidChangeMessage:(id)arg1 ;
-(void)_handleLegacyVolumeControlCapabilitiesDidChangeMessage:(id)arg1 ;
-(void)_handleOutputDevicesUpdatedMessage:(id)arg1 ;
-(void)_handleOutputDevicesRemovedMessage:(id)arg1 ;
-(void)_handleSetDefaultSupportedCommandsMessage:(id)arg1 ;
-(void)setCustomOrigin:(_MROriginProtobuf *)arg1 ;
-(void)_callClientPairingCallback:(/*^block*/id)arg1 ;
-(void)_handleRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 playerPath:(void*)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handlePlaybackQueueRequest:(void*)arg1 forPlayer:(void*)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handlePlaybackSessionRequest:(void*)arg1 forPlayerPath:(void*)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handlePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handlePlaybackSessionMigrateBeginRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handlePlaybackSessionMigrateEndRequest:(id)arg1 error:(id)arg2 forPlayerPath:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleLegacyPlaybackQueueRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_handlePlaybackQueueResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)veirfyConnectionStatusAndMaybeDisconnect:(id)arg1 ;
-(id)_createPlaybackQueue:(BOOL)arg1 ;
-(void)_handleSetStateMessageModern:(id)arg1 ;
-(void)_handleSetStateMessageLegacy:(id)arg1 ;
-(void)_handleNotificationMessageModern:(id)arg1 ;
-(void)_handleNotificationMessageLegacy:(id)arg1 ;
-(void)_callOutputDevicesUpdatedCallbackWithOutputDevices:(id)arg1 ;
-(void)_callOutputDevicesRemovedCallbackWithOutputDeviceUIDs:(id)arg1 ;
-(void)_callVolumeCallback:(float)arg1 outputDeviceUID:(id)arg2 ;
-(void)_callVolumeControlCapabilitiesCallback:(unsigned)arg1 outputDeviceUID:(id)arg2 ;
-(void)_callClientNameCallback;
-(void)_callClientAllowsPairingCallback;
-(void)_callClientCustomDataCallback:(id)arg1 name:(id)arg2 ;
-(_MRContentItemProtobuf *)nowPlayingItem;
-(void)clientDidDisconnect:(id)arg1 ;
-(NSData *)nowPlayingArtwork;
-(void)setOutputDevicesUpdatedCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setOutputDevicesRemovedCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)setVolumeControlCapabilitiesCallback:(/*^block*/id)arg1 withQueue:(id)arg2 ;
-(void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)connectionRecoveryBehavior;
-(void)setConnectionRecoveryBehavior:(long long)arg1 ;
-(BOOL)isCallingClientCallback;
-(id)pairingCallback;
-(NSObject*<OS_dispatch_queue>)pairingCallbackQueue;
-(id)pairingAllowedCallback;
-(NSObject*<OS_dispatch_queue>)pairingAllowedCallbackQueue;
-(id)outputDevicesUpdatedCallback;
-(NSObject*<OS_dispatch_queue>)outputDevicesUpdatedCallbackQueue;
-(id)outputDevicesRemovedCallback;
-(NSObject*<OS_dispatch_queue>)outputDevicesRemovedCallbackQueue;
-(id)volumeControlCapabilitiesCallback;
-(NSObject*<OS_dispatch_queue>)volumeControlCapabilitiesCallbackQueue;
-(NSObject*<OS_dispatch_queue>)outputContextCallbackQueue;
-(void)setOutputContextCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

