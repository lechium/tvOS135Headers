/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NLModelImpl.h>

@class NLModelConfiguration, NSDictionary;

@interface NLModelImplN : NLModelImpl {

	void* _nlModel;
	NLModelConfiguration* _configuration;
	NSDictionary* _labelMap;
	unsigned long long _numberOfTrainingInstances;

}
-(void)dealloc;
-(id)configuration;
-(id)modelData;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 ;
-(id)initWithModelTrainer:(id)arg1 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)labelMap;
-(unsigned long long)numberOfTrainingInstances;
-(id)predictedLabelsDictionaryForString:(id)arg1 ;
@end
