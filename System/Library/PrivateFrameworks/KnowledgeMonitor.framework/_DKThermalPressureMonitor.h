/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKThermalPressureMonitor : _DKMonitor {

	BOOL _initialized;
	int _thermalPressureToken;
	int _lastThermalPressureLevel;

}

@property (assign,nonatomic) BOOL initialized;                          //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) int thermalPressureToken;                  //@synthesize thermalPressureToken=_thermalPressureToken - In the implementation block
@property (assign,nonatomic) int lastThermalPressureLevel;              //@synthesize lastThermalPressureLevel=_lastThermalPressureLevel - In the implementation block
+(id)entitlements;
+(id)eventStream;
-(void)dealloc;
-(BOOL)initialized;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(void)setInitialized:(BOOL)arg1 ;
-(id)loadState;
-(void)saveState;
-(void)setCurrentThermalLevel:(int)arg1 ;
-(int)thermalPressureToken;
-(void)getThermalPressureLevelWithToken:(int)arg1 ;
-(void)setThermalPressureToken:(int)arg1 ;
-(int)lastThermalPressureLevel;
-(void)setLastThermalPressureLevel:(int)arg1 ;
@end

