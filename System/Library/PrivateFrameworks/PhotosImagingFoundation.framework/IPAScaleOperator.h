/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPAScaleOperator : IPAGeometryOperator {

	double _xScale;
	double _yScale;

}
+(id)operatorWithScaleX:(double)arg1 Y:(double)arg2 ;
+(id)operatorWithIdentifier:(id)arg1 scaleX:(double)arg2 Y:(double)arg3 ;
-(id)description;
-(id)transformForGeometry:(id)arg1 ;
@end
