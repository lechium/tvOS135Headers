/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDocumentEnhancer : CIFilter {

	CIImage* inputImage;
	NSNumber* inputAmount;

}

@property (nonatomic,copy) NSNumber * inputAmount; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
@end

