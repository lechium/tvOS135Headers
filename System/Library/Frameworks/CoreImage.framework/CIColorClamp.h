/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorClamp : CIFilter {

	CIImage* inputImage;
	CIVector* inputMinComponents;
	CIVector* inputMaxComponents;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputMinComponents; 
@property (nonatomic,retain) CIVector * inputMaxComponents; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernelAlphaPreserving;
-(CIVector *)inputMinComponents;
-(void)setInputMinComponents:(CIVector *)arg1 ;
-(CIVector *)inputMaxComponents;
-(void)setInputMaxComponents:(CIVector *)arg1 ;
@end

