/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPortraitBlurDirectionalBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputMaxBlur;
	NSNumber* inputHorizontalBlur;
	NSNumber* inputAntiAliasBlurStrength;
	NSNumber* inputUseMetal;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputMaxBlur; 
@property (nonatomic,copy) NSNumber * inputHorizontalBlur; 
@property (nonatomic,copy) NSNumber * inputAntiAliasBlurStrength; 
@property (nonatomic,copy) NSNumber * inputUseMetal; 
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputMaxBlur;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(id)_kernelMetal;
-(NSNumber *)inputUseMetal;
-(void)setInputUseMetal:(NSNumber *)arg1 ;
-(NSNumber *)inputHorizontalBlur;
-(void)setInputHorizontalBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputAntiAliasBlurStrength;
-(void)setInputAntiAliasBlurStrength:(NSNumber *)arg1 ;
@end

