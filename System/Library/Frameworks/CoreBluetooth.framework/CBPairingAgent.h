/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBPairingAgentDelegate, CBPairingAgentParentDelegate;
@interface CBPairingAgent : NSObject {

	BOOL _useOOBMode;
	id<CBPairingAgentDelegate> _delegate;
	id<CBPairingAgentParentDelegate> _parentManager;

}

@property (assign,nonatomic,__weak) id<CBPairingAgentParentDelegate> parentManager;              //@synthesize parentManager=_parentManager - In the implementation block
@property (assign,nonatomic,__weak) id<CBPairingAgentDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useOOBMode;                                                    //@synthesize useOOBMode=_useOOBMode - In the implementation block
-(void)dealloc;
-(id<CBPairingAgentDelegate>)delegate;
-(void)setDelegate:(id<CBPairingAgentDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2 ;
-(id)initWithParentManager:(id)arg1 ;
-(void)updateRegistration;
-(void)setParentManager:(id<CBPairingAgentParentDelegate>)arg1 ;
-(id<CBPairingAgentParentDelegate>)parentManager;
-(void)pairPeer:(id)arg1 options:(id)arg2 ;
-(void)handlePairingRequested:(id)arg1 ;
-(void)handlePairingCompleted:(id)arg1 ;
-(void)handleUnpaired:(id)arg1 ;
-(BOOL)isPeerPaired:(id)arg1 ;
-(BOOL)isPeerCloudPaired:(id)arg1 ;
-(BOOL)isPeerMagicPaired:(id)arg1 ;
-(id)retrievePairedPeers;
-(void)pairPeer:(id)arg1 ;
-(void)pairPeer:(id)arg1 useMITM:(BOOL)arg2 ;
-(void)unpairPeer:(id)arg1 ;
-(void)respondToPairingRequest:(id)arg1 type:(long long)arg2 accept:(BOOL)arg3 data:(id)arg4 ;
-(void)setUseOOBMode:(BOOL)arg1 ;
-(id)retrieveOOBDataForPeer:(id)arg1 ;
-(void)setOOBPairingEnabled:(BOOL)arg1 forPeer:(id)arg2 ;
-(BOOL)useOOBMode;
@end

