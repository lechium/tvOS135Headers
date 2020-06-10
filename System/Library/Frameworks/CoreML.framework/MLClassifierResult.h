/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLFeatureProvider;
@class MLFeatureValue, NSDictionary;

@interface MLClassifierResult : NSObject {

	MLFeatureValue* _predictedClass;
	NSDictionary* _classProbability;
	long long _predictedClassFeatureType;
	id<MLFeatureProvider> _additionalFeatures;

}

@property (readonly) MLFeatureValue * predictedClass;                       //@synthesize predictedClass=_predictedClass - In the implementation block
@property (readonly) NSDictionary * classProbability;                       //@synthesize classProbability=_classProbability - In the implementation block
@property (readonly) long long predictedClassFeatureType;                   //@synthesize predictedClassFeatureType=_predictedClassFeatureType - In the implementation block
@property (readonly) id<MLFeatureProvider> additionalFeatures;              //@synthesize additionalFeatures=_additionalFeatures - In the implementation block
+(id)resultWithStringClassProbability:(id)arg1 ;
+(id)resultWithIntClassProbability:(id)arg1 ;
+(id)resultWithStringClassProbability:(id)arg1 additionalFeatures:(id)arg2 ;
+(id)resultWithIntClassProbability:(id)arg1 additionalFeatures:(id)arg2 ;
+(id)resultWithClassProbability:(id)arg1 additionalFeatures:(id)arg2 classLabelOfMaxProbability:(id)arg3 ;
-(id)asFeatureDictionaryWithPredictedClassDescription:(id)arg1 classProbabilityDescription:(id)arg2 ;
-(id<MLFeatureProvider>)additionalFeatures;
-(id)initWithStringClassProbability:(id)arg1 classFeatureType:(long long)arg2 additionalFeatures:(id)arg3 ;
-(id)initWithIntClassProbability:(id)arg1 classFeatureType:(long long)arg2 additionalFeatures:(id)arg3 ;
-(id)initWithClassProbability:(id)arg1 additionalFeatures:(id)arg2 classLabelOfMaxProbability:(id)arg3 ;
-(MLFeatureValue *)predictedClass;
-(NSDictionary *)classProbability;
-(long long)predictedClassFeatureType;
@end

