/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWRadialLensCorrectionRB : RAWFilter {

	CIImage* inputImage;
	CIVector* inputScalesR;
	CIVector* inputScalesB;
	id inputColorSpace;
	NSNumber* inputDraftMode;
	NSNumber* inputLDCExecuteFlags;
	NSNumber* inputVersion;
	CIImage* mapImg;

}
+(id)customAttributes;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
-(BOOL)makeMapImages;
@end

