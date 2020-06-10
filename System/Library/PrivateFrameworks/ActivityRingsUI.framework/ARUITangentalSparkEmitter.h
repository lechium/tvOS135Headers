/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ARUIKineticSparkEmitter.h>

@class NSString;

@interface ARUITangentalSparkEmitter : NSObject <ARUIKineticSparkEmitter> {

	float _angle;
	unsigned long long _particleCount;
	unsigned long long _bufferOffset;
	 _position;
	 _tangent;
	float _tangentalBirthRate;
	float _tangentalGravity;
	 _tangentalVelocity;
	 _tangentalSizeX;
	 _tangentalSizeY;
	 _tangentalLifeSpan;
	float _firstWindowFinalBirthTime;
	float _firstWindowFinalDeathTime;
	float _secondWindowFinalBirthTime;
	float _secondWindowFinalDeathTime;
	float _emitterStartTime;

}

@property (assign,nonatomic) float emitterStartTime;                //@synthesize emitterStartTime=_emitterStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)bufferOffset;
-(float)angle;
-(void)setAngle:(float)arg1 ;
-(id)updateForTime:(float)arg1 ;
-(unsigned long long)particleCount;
-(id)generateSparks;
-(void)setParticleCount:(unsigned long long)arg1 ;
-(void)setBufferOffset:(unsigned long long)arg1 ;
-(void)setEmitterStartTime:(float)arg1 ;
-(float)emitterStartTime;
-(id)_updateWithStartTime:(float)arg1 particleCount:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3 ;
@end

