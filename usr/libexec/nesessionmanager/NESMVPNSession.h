//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

#import "NEVPNAuthenticationPluginDelegate-Protocol.h"
#import "NEVPNTunnelPluginDelegate-Protocol.h"

@class NEPluginPreferences, NESMVPNSessionState, NETunnelNetworkSettings, NEUserNotification, NEVPNAuthenticationPlugin, NEVPNProtocol, NEVPNTunnelPlugin, NSMutableArray, NSMutableDictionary, NSObject, NSString, NWPathEvaluator;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface NESMVPNSession : NESMSession <NEVPNAuthenticationPluginDelegate, NEVPNTunnelPluginDelegate>
{
    _Bool _isSecondaryConnection;	// 8 = 0x8
    _Bool _handlingNetworkDetectionEvent;	// 9 = 0x9
    _Bool _sleepOnDisconnect;	// 10 = 0xa
    _Bool _isSecondaryInterface;	// 11 = 0xb
    _Bool _reassertedByPlugin;	// 12 = 0xc
    int _sessionType;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_tunnelConfigQueue;	// 24 = 0x18
    NSObject<OS_xpc_object> *_establishIPCReply;	// 32 = 0x20
    NSObject<OS_xpc_object> *_establishIPCMessage;	// 40 = 0x28
    long long _pendingConfigurationChanges;	// 48 = 0x30
    CDUnknownBlockType _pendingConfigurationChangeCompletionHandler;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_pendingConfigurationChangeTimer;	// 64 = 0x40
    NWPathEvaluator *_IDSNexusPathEvaluator;	// 72 = 0x48
    unsigned long long _IDSNexusIfIndex;	// 80 = 0x50
    NSString *_IDSNexusDomain;	// 88 = 0x58
    long long _state;	// 96 = 0x60
    NESMVPNSessionState *_stateHandler;	// 104 = 0x68
    NSMutableDictionary *_connectParameters;	// 112 = 0x70
    struct NEVirtualInterface_s *_virtualInterface;	// 120 = 0x78
    NEVPNAuthenticationPlugin *_authenticationPlugin;	// 128 = 0x80
    NEVPNTunnelPlugin *_primaryTunnelPlugin;	// 136 = 0x88
    NEVPNTunnelPlugin *_auxiliaryTunnelPlugin;	// 144 = 0x90
    NEVPNProtocol *_protocol;	// 152 = 0x98
    NSMutableDictionary *_cachedStateHandlers;	// 160 = 0xa0
    NEPluginPreferences *_preferences;	// 168 = 0xa8
    NETunnelNetworkSettings *_pluginConfigurationEntities;	// 176 = 0xb0
    long long _parentType;	// 184 = 0xb8
    NESMSession *_parent;	// 192 = 0xc0
    long long _tunnelKind;	// 200 = 0xc8
    NSString *_interfaceName;	// 208 = 0xd0
    NSMutableArray *_setConfigurationCompletionHandlerArray;	// 216 = 0xd8
    CDUnknownBlockType _pluginCompletionHandler;	// 224 = 0xe0
    NEUserNotification *_notification;	// 232 = 0xe8
    NSString *_delegateInterfaceAddress;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000100022ef4
@property(retain) NSString *delegateInterfaceAddress; // @synthesize delegateInterfaceAddress=_delegateInterfaceAddress;
@property(retain) NEUserNotification *notification; // @synthesize notification=_notification;
@property _Bool reassertedByPlugin; // @synthesize reassertedByPlugin=_reassertedByPlugin;
@property(copy) CDUnknownBlockType pluginCompletionHandler; // @synthesize pluginCompletionHandler=_pluginCompletionHandler;
@property(retain) NSMutableArray *setConfigurationCompletionHandlerArray; // @synthesize setConfigurationCompletionHandlerArray=_setConfigurationCompletionHandlerArray;
@property(retain) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property long long tunnelKind; // @synthesize tunnelKind=_tunnelKind;
@property _Bool isSecondaryInterface; // @synthesize isSecondaryInterface=_isSecondaryInterface;
@property __weak NESMSession *parent; // @synthesize parent=_parent;
@property long long parentType; // @synthesize parentType=_parentType;
@property(retain) NETunnelNetworkSettings *pluginConfigurationEntities; // @synthesize pluginConfigurationEntities=_pluginConfigurationEntities;
@property(readonly) NEPluginPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain) NSMutableDictionary *cachedStateHandlers; // @synthesize cachedStateHandlers=_cachedStateHandlers;
@property(retain) NEVPNProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain) NEVPNTunnelPlugin *auxiliaryTunnelPlugin; // @synthesize auxiliaryTunnelPlugin=_auxiliaryTunnelPlugin;
@property(retain) NEVPNTunnelPlugin *primaryTunnelPlugin; // @synthesize primaryTunnelPlugin=_primaryTunnelPlugin;
@property(retain) NEVPNAuthenticationPlugin *authenticationPlugin; // @synthesize authenticationPlugin=_authenticationPlugin;
@property struct NEVirtualInterface_s *virtualInterface; // @synthesize virtualInterface=_virtualInterface;
@property _Bool sleepOnDisconnect; // @synthesize sleepOnDisconnect=_sleepOnDisconnect;
@property(retain) NSMutableDictionary *connectParameters; // @synthesize connectParameters=_connectParameters;
@property(retain) NESMVPNSessionState *stateHandler; // @synthesize stateHandler=_stateHandler;
@property int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain) NSString *IDSNexusDomain; // @synthesize IDSNexusDomain=_IDSNexusDomain;
@property unsigned long long IDSNexusIfIndex; // @synthesize IDSNexusIfIndex=_IDSNexusIfIndex;
@property(retain) NWPathEvaluator *IDSNexusPathEvaluator; // @synthesize IDSNexusPathEvaluator=_IDSNexusPathEvaluator;
@property _Bool handlingNetworkDetectionEvent; // @synthesize handlingNetworkDetectionEvent=_handlingNetworkDetectionEvent;
@property(retain) NSObject<OS_dispatch_source> *pendingConfigurationChangeTimer; // @synthesize pendingConfigurationChangeTimer=_pendingConfigurationChangeTimer;
@property(copy) CDUnknownBlockType pendingConfigurationChangeCompletionHandler; // @synthesize pendingConfigurationChangeCompletionHandler=_pendingConfigurationChangeCompletionHandler;
@property long long pendingConfigurationChanges; // @synthesize pendingConfigurationChanges=_pendingConfigurationChanges;
@property(retain) NSObject<OS_xpc_object> *establishIPCMessage; // @synthesize establishIPCMessage=_establishIPCMessage;
@property(retain) NSObject<OS_xpc_object> *establishIPCReply; // @synthesize establishIPCReply=_establishIPCReply;
@property(retain) NSObject<OS_dispatch_queue> *tunnelConfigQueue; // @synthesize tunnelConfigQueue=_tunnelConfigQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010002267c
- (void)unwatchIDSNexusPath;	// IMP=0x0000000100022554
- (void)watchIDSNexusPath;	// IMP=0x00000001000223b4
- (void)invalidate;	// IMP=0x0000000100022350
- (void)handleInstalledAppsChanged;	// IMP=0x0000000100022204
- (_Bool)resetPerAppPolicy;	// IMP=0x0000000100021d00
- (_Bool)prepareConfigurationForStart;	// IMP=0x0000000100021cac
@property(readonly) NSString *pluginType;
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x00000001000215c4
- (void)prepareNetwork;	// IMP=0x0000000100021428
- (void)setLastDisconnectError:(id)arg1;	// IMP=0x0000000100021378
- (void)setLastStopReason:(int)arg1;	// IMP=0x00000001000212dc
- (void)setStatus:(int)arg1;	// IMP=0x0000000100021210
- (unsigned char)isInterfaceIPAvailable:(const char *)arg1;	// IMP=0x00000001000210c4
@property _Bool isSecondaryConnection;
- (int)getReassertTimeout;	// IMP=0x0000000100020ef4
- (void)uninstall;	// IMP=0x0000000100020840
- (void)setConfiguration;	// IMP=0x0000000100020148
- (_Bool)removeTunnelDataPolicies;	// IMP=0x00000001000200fc
- (_Bool)applyTunnelDataPolicies;	// IMP=0x000000010001fd6c
- (_Bool)applyFallbackTunnelDataPolicies;	// IMP=0x000000010001f9a4
- (void)handleNetworkConfigurationChange:(long long)arg1;	// IMP=0x000000010001f7c0
- (void)queueChangesToTunnelConfiguration:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ef88
- (void)updateRouteCache;	// IMP=0x000000010001eabc
- (_Bool)setupVirtualInterface;	// IMP=0x000000010001de2c
- (_Bool)setupDNS;	// IMP=0x000000010001d5e8
- (_Bool)setupProxies;	// IMP=0x000000010001d304
- (void)resetVirtualInterface;	// IMP=0x000000010001d100
- (void)setDelegateInterfaceAddressFromInterfaceWithName:(id)arg1;	// IMP=0x000000010001cfe8
- (void)handleSetConfigurationResult:(_Bool)arg1;	// IMP=0x000000010001cdc8
- (id)copyTunnelInterfaceName;	// IMP=0x000000010001cdac
- (void)popSetConfigurationCompletionHandler:(id)arg1;	// IMP=0x000000010001cba4
- (void)pushSetConfigurationCompletionHandler;	// IMP=0x000000010001ca8c
- (void)installPended;	// IMP=0x000000010001ca7c
- (void)install;	// IMP=0x000000010001c9b4
- (void)requestUninstall;	// IMP=0x000000010001c91c
- (void)requestInstall;	// IMP=0x000000010001c7bc
- (void)setEndpointInEstablishIPCReply:(id)arg1 forPlugin:(id)arg2;	// IMP=0x000000010001c568
- (_Bool)shouldSendIPCAttachForPlugin:(id)arg1;	// IMP=0x000000010001c3c0
@property(readonly) _Bool establishIPCPending;
- (void)sendEstablishIPCReply;	// IMP=0x000000010001c224
- (void)plugin:(id)arg1 didAttachIPCWithEndpoint:(id)arg2;	// IMP=0x000000010001c19c
- (void)plugin:(id)arg1 didSetConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001bef8
- (_Bool)addRoutes:(struct __CFArray *)arg1 excluded:(_Bool)arg2 inetFamily:(int)arg3;	// IMP=0x000000010001ba5c
- (_Bool)pinPlugin:(id)arg1 toConfigurationWithAuditTokens:(id)arg2;	// IMP=0x000000010001ba54
- (void)setDelegateInterfaceName:(id)arg1;	// IMP=0x000000010001b7e8
- (void)plugin:(id)arg1 didInitializeWithUUIDs:(id)arg2;	// IMP=0x000000010001b6e4
- (void)plugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x000000010001b110
- (struct NEVirtualInterface_s *)plugin:(id)arg1 didRequestVirtualInterfaceOfType:(long long)arg2 maxPendingPackets:(unsigned long long)arg3;	// IMP=0x000000010001aca0
- (void)pluginDidClearConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ab58
- (void)plugin:(id)arg1 didSetStatus:(long long)arg2 andDisconnectError:(id)arg3;	// IMP=0x000000010001a834
- (void)plugin:(id)arg1 didSetStatus:(long long)arg2 andStopReason:(int)arg3;	// IMP=0x000000010001a680
- (void)pluginDidDetachIPC:(id)arg1;	// IMP=0x000000010001a614
- (void)pluginDidAcknowledgeSleep:(id)arg1;	// IMP=0x000000010001a588
- (void)plugin:(id)arg1 didFinishAuthenticationWithResults:(id)arg2 status:(int)arg3 andError:(id)arg4;	// IMP=0x000000010001a4d4
- (void)plugin:(id)arg1 didSetPersistentData:(struct __CFDictionary *)arg2 ofType:(long long)arg3;	// IMP=0x000000010001a424
- (void)pluginDidDispose:(id)arg1;	// IMP=0x000000010001a29c
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x000000010001a124
- (void)handleNetworkPrepareResult:(id)arg1;	// IMP=0x000000010001a090
- (void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 previousFlags:(unsigned long long)arg3;	// IMP=0x0000000100019cd4
- (void)notifyPluginInterfaceChangeEvent:(id)arg1 delegateInterface:(id)arg2 flags:(unsigned long long)arg3;	// IMP=0x0000000100019b80
- (void)resetPluginPolicies:(_Bool)arg1 ifHasProxy:(_Bool)arg2 ifname:(id)arg3;	// IMP=0x00000001000193a8
- (_Bool)proxyEnabled:(id)arg1;	// IMP=0x000000010001921c
- (id)pluginPIDArray;	// IMP=0x0000000100018f74
- (_Bool)interface:(id)arg1 hasIPAddress:(id)arg2 currentFlags:(unsigned long long)arg3;	// IMP=0x0000000100018dd4
- (void)handleUserSwitch;	// IMP=0x0000000100018cfc
- (void)handleUserLogout;	// IMP=0x0000000100018c24
- (void)handleWakeup;	// IMP=0x0000000100018b4c
- (void)handleSleepTime:(double)arg1;	// IMP=0x00000001000189cc
- (_Bool)handleSleep;	// IMP=0x0000000100018908
- (id)copyExtendedStatus;	// IMP=0x0000000100017fdc
- (id)copyStatistics;	// IMP=0x0000000100017f0c
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100017e3c
- (void)handleEstablishIPCMessage:(id)arg1;	// IMP=0x0000000100017920
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x00000001000178b0
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010001761c
- (void)registerSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100017548
- (void)unsetDefaultDropAll;	// IMP=0x000000010001733c
- (void)setDefaultDropAll;	// IMP=0x0000000100016eac
- (void)createConnectParametersWithStartMessage:(id)arg1;	// IMP=0x0000000100015cc0
- (void)handleInitializeState;	// IMP=0x0000000100015a3c
- (void)checkPluginInstalledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000156ec
- (_Bool)initializePlugins;	// IMP=0x0000000100014ea0
- (id)createAgent;	// IMP=0x0000000100014b78
- (void)resetProviderDesignatedRequirementInConfiguration:(id)arg1;	// IMP=0x0000000100014a68
@property(retain, nonatomic) NSString *providerDesignatedRequirement;
@property(readonly, nonatomic) NSString *authenticationPluginBundleIdentifier;
@property(readonly, nonatomic) NSString *providerBundleIdentifier;
- (_Bool)hasProviderWithBundleIdentifier:(id)arg1;	// IMP=0x000000010001487c
@property(readonly, nonatomic) long long agentPluginClass;
- (id)copyInfoForLegacyPluginsInDirectory:(id)arg1;	// IMP=0x00000001000143c0
- (void)addDefaultDropPolicyForPluginUUIDs:(id)arg1;	// IMP=0x0000000100014228
- (void)dealloc;	// IMP=0x0000000100013eb4
- (int)type;	// IMP=0x0000000100013ea8
- (id)description;	// IMP=0x0000000100013cf4
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andPluginType:(id)arg4 andSessionType:(int)arg5;	// IMP=0x0000000100013c38
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andPluginType:(id)arg4 andSessionType:(int)arg5 sessionQueue:(id)arg6 messageQueue:(id)arg7 tunnelKind:(long long)arg8 parent:(id)arg9;	// IMP=0x00000001000136b8
- (id)stringForTunnelKind;	// IMP=0x0000000100013674

@end

