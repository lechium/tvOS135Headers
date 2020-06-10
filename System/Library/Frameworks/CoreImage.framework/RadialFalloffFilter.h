/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIImage, NSNumber;

@interface RadialFalloffFilter : CIFilter {

	CIVector* inputExtent;
	CIImage* inputCenter;
	NSNumber* inputFalloff;
	NSNumber* inputRadius;
	NSNumber* inputAnisotropic;

}

@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputFalloff; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputAnisotropic; 
-(id)outputImage;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(NSNumber *)inputFalloff;
-(void)setInputFalloff:(NSNumber *)arg1 ;
-(NSNumber *)inputAnisotropic;
-(void)setInputAnisotropic:(NSNumber *)arg1 ;
@end

