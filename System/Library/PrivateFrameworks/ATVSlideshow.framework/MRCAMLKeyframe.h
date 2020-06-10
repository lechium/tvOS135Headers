/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MRCAMLBezierData;

@interface MRCAMLKeyframe : NSObject <NSCopying> {

	MRCAMLBezierData* spline;
	double value0;
	double value1;
	double time;

}

@property (nonatomic,retain) MRCAMLBezierData * spline; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(MRCAMLBezierData *)spline;
-(void)setSpline:(MRCAMLBezierData *)arg1 ;
@end

