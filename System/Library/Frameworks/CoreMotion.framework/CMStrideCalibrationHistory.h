/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CMStrideCalibrationHistory : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _calibrationTracks;
	NSArray* _rawSpeedToKValueBins;
	NSArray* _stepCadenceToStrideLengthBins;

}

@property (nonatomic,retain) NSArray * calibrationTracks;                          //@synthesize calibrationTracks=_calibrationTracks - In the implementation block
@property (nonatomic,retain) NSArray * rawSpeedToKValueBins;                       //@synthesize rawSpeedToKValueBins=_rawSpeedToKValueBins - In the implementation block
@property (nonatomic,retain) NSArray * stepCadenceToStrideLengthBins;              //@synthesize stepCadenceToStrideLengthBins=_stepCadenceToStrideLengthBins - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCalibrationTracks:(id)arg1 rawSpeedToKValueBins:(id)arg2 stepCadenceToStrideLengthBins:(id)arg3 ;
-(NSArray *)calibrationTracks;
-(void)setCalibrationTracks:(NSArray *)arg1 ;
-(NSArray *)rawSpeedToKValueBins;
-(void)setRawSpeedToKValueBins:(NSArray *)arg1 ;
-(NSArray *)stepCadenceToStrideLengthBins;
-(void)setStepCadenceToStrideLengthBins:(NSArray *)arg1 ;
@end

