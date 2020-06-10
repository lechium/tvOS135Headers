/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISharpenLuminance : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSharpness;
	NSNumber* inputRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
@property (nonatomic,retain) NSNumber * inputRadius; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputSharpness;
-(void)setInputSharpness:(NSNumber *)arg1 ;
@end

