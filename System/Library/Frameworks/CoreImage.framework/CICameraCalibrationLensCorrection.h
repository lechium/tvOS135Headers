/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, AVCameraCalibrationData, NSNumber;

@interface CICameraCalibrationLensCorrection : CIFilter {

	CIImage* inputImage;
	AVCameraCalibrationData* inputAVCameraCalibrationData;
	NSNumber* inputUseInverseLookUpTable;

}
+(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(CGPoint)ReferenceensDistortionPointForPoint:(CGPoint)arg1 lookupTable:(id)arg2 distortionOpticalCenter:(CGPoint)arg3 imageSize:(CGSize)arg4 ;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
@end

