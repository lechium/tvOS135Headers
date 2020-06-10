/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, CSVTSecondPassPhraseScore;

@interface CSVTSecondPassScorer : NSObject {

	NSDictionary* _phraseMap;
	CSVTSecondPassPhraseScore* _triggeredPhrase;

}

@property (nonatomic,retain) CSVTSecondPassPhraseScore * triggeredPhrase;              //@synthesize triggeredPhrase=_triggeredPhrase - In the implementation block
@property (nonatomic,retain) NSDictionary * phraseMap;                                 //@synthesize phraseMap=_phraseMap - In the implementation block
-(id)description;
-(id)dictionaryRepresentationWithSecondChanceEnabled:(BOOL)arg1 ;
-(id)initWithAsset:(id)arg1 firstPassSource:(unsigned long long)arg2 ;
-(void)updateWithNdapiResults:(id)arg1 ;
-(void)updateWithCtcCheckerResults:(id)arg1 ;
-(id)getTriggeredPhraseWithSecondChanceEnabled:(BOOL)arg1 ;
-(id)getNearMissPhraseWithSecondChanceEnabled:(BOOL)arg1 ;
-(id)bestScoringPhrase;
-(NSDictionary *)phraseMap;
-(void)setPhraseMap:(NSDictionary *)arg1 ;
-(CSVTSecondPassPhraseScore *)triggeredPhrase;
-(void)setTriggeredPhrase:(CSVTSecondPassPhraseScore *)arg1 ;
@end
