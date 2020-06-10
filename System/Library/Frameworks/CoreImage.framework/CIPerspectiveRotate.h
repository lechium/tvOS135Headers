/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPerspectiveRotate : CIFilter {

	float3x3 K;
	float3x3 invK;
	CIImage* inputImage;
	NSNumber* inputFocalLength;
	NSNumber* inputPitch;
	NSNumber* inputYaw;
	NSNumber* inputRoll;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputFocalLength; 
@property (nonatomic,copy) NSNumber * inputPitch; 
@property (nonatomic,copy) NSNumber * inputYaw; 
@property (nonatomic,copy) NSNumber * inputRoll; 
@property (nonatomic,readonly) float3x3 outputTransform; 
+(id)customAttributes;
-(float3x3)outputTransform;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)computeCameraIntrinsics;
-(NSNumber *)inputFocalLength;
-(void)setInputFocalLength:(NSNumber *)arg1 ;
-(NSNumber *)inputPitch;
-(void)setInputPitch:(NSNumber *)arg1 ;
-(NSNumber *)inputYaw;
-(void)setInputYaw:(NSNumber *)arg1 ;
-(NSNumber *)inputRoll;
-(void)setInputRoll:(NSNumber *)arg1 ;
@end

