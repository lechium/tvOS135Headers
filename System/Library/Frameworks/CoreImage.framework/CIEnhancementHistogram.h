/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CIEnhancementHistogram : NSObject {

	double hist[256];

}
+(id)histogramFromData:(const double*)arg1 ;
+(id)histogramFromFloatData:(const float*)arg1 ;
+(id)histogramFromDoubleData:(const double*)arg1 ;
-(const double*)values;
@end

