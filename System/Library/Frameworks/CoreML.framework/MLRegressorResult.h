/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLFeatureProvider;
@class MLMultiArray;

@interface MLRegressorResult : NSObject {

	MLMultiArray* _predictedValue;
	id<MLFeatureProvider> _additionalFeatures;

}

@property (readonly) MLMultiArray * predictedValue;                         //@synthesize predictedValue=_predictedValue - In the implementation block
@property (readonly) id<MLFeatureProvider> additionalFeatures;              //@synthesize additionalFeatures=_additionalFeatures - In the implementation block
+(id)resultWithValue:(id)arg1 ;
+(id)resultWithValue:(id)arg1 additionalFeatures:(id)arg2 ;
-(id)asFeatureDictionaryWithPredictedValueDescription:(id)arg1 ;
-(id)initWithValue:(id)arg1 additionalFeatures:(id)arg2 ;
-(MLMultiArray *)predictedValue;
-(id<MLFeatureProvider>)additionalFeatures;
@end

