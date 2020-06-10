/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAMutableFloatArray;

@interface PHALabeledFeatureVector : NSObject {

	float _label;
	float _labelForTensor;
	PHAMutableFloatArray* _featureVector;

}

@property (nonatomic,readonly) float labelForTensor;                              //@synthesize labelForTensor=_labelForTensor - In the implementation block
@property (nonatomic,readonly) PHAMutableFloatArray * featureVector;              //@synthesize featureVector=_featureVector - In the implementation block
@property (nonatomic,readonly) float label;                                       //@synthesize label=_label - In the implementation block
-(float)label;
-(id)initWithFeatureVector:(id)arg1 label:(long long)arg2 ;
-(float*)_getLabelPointer;
-(PHAMutableFloatArray *)featureVector;
-(float)labelForTensor;
@end
