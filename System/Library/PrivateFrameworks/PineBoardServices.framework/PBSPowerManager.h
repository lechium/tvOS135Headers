/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface PBSPowerManager : NSObject {

	BOOL _deviceAsleep;
	BOOL _deviceSleptManually;
	BOOL _needsDisplayWakeOnPowerOn;
	int _sleepStateNotificationToken;
	unsigned _pmNoIdleSleepAssertionID;
	unsigned _pmSystemActivityAssertionID;
	unsigned _ioNotifier;
	unsigned _ioConnection;
	NSTimer* _powerAssertionTimer;
	unsigned long long _sleepState;

}

@property (assign,getter=isDeviceAsleep,nonatomic) BOOL deviceAsleep;              //@synthesize deviceAsleep=_deviceAsleep - In the implementation block
@property (assign,nonatomic) BOOL deviceSleptManually;                             //@synthesize deviceSleptManually=_deviceSleptManually - In the implementation block
@property (nonatomic,retain) NSTimer * powerAssertionTimer;                        //@synthesize powerAssertionTimer=_powerAssertionTimer - In the implementation block
@property (assign,nonatomic) BOOL needsDisplayWakeOnPowerOn;                       //@synthesize needsDisplayWakeOnPowerOn=_needsDisplayWakeOnPowerOn - In the implementation block
@property (assign,nonatomic) unsigned long long sleepState;                        //@synthesize sleepState=_sleepState - In the implementation block
@property (assign,nonatomic) int sleepStateNotificationToken;                      //@synthesize sleepStateNotificationToken=_sleepStateNotificationToken - In the implementation block
@property (assign,nonatomic) unsigned pmNoIdleSleepAssertionID;                    //@synthesize pmNoIdleSleepAssertionID=_pmNoIdleSleepAssertionID - In the implementation block
@property (assign,nonatomic) unsigned pmSystemActivityAssertionID;                 //@synthesize pmSystemActivityAssertionID=_pmSystemActivityAssertionID - In the implementation block
@property (assign,nonatomic) unsigned ioNotifier;                                  //@synthesize ioNotifier=_ioNotifier - In the implementation block
@property (assign,nonatomic) unsigned ioConnection;                                //@synthesize ioConnection=_ioConnection - In the implementation block
+(void)load;
+(id)sharedInstance;
+(void)setupPowerManagement;
+(BOOL)isDeviceAsleepAndSleptManually:(BOOL*)arg1 ;
-(id)init;
-(BOOL)isDeviceAsleep;
-(void)wakeDeviceWithOptions:(id)arg1 ;
-(unsigned)ioConnection;
-(void)setIoConnection:(unsigned)arg1 ;
-(void)_registerForPowerNotifications;
-(void)_enableIdleSleepAndWatchdog;
-(BOOL)deviceSleptManually;
-(unsigned long long)sleepState;
-(void)setSleepState:(unsigned long long)arg1 ;
-(void)_setMachineToLowPowerModeWithOptions:(id)arg1 ;
-(void)_setMachineToNormalPowerModeWithOptions:(id)arg1 ;
-(int)sleepStateNotificationToken;
-(void)_setAllowIdleSleep:(BOOL)arg1 ;
-(void)setDeviceAsleep:(BOOL)arg1 ;
-(void)setDeviceSleptManually:(BOOL)arg1 ;
-(void)setNeedsDisplayWakeOnPowerOn:(BOOL)arg1 ;
-(BOOL)needsDisplayWakeOnPowerOn;
-(void)_handleWillWakeForEvents:(id)arg1 ;
-(void)_dropPowerAssertions:(id)arg1 ;
-(void)_releaseSystemActivityAssertion;
-(void)sleepDeviceWithOptions:(id)arg1 ;
-(void)_handleIOPMCallbackMessage:(unsigned)arg1 argument:(void*)arg2 ;
-(NSTimer *)powerAssertionTimer;
-(void)setPowerAssertionTimer:(NSTimer *)arg1 ;
-(void)setSleepStateNotificationToken:(int)arg1 ;
-(unsigned)pmNoIdleSleepAssertionID;
-(void)setPmNoIdleSleepAssertionID:(unsigned)arg1 ;
-(unsigned)pmSystemActivityAssertionID;
-(void)setPmSystemActivityAssertionID:(unsigned)arg1 ;
-(unsigned)ioNotifier;
-(void)setIoNotifier:(unsigned)arg1 ;
@end
