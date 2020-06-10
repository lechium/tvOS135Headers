/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIMirror : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputAngle;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) NSNumber * inputAngle; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(Rectangle)computeDOD:(vec2)arg1 tst:(vec3)arg2 off:(vec4)arg3 mtx:(vec4)arg4 ;
-(CIVector *)inputPoint;
-(void)setInputPoint:(CIVector *)arg1 ;
@end

