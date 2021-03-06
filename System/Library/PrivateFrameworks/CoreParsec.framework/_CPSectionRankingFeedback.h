/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_CPProcessableFeedback.h>
#import <libobjc.A.dylib/_CPSectionRankingFeedback.h>
@class NSArray, _CPResultSectionForFeedback, NSData;


@protocol _CPSectionRankingFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,retain) _CPResultSectionForFeedback * section; 
@property (assign,nonatomic) unsigned localSectionPosition; 
@property (assign,nonatomic) double personalizationScore; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSArray *)results;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1;
-(void)setResults:(id)arg1;
-(unsigned long long)resultsCount;
-(void)clearResults;
-(_CPResultSectionForFeedback *)section;
-(void)setSection:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)addResults:(id)arg1;
-(id)resultsAtIndex:(unsigned long long)arg1;
-(unsigned)localSectionPosition;
-(void)setLocalSectionPosition:(unsigned)arg1;
-(double)personalizationScore;
-(void)setPersonalizationScore:(double)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _CPResultSectionForFeedback, NSData, NSString, NSDictionary;

@interface _CPSectionRankingFeedback : PBCodable <_CPProcessableFeedback, _CPSectionRankingFeedback, NSSecureCoding> {

	unsigned _localSectionPosition;
	unsigned long long _timestamp;
	NSArray* _results;
	_CPResultSectionForFeedback* _section;
	double _personalizationScore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy) NSArray * results;                                        //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) _CPResultSectionForFeedback * section;                  //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned localSectionPosition;                          //@synthesize localSectionPosition=_localSectionPosition - In the implementation block
@property (assign,nonatomic) double personalizationScore;                            //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)results;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(unsigned long long)resultsCount;
-(void)clearResults;
-(_CPResultSectionForFeedback *)section;
-(void)setSection:(_CPResultSectionForFeedback *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addResults:(id)arg1 ;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
-(unsigned)localSectionPosition;
-(void)setLocalSectionPosition:(unsigned)arg1 ;
-(double)personalizationScore;
-(void)setPersonalizationScore:(double)arg1 ;
-(id)feedbackJSON;
@end

