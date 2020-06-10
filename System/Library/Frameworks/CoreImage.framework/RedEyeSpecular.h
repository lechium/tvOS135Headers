/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RedEyeSpecular : CIFilter {

	CIImage* inputImage;
	CIImage* inputSource;
	CIImage* inputSpecularMask;
	NSNumber* inputSpecularThreshold;
	NSNumber* inputSpecIntensity;
	NSNumber* inputDebugFlag;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputSource; 
@property (nonatomic,retain) CIImage * inputSpecularMask; 
@property (nonatomic,retain) NSNumber * inputSpecularThreshold; 
@property (nonatomic,retain) NSNumber * inputSpecIntensity; 
@property (nonatomic,retain) NSNumber * inputDebugFlag; 
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputSource;
-(void)setInputSource:(CIImage *)arg1 ;
-(CIImage *)inputSpecularMask;
-(void)setInputSpecularMask:(CIImage *)arg1 ;
-(NSNumber *)inputSpecularThreshold;
-(void)setInputSpecularThreshold:(NSNumber *)arg1 ;
-(NSNumber *)inputSpecIntensity;
-(void)setInputSpecIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputDebugFlag;
-(void)setInputDebugFlag:(NSNumber *)arg1 ;
@end

