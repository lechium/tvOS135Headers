/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIDisintegrateWithMaskTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputMaskImage;
	NSNumber* inputTime;
	NSNumber* inputShadowRadius;
	NSNumber* inputShadowDensity;
	CIVector* inputShadowOffset;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputShadowRadius; 
@property (nonatomic,retain) NSNumber * inputShadowDensity; 
@property (nonatomic,retain) CIVector * inputShadowOffset; 
+(id)customAttributes;
-(void)setInputTime:(NSNumber *)arg1 ;
-(NSNumber *)inputTime;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(id)_kernelG;
-(NSNumber *)inputShadowRadius;
-(void)setInputShadowRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputShadowDensity;
-(void)setInputShadowDensity:(NSNumber *)arg1 ;
-(CIVector *)inputShadowOffset;
-(void)setInputShadowOffset:(CIVector *)arg1 ;
@end

