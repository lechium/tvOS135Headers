/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCMotion.h>

@class CMMotionManager, GCController;

@interface _GCAppleTVRemoteMotionProfile : GCMotion {

	SCD_Struct_GC1 _gravity;
	SCD_Struct_GC1 _prevGravity;
	SCD_Struct_GC1 _userAcceleration;
	GCQuaternion _attitude;
	GCQuaternion _prevAttitude;
	SCD_Struct_GC1 _eulerAngles;
	SCD_Struct_GC1 _prevEulerAngles;
	SCD_Struct_GC1 _rotationRate;
	float _tip;
	float _tilt;
	CMMotionManager* _motionMgr;
	BOOL _linkedOnOrAfterCompassFeature;
	BOOL _motionLite;
	BOOL _compassEnabled;
	/*^block*/id _valueChangedHandler;
	/*^block*/id _internalValueChangedHandler;
	BOOL _emulatedMotionEnabled;
	BOOL _motionUpdatedEnabled;
	BOOL _paused;
	GCController* _controller;

}
-(SCD_Struct_GC1)gravity;
-(GCQuaternion)attitude;
-(SCD_Struct_GC1)rotationRate;
-(SCD_Struct_GC1)userAcceleration;
-(float)_tilt;
-(float)_tip;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(void)_setCompassEnabled:(BOOL)arg1 ;
-(id)controller;
-(id)initWithController:(id)arg1 ;
-(/*^block*/id)valueChangedHandler;
-(void)_setMotionLite:(BOOL)arg1 ;
-(BOOL)hasAttitudeAndRotationRate;
-(BOOL)isEmulatedMicroGamepad;
-(void)_setGravity:(SCD_Struct_GC1)arg1 ;
-(void)_setUserAcceleration:(SCD_Struct_GC1)arg1 ;
-(void)_setAttitude:(GCQuaternion)arg1 ;
-(void)_setRotationRate:(SCD_Struct_GC1)arg1 ;
-(void)_startDeviceMotionUpdates;
-(void)_stopDeviceMotionUpdates;
-(BOOL)_isUpdatingDeviceMotion;
-(void)_pauseMotionUpdates:(BOOL)arg1 ;
-(void)setInternalValueChangedHandler:(/*^block*/id)arg1 ;
-(void)_startDeviceMotionUpdatesHelper;
-(/*^block*/id)_motionLiteFusedHandler;
-(void)_stopDeviceMotionUpdatesHelper;
-(/*^block*/id)internalValueChangedHandler;
@end

