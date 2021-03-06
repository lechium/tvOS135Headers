/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureCameraCalibrationDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateCameraCalibrationData;

}

@property (assign,nonatomic) BOOL discardsLateCameraCalibrationData;              //@synthesize discardsLateCameraCalibrationData=_discardsLateCameraCalibrationData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)discardsLateCameraCalibrationData;
-(void)setDiscardsLateCameraCalibrationData:(BOOL)arg1 ;
@end

