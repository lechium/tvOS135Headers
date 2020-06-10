/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBManager.h>

@protocol CBScalablePipeManagerDelegate;
@class NSMutableSet, NSHashTable, NSSet;

@interface CBScalablePipeManager : CBManager {

	NSMutableSet* _identifiers;
	struct {
		unsigned didRegisterEndpoint : 1;
		unsigned didUnregisterEndpoint : 1;
		unsigned pipeDidConnect : 1;
		unsigned pipeDidDisconnect : 1;
	}  _delegateFlags;
	id<CBScalablePipeManagerDelegate> _delegate;
	NSHashTable* _pipes;

}

@property (nonatomic,retain,readonly) NSHashTable * pipes;                                   //@synthesize pipes=_pipes - In the implementation block
@property (assign,nonatomic,__weak) id<CBScalablePipeManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSSet * identifiers;                                   //@synthesize identifiers=_identifiers - In the implementation block
-(void)dealloc;
-(id<CBScalablePipeManagerDelegate>)delegate;
-(void)setDelegate:(id<CBScalablePipeManagerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)sharedPairingAgent;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(void)orphanPipes;
-(void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 options:(id)arg4 ;
-(id)pipeForName:(id)arg1 identifier:(id)arg2 ;
-(void)handleEndpointAdded:(id)arg1 ;
-(void)handleEndpointRemoved:(id)arg1 ;
-(void)handlePipeConnected:(id)arg1 ;
-(void)handlePipeDisconnected:(id)arg1 ;
-(void)handleHostStateUpdated:(id)arg1 ;
-(void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 ;
-(void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 transport:(long long)arg4 ;
-(void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 transport:(long long)arg4 requireEncryption:(BOOL)arg5 ;
-(void)unregisterEndpoint:(id)arg1 ;
-(void)unregisterAllEndpoints;
-(void)setLinkRequirementsForPeer:(id)arg1 packetsPerSecond:(unsigned)arg2 inputBytesPerSecond:(unsigned)arg3 outputBytesPerSecond:(unsigned)arg4 ;
-(void)setLinkRequirementsForPeer:(id)arg1 withClientName:(id)arg2 packetsPerSecond:(unsigned)arg3 inputBytesPerSecond:(unsigned)arg4 outputBytesPerSecond:(unsigned)arg5 ;
-(void)setLinkRequirementsForPeerWithLatency:(id)arg1 latencyInMs:(unsigned)arg2 inputBytesPerSecond:(unsigned)arg3 outputBytesPerSecond:(unsigned)arg4 ;
-(NSSet *)identifiers;
-(NSHashTable *)pipes;
@end

