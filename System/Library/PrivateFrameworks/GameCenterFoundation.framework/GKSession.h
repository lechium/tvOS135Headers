/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKConnection, NSString;

@interface GKSession : NSObject {

	id _session;

}

@property (assign) id<GKSessionPrivateDelegate> privateDelegate; 
@property (getter=isBusy) BOOL busy; 
@property (assign) BOOL wifiEnabled; 
@property (readonly) GKConnection * connection; 
@property (assign) id<GKSessionDelegate> delegate; 
@property (readonly) NSString * sessionID; 
@property (readonly) NSString * displayName; 
@property (readonly) int sessionMode; 
@property (readonly) NSString * peerID; 
@property (getter=isAvailable) BOOL available; 
@property (assign) double disconnectTimeout; 
+(void)initialize;
-(id)description;
-(void)dealloc;
-(id<GKSessionDelegate>)delegate;
-(void)setDelegate:(id<GKSessionDelegate>)arg1 ;
-(GKConnection *)connection;
-(NSString *)sessionID;
-(NSString *)displayName;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(NSString *)peerID;
-(id<GKSessionPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<GKSessionPrivateDelegate>)arg1 ;
-(BOOL)isBusy;
-(BOOL)wifiEnabled;
-(void)setBusy:(BOOL)arg1 ;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(int)sessionMode;
-(void)disconnectFromAllPeers;
-(id)displayNameForPeer:(id)arg1 ;
-(BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4 ;
-(BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3 ;
-(void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2 ;
-(void)connectToPeer:(id)arg1 withTimeout:(double)arg2 ;
-(void)cancelConnectToPeer:(id)arg1 ;
-(BOOL)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2 ;
-(void)denyConnectionFromPeer:(id)arg1 ;
-(void)disconnectPeerFromAllPeers:(id)arg1 ;
-(id)peersWithConnectionState:(int)arg1 ;
-(BOOL)isPeerBusy:(id)arg1 ;
-(void)setDisconnectTimeout:(double)arg1 ;
-(double)disconnectTimeout;
-(id)privateImpl;
-(id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(int)arg3 ;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 ;
@end

