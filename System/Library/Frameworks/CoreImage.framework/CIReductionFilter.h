/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIReductionFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputExtent;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(id)_reduceCrop;
-(id)offsetAndCrop;
@end

