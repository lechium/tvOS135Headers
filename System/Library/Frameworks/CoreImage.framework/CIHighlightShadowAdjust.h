/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputShadowAmount;
	NSNumber* inputHighlightAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputShadowAmount; 
@property (nonatomic,retain) NSNumber * inputHighlightAmount; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(void)setDefaults;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(int)_defaultVersion;
-(int)_maxVersion;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)_kernelSnoB_v0;
-(id)_kernelSHnoB_v0;
-(id)_kernelSH_v0;
-(id)_kernelSHnoB_v1;
-(id)_kernelSH_v1;
-(id)_kernelSHnoB_v2;
-(id)_kernelSH_v2;
-(void)setInputShadowAmount:(NSNumber *)arg1 ;
-(void)setInputHighlightAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputShadowAmount;
-(NSNumber *)inputHighlightAmount;
@end
