/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CRLatticePath : NSObject {

	NSArray* _edges;
	double _lexiconScore;
	double _cnnScore;
	double _ngramScore;
	double _geometryScore;
	double _patternScore;
	double _totalScore;

}

@property (nonatomic,readonly) NSArray * edges;              //@synthesize edges=_edges - In the implementation block
@property (readonly) double lexiconScore;                    //@synthesize lexiconScore=_lexiconScore - In the implementation block
@property (readonly) double cnnScore;                        //@synthesize cnnScore=_cnnScore - In the implementation block
@property (readonly) double ngramScore;                      //@synthesize ngramScore=_ngramScore - In the implementation block
@property (readonly) double geometryScore;                   //@synthesize geometryScore=_geometryScore - In the implementation block
@property (readonly) double patternScore;                    //@synthesize patternScore=_patternScore - In the implementation block
@property (readonly) double totalScore;                      //@synthesize totalScore=_totalScore - In the implementation block
-(NSArray *)edges;
-(id)initWithEdgeIndexes:(id)arg1 lex:(double)arg2 cnn:(double)arg3 ngram:(double)arg4 geom:(double)arg5 pattern:(double)arg6 total:(double)arg7 ;
-(double)lexiconScore;
-(double)cnnScore;
-(double)ngramScore;
-(double)geometryScore;
-(double)patternScore;
-(double)totalScore;
@end

