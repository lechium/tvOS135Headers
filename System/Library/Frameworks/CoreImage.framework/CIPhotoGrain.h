/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPhotoGrain : CIFilter {

	CIImage* inputImage;
	NSNumber* inputISO;
	NSNumber* inputAmount;
	NSNumber* inputSeed;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputISO; 
@property (nonatomic,copy) NSNumber * inputAmount; 
@property (nonatomic,copy) NSNumber * inputSeed; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(id)_interpolateGrainKernel;
-(id)_paddedTileKernel;
-(id)_grainBlendAndMixKernel;
-(NSNumber *)inputISO;
-(void)setInputISO:(NSNumber *)arg1 ;
-(NSNumber *)inputSeed;
-(void)setInputSeed:(NSNumber *)arg1 ;
@end

