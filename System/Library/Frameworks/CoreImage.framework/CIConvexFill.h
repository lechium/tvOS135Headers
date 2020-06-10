/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIConvexFill : CIFilter {

	CIImage* inputImage;
	CIImage* inputCenter;
	NSNumber* inputThreshold;
	CIVector* inputAreaThresholdLoHi;
	NSNumber* inputSplat;

}

@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputThreshold; 
@property (nonatomic,retain) CIVector * inputAreaThresholdLoHi; 
@property (nonatomic,retain) NSNumber * inputSplat; 
-(id)outputImage;
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(CIVector *)inputAreaThresholdLoHi;
-(void)setInputAreaThresholdLoHi:(CIVector *)arg1 ;
-(NSNumber *)inputSplat;
-(void)setInputSplat:(NSNumber *)arg1 ;
@end
