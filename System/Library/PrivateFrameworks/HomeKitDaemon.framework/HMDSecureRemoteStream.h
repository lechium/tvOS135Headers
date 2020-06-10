/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSNumber, NSDate, HMDDevice, NSUUID, HMDUser, HMFPairingIdentity, HMDSecureRemoteStreamInternal, HMDAWDRemoteSessionMetric, NSString, NSArray;

@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _open;
	BOOL _idle;
	BOOL _supportsSharedIdentities;
	long long _qualityOfService;
	NSNumber* _maximumRemoteStreams;
	NSDate* _lastActivity;
	HMDDevice* _peerDevice;
	long long _role;
	NSUUID* _sessionID;
	HMDUser* _peer;
	HMFPairingIdentity* _peerIdentity;
	HMDSecureRemoteStreamInternal* _remoteSession;
	HMDDevice* _currentDevice;
	HMDAWDRemoteSessionMetric* _metric;

}

@property (nonatomic,retain) HMDDevice * peerDevice;                                     //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) HMDUser * peer;                                             //@synthesize peer=_peer - In the implementation block
@property (nonatomic,retain) HMFPairingIdentity * peerIdentity;                          //@synthesize peerIdentity=_peerIdentity - In the implementation block
@property (nonatomic,retain) HMDSecureRemoteStreamInternal * remoteSession;              //@synthesize remoteSession=_remoteSession - In the implementation block
@property (nonatomic,readonly) HMDDevice * currentDevice;                                //@synthesize currentDevice=_currentDevice - In the implementation block
@property (assign,nonatomic) BOOL supportsSharedIdentities;                              //@synthesize supportsSharedIdentities=_supportsSharedIdentities - In the implementation block
@property (nonatomic,readonly) HMDAWDRemoteSessionMetric * metric;                       //@synthesize metric=_metric - In the implementation block
@property (readonly) long long role;                                                     //@synthesize role=_role - In the implementation block
@property (copy,readonly) NSNumber * maximumRemoteStreams;                               //@synthesize maximumRemoteStreams=_maximumRemoteStreams - In the implementation block
@property (assign) long long qualityOfService;                                           //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (getter=isOpen,readonly) BOOL open;                                            //@synthesize open=_open - In the implementation block
@property (getter=isAuthenticated,readonly) BOOL authenticated; 
@property (getter=isIdle,readonly) BOOL idle;                                            //@synthesize idle=_idle - In the implementation block
@property (copy,readonly) NSDate * lastActivity;                                         //@synthesize lastActivity=_lastActivity - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
-(void)dealloc;
-(long long)role;
-(void)stop;
-(NSUUID *)sessionID;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)isOpen;
-(BOOL)isAuthenticated;
-(NSString *)propertyDescription;
-(HMDDevice *)currentDevice;
-(HMDAWDRemoteSessionMetric *)metric;
-(HMDUser *)peer;
-(void)setPeer:(HMDUser *)arg1 ;
-(NSString *)shortDescription;
-(void)setOpen:(BOOL)arg1 ;
-(HMDDevice *)peerDevice;
-(void)setPeerDevice:(HMDDevice *)arg1 ;
-(BOOL)isIdle;
-(id)logIdentifier;
-(void)_closeWithError:(id)arg1 ;
-(NSNumber *)maximumRemoteStreams;
-(void)setMaximumRemoteStreams:(NSNumber *)arg1 ;
-(void)handleSecureMessage:(id)arg1 fromTransport:(id)arg2 ;
-(id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 clientMode:(BOOL)arg3 sessionID:(id)arg4 ;
-(void)startAndInvokeOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDate *)lastActivity;
-(void)__handleAccountRemovedFromRegistry:(id)arg1 ;
-(void)__handleDeviceRemovedFromAccount:(id)arg1 ;
-(void)_configureWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRemoteSession:(HMDSecureRemoteStreamInternal *)arg1 ;
-(HMDSecureRemoteStreamInternal *)remoteSession;
-(void)closedWithError:(id)arg1 ;
-(BOOL)supportsSharedIdentities;
-(void)setPeerIdentity:(HMFPairingIdentity *)arg1 ;
-(void)__handleRemovedIdentity:(id)arg1 ;
-(void)setIdle:(BOOL)arg1 ;
-(void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleSecureMessage:(id)arg1 fromTransport:(id)arg2 logEventSession:(id)arg3 ;
-(void)setSupportsSharedIdentities:(BOOL)arg1 ;
-(HMFPairingIdentity *)peerIdentity;
@end

