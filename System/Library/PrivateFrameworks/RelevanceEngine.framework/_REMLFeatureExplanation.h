/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REMLExplanation.h>

@class REFeatureSet;

@interface _REMLFeatureExplanation : REMLExplanation {

	REFeatureSet* _features;
	float _mean;
	float _variance;

}
+(id)combinedExplanationsFromExplanations:(id)arg1 ;
-(id)initWithFeature:(id)arg1 mean:(float)arg2 variance:(float)arg3 ;
-(BOOL)_canCombineWithSimilarExplanation:(id)arg1 ;
-(long long)_rankExplanationToSimilarExplanation:(id)arg1 ;
-(id)explanationByCombiningWithExplanation:(id)arg1 ;
-(BOOL)shouldProvideExplanation;
-(id)explanationWithStyle:(unsigned long long)arg1 ;
@end
