/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSData, NSIndexSet;

@interface AVApplePortraitMetadataInternal : NSObject {

	int version;
	float apertureFocalRatio;
	float minimumApertureFocalRatio;
	float maximumApertureFocalRatio;
	float portraitLightingEffectStrength;
	float luminanceNoiseAmplitude;
	int faceOrientation;
	NSData* faceObservationsData;
	NSIndexSet* indexesOfShallowDepthOfFieldObservations;
	CGRect focusRectangle;

}

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) float apertureFocalRatio; 
@property (assign,nonatomic) float minimumApertureFocalRatio; 
@property (assign,nonatomic) float maximumApertureFocalRatio; 
@property (assign,nonatomic) float portraitLightingEffectStrength; 
@property (assign,nonatomic) float luminanceNoiseAmplitude; 
@property (assign,nonatomic) int faceOrientation; 
@property (nonatomic,retain) NSData * faceObservationsData; 
@property (nonatomic,retain) NSIndexSet * indexesOfShallowDepthOfFieldObservations; 
@property (assign,nonatomic) CGRect focusRectangle; 
-(id)init;
-(void)dealloc;
-(int)version;
-(void)setVersion:(int)arg1 ;
-(int)faceOrientation;
-(void)setFaceOrientation:(int)arg1 ;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(float)portraitLightingEffectStrength;
-(float)apertureFocalRatio;
-(void)setApertureFocalRatio:(float)arg1 ;
-(float)minimumApertureFocalRatio;
-(void)setMinimumApertureFocalRatio:(float)arg1 ;
-(float)maximumApertureFocalRatio;
-(void)setMaximumApertureFocalRatio:(float)arg1 ;
-(float)luminanceNoiseAmplitude;
-(void)setLuminanceNoiseAmplitude:(float)arg1 ;
-(NSData *)faceObservationsData;
-(void)setFaceObservationsData:(NSData *)arg1 ;
-(NSIndexSet *)indexesOfShallowDepthOfFieldObservations;
-(void)setIndexesOfShallowDepthOfFieldObservations:(NSIndexSet *)arg1 ;
-(CGRect)focusRectangle;
-(void)setFocusRectangle:(CGRect)arg1 ;
@end

