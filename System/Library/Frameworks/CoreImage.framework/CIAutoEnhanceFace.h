/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIAutoEnhanceFace : NSObject {

	int size;
	int centerX;
	int centerY;
	double I;
	double Q;

}

@property (readonly) int size; 
@property (readonly) int centerX; 
@property (readonly) int centerY; 
@property (readonly) double I; 
@property (readonly) double Q; 
-(id)description;
-(int)size;
-(CGRect)faceRect;
-(id)initWithBounds:(CGRect)arg1 andImage:(id)arg2 usingContext:(id)arg3 ;
-(double)I;
-(double)Q;
-(int)centerX;
-(int)centerY;
@end
