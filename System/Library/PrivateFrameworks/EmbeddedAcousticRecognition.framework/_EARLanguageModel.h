/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLanguageModel : NSObject {

	vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float> > >* _dataSources;
	float _totalWeight;

}

@property (nonatomic,readonly) float totalWeight;              //@synthesize totalWeight=_totalWeight - In the implementation block
-(void)enumerateDataSourcesAndWeightsUsingBlock:(/*^block*/id)arg1 ;
-(void)addDataSource:(id)arg1 weight:(float)arg2 ;
-(float)totalWeight;
@end

