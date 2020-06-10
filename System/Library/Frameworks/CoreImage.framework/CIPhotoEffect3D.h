/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPhotoEffect3D : CIFilter {

	CIImage* inputImage;
	CIImage* inputDepthMap;
	NSNumber* inputThreshold;
	NSNumber* inputGrainAmount;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputDepthMap; 
@property (nonatomic,retain) NSNumber * inputThreshold; 
@property (nonatomic,retain) NSNumber * inputGrainAmount; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(id)init;
-(void)setDefaults;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(int)_defaultVersion;
-(int)_maxVersion;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(id)cubeName;
-(id)cubePath;
-(id)cubeColorSpaceName;
-(int)_maxVersionBG;
-(id)backgroundCubeName;
-(id)applyCubeWithName:(id)arg1 toImage:(id)arg2 ;
-(id)_CIPhotoEffectDepthBlend;
-(id)backgroundCubePath;
-(CIImage *)inputDepthMap;
-(void)setInputDepthMap:(CIImage *)arg1 ;
-(NSNumber *)inputGrainAmount;
-(void)setInputGrainAmount:(NSNumber *)arg1 ;
@end

