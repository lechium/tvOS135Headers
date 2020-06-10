/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSObject;

@interface FigCapturePowerMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _torchHandler;
	OpaqueFigSimpleMutexRef _maxTorchLevelLock;
	float _maxTorchLevel;

}

@property (readonly) float maxTorchLevel; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)_powerNotification:(unsigned)arg1 ;
-(void)setPowerHandler:(/*^block*/id)arg1 ;
-(float)maxTorchLevel;
@end

