/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSMutableArray;

@interface CIDiscBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSMutableArray* _recipe;

}
+(id)customAttributes;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
@end

