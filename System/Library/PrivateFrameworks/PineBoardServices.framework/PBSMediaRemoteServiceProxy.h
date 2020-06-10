/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBSMediaRemoteServiceInterface.h>

@protocol _PBSMediaRemoteServiceInternalInterface;
@class NSMapTable, NSString;

@interface PBSMediaRemoteServiceProxy : NSObject <PBSMediaRemoteServiceInterface> {

	BOOL _volumeControlAvailable;
	BOOL _reliableTVAVRPowerControlAvailable;
	int _volumeControlNotifyToken;
	int _TVAVRPowerControlNotifyToken;
	id<_PBSMediaRemoteServiceInternalInterface> _remoteProxy;
	NSMapTable* _pendingCompletionHandlers;

}

@property (assign,nonatomic) int volumeControlNotifyToken;                                         //@synthesize volumeControlNotifyToken=_volumeControlNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL volumeControlAvailable;                                          //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) int TVAVRPowerControlNotifyToken;                                     //@synthesize TVAVRPowerControlNotifyToken=_TVAVRPowerControlNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL reliableTVAVRPowerControlAvailable;                              //@synthesize reliableTVAVRPowerControlAvailable=_reliableTVAVRPowerControlAvailable - In the implementation block
@property (nonatomic,retain) id<_PBSMediaRemoteServiceInternalInterface> remoteProxy;              //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,readonly) NSMapTable * pendingCompletionHandlers;                             //@synthesize pendingCompletionHandlers=_pendingCompletionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_booleanStateForToken:(int)arg1 ;
-(void)dealloc;
-(id)showPinDialogWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissPinDialogWithToken:(id)arg1 ;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)volumeControlAvailable;
-(id<_PBSMediaRemoteServiceInternalInterface>)remoteProxy;
-(void)startSiriWithContext:(id)arg1 ;
-(void)stopSiriWithContext:(id)arg1 ;
-(void)setRemoteProxy:(id<_PBSMediaRemoteServiceInternalInterface>)arg1 ;
-(id)initWithRemoteServiceProxy:(id)arg1 ;
-(void)handleConnectionInterruption:(id)arg1 ;
-(NSMapTable *)pendingCompletionHandlers;
-(void)activateSiriWithContext:(id)arg1 ;
-(void)_handleVolumeControlAvailableDidChange;
-(int)volumeControlNotifyToken;
-(void)_handleTVAVRPowerControlAvailableDidChange;
-(int)TVAVRPowerControlNotifyToken;
-(/*^block*/id)_removeCompletionHandlerForToken:(id)arg1 ;
-(void)setReliableTVAVRPowerControlAvailable:(BOOL)arg1 ;
-(void)_addCompletionHandler:(/*^block*/id)arg1 forToken:(id)arg2 ;
-(void)noteUserPresenceDetected;
-(BOOL)reliableTVAVRPowerControlAvailable;
-(void)setVolumeControlNotifyToken:(int)arg1 ;
-(void)setTVAVRPowerControlNotifyToken:(int)arg1 ;
@end

