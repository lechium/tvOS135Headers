/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface FigIrisAutoTrimmerMotionSample : NSObject {

	int _vitalityObjectCount;
	double _timestamp;
	double _deltaPeriod;
	NSDictionary* _inferences;
	NSMutableDictionary* _intermediateCalculations;
	SCD_Struct_Fi16 _gravity;
	SCD_Struct_BW2 _originatingFrameTime;
	SCD_Struct_Fi17 _attitude;
	SCD_Struct_Fi17 _delta;
	SCD_Struct_Fi17 _accel;

}

@property (nonatomic,readonly) SCD_Struct_BW2 originatingFrameTime;                         //@synthesize originatingFrameTime=_originatingFrameTime - In the implementation block
@property (nonatomic,readonly) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 cmTimestamp; 
@property (nonatomic,readonly) double deltaPeriod;                                          //@synthesize deltaPeriod=_deltaPeriod - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi17 attitude;                                    //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi17 delta;                                       //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi17 accel;                                       //@synthesize accel=_accel - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi16 gravity;                                     //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,retain) NSDictionary * inferences;                                     //@synthesize inferences=_inferences - In the implementation block
@property (assign,nonatomic) int vitalityObjectCount;                                       //@synthesize vitalityObjectCount=_vitalityObjectCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * intermediateCalculations;              //@synthesize intermediateCalculations=_intermediateCalculations - In the implementation block
+(void)initialize;
-(void)dealloc;
-(SCD_Struct_Fi16)gravity;
-(double)timestamp;
-(SCD_Struct_Fi17)delta;
-(SCD_Struct_Fi17)attitude;
-(id)initWithAttitude:(const SCD_Struct_Fi17*)arg1 gravity:(const SCD_Struct_Fi16*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_BW2)arg4 previousSample:(id)arg5 ;
-(SCD_Struct_Fi17)attitudeRelativeTo:(id)arg1 ;
-(void)prepareIntermediates:(long long)arg1 ;
-(SCD_Struct_BW2)cmTimestamp;
-(SCD_Struct_BW2)originatingFrameTime;
-(double)deltaPeriod;
-(SCD_Struct_Fi17)accel;
-(NSDictionary *)inferences;
-(void)setInferences:(NSDictionary *)arg1 ;
-(int)vitalityObjectCount;
-(void)setVitalityObjectCount:(int)arg1 ;
-(NSMutableDictionary *)intermediateCalculations;
@end

