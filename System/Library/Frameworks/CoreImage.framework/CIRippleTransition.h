/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIRippleTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputShadingImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputWidth;
	NSNumber* inputScale;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIRippleTransition;
@end

