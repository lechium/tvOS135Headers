/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRCoreUtilsPairingSession.h>

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession
+(id)pairingManager;
+(BOOL)systemPairingAvailable;
+(id)globalPairingQueue;
-(id)removePeer;
-(id)updatePeer;
-(id)updateMediaRemotePairedDevice:(id)arg1 ;
-(id)pairedPeerDevices;
-(id)mediaRemotePairedDevices;
-(void*)_createPeerDeviceFromPairedPeer:(id)arg1 ;
-(id)initializePairingSession:(PairingSessionPrivateRef)arg1 ;
-(BOOL)shouldRetry;
-(BOOL)shouldAutoRetryPairingExchange:(id)arg1 ;
-(id)addPeer;
-(id)pairedPeerDevice;
-(id)pairedPeerFromPeerDevice:(void*)arg1 ;
@end

