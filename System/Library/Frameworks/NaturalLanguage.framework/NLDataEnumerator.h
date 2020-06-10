/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NLDataProvider, NLNumberGenerator, NSMutableData;

@interface NLDataEnumerator : NSObject {

	NLDataProvider* _dataProvider;
	unsigned long long _idx;
	NLNumberGenerator* _generator;
	NSMutableData* _shuffleData;

}

@property (retain,readonly) NLDataProvider * dataProvider; 
@property (readonly) unsigned long long index; 
-(unsigned long long)index;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(void)shuffle;
-(NLDataProvider *)dataProvider;
-(id)nextInstance;
-(void)rewind;
-(id)initWithDataProvider:(id)arg1 ;
-(id)initWithDataProvider:(id)arg1 numberGenerator:(id)arg2 ;
-(void)rewindAndShuffle:(BOOL)arg1 ;
@end

