/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSString, NSDictionary;

@interface CIRedEyeCorrection : CIFilter {

	CIImage* inputImage;
	NSString* inputCameraModel;
	NSDictionary* inputCorrectionInfo;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSString * inputCameraModel; 
@property (nonatomic,copy) NSDictionary * inputCorrectionInfo; 
-(BOOL)_isIdentity;
-(void)setDefaults;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSDictionary *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSDictionary *)arg1 ;
@end

