/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NaturalLanguage-Structs.h>
#import <NaturalLanguage/NLDataProvider.h>

@class NLDataProvider, NSArray;

@interface NLSplitDataProvider : NLDataProvider {

	NLDataProvider* _dataProvider;
	NSArray* _indexes;

}
-(id)configuration;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(CFStringTokenizerRef)tokenizer;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(unsigned long long)numberOfInstances;
-(id)inverseLabelMap;
-(id)initWithDataProvider:(id)arg1 indexes:(id)arg2 ;
-(void)_generateMaps;
-(unsigned long long)numberOfLabels;
-(unsigned long long)numberOfVocabularyEntries;
@end

