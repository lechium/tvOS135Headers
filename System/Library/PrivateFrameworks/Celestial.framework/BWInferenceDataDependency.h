/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BWInferenceDataRequirement, BWInferenceRequirement;

@interface BWInferenceDataDependency : NSObject {

	BWInferenceDataRequirement* _dataRequirement;
	BWInferenceRequirement* _inferenceRequirement;

}

@property (nonatomic,readonly) BWInferenceDataRequirement * dataRequirement;               //@synthesize dataRequirement=_dataRequirement - In the implementation block
@property (nonatomic,readonly) BWInferenceRequirement * inferenceRequirement;              //@synthesize inferenceRequirement=_inferenceRequirement - In the implementation block
-(void)dealloc;
-(id)initWithInferenceRequirement:(id)arg1 dependentOnDataRequirement:(id)arg2 ;
-(BWInferenceDataRequirement *)dataRequirement;
-(BWInferenceRequirement *)inferenceRequirement;
@end

