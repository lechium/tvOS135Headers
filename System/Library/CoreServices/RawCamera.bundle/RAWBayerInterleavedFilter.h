/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector;

@interface RAWBayerInterleavedFilter : RAWFilter {

	CIImage* inputImage00;
	CIImage* inputImage01;
	CIImage* inputImage10;
	CIImage* inputImage11;
	CIVector* inputExtent;

}
-(id)outputImage;
@end
