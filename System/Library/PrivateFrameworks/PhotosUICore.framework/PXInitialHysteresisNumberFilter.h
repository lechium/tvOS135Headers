/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXNumberFilter.h>

@interface PXInitialHysteresisNumberFilter : PXNumberFilter {

	BOOL _didReachThreshold;
	double _offset;
	double _hysteresis;

}

@property (assign,nonatomic) double hysteresis;                      //@synthesize hysteresis=_hysteresis - In the implementation block
@property (nonatomic,readonly) double outputDerivative; 
-(double)updatedOutput;
-(double)outputDerivative;
-(double)hysteresis;
-(void)setHysteresis:(double)arg1 ;
@end

