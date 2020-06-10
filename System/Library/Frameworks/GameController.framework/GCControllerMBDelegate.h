/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSTimer;

@interface GCControllerMBDelegate : NSObject {

	BTSessionImplRef _session;
	BTPairingAgentImplRef _pairingAgent;
	BTDiscoveryAgentImplRef _discoveryAgent;
	NSTimer* _timer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)stopScan;
-(void)startScan;
-(void)fireCompletionHandler;
-(void)scanTimeout:(id)arg1 ;
@end
