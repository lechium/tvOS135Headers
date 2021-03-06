/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_PARResult.h>
@class NSString, NSData, NSArray, _PARResult_Template;


@protocol _PARResult <NSObject>
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * dataServiceId; 
@property (assign,nonatomic) float score; 
@property (nonatomic,copy) NSData * feedback; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) int maxAgeSeconds; 
@property (assign,nonatomic) float serverScore; 
@property (nonatomic,copy) NSArray * entities; 
@property (assign,nonatomic) int topHit; 
@property (assign,nonatomic) int engagementScore; 
@property (assign,nonatomic) int queryIndependentEngagementScore; 
@property (assign,nonatomic) int placement; 
@property (assign,nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory; 
@property (assign,nonatomic) BOOL isQuickGlance; 
@property (assign,nonatomic) int minimumRankOfTopHitToSuppressResult; 
@property (nonatomic,copy) NSString * appleReferrer; 
@property (nonatomic,copy) NSString * sectionBundleId; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,retain) _PARResult_Template * template; 
@property (nonatomic,copy) NSString * intendedQuery; 
@property (nonatomic,copy) NSString * correctedQuery; 
@property (nonatomic,copy) NSString * completedQuery; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)identifier;
-(void)setBundleId:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(NSString *)url;
-(float)score;
-(NSString *)bundleId;
-(NSArray *)entities;
-(void)setEntities:(id)arg1;
-(void)setUrl:(id)arg1;
-(void)setFeedback:(id)arg1;
-(NSData *)feedback;
-(void)setScore:(float)arg1;
-(NSString *)adamId;
-(void)setAdamId:(id)arg1;
-(void)setIsQuickGlance:(BOOL)arg1;
-(void)clearEntities;
-(void)addEntities:(id)arg1;
-(id)entitiesAtIndex:(unsigned long long)arg1;
-(unsigned long long)entitiesCount;
-(NSString *)canonicalId;
-(void)setCanonicalId:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(NSString *)completedQuery;
-(NSString *)correctedQuery;
-(NSString *)intendedQuery;
-(int)topHit;
-(void)setTopHit:(int)arg1;
-(void)setIntendedQuery:(id)arg1;
-(void)setCompletedQuery:(id)arg1;
-(void)setCorrectedQuery:(id)arg1;
-(NSString *)appleReferrer;
-(void)setAppleReferrer:(id)arg1;
-(BOOL)renderHorizontallyWithOtherResultsInCategory;
-(void)setRenderHorizontallyWithOtherResultsInCategory:(BOOL)arg1;
-(int)placement;
-(void)setPlacement:(int)arg1;
-(int)minimumRankOfTopHitToSuppressResult;
-(void)setMinimumRankOfTopHitToSuppressResult:(int)arg1;
-(float)serverScore;
-(void)setServerScore:(float)arg1;
-(BOOL)isQuickGlance;
-(int)engagementScore;
-(void)setEngagementScore:(int)arg1;
-(_PARResult_Template *)template;
-(int)maxAgeSeconds;
-(int)queryIndependentEngagementScore;
-(NSString *)sectionBundleId;
-(void)setDataServiceId:(id)arg1;
-(void)setMaxAgeSeconds:(int)arg1;
-(void)setQueryIndependentEngagementScore:(int)arg1;
-(void)setSectionBundleId:(id)arg1;
-(void)setTemplate:(id)arg1;
-(NSString *)dataServiceId;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSArray, _PARResult_Template;

@interface _PARResult : PBCodable <_PARResult, NSSecureCoding> {

	BOOL _renderHorizontallyWithOtherResultsInCategory;
	BOOL _isQuickGlance;
	float _score;
	int _maxAgeSeconds;
	float _serverScore;
	int _topHit;
	int _engagementScore;
	int _queryIndependentEngagementScore;
	int _placement;
	int _minimumRankOfTopHitToSuppressResult;
	NSString* _type;
	NSString* _identifier;
	NSString* _canonicalId;
	NSString* _dataServiceId;
	NSData* _feedback;
	NSString* _url;
	NSArray* _entities;
	NSString* _appleReferrer;
	NSString* _sectionBundleId;
	NSString* _bundleId;
	NSString* _adamId;
	_PARResult_Template* _template;
	NSString* _intendedQuery;
	NSString* _correctedQuery;
	NSString* _completedQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * canonicalId;                                           //@synthesize canonicalId=_canonicalId - In the implementation block
@property (nonatomic,copy) NSString * dataServiceId;                                         //@synthesize dataServiceId=_dataServiceId - In the implementation block
@property (assign,nonatomic) float score;                                                    //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSData * feedback;                                                //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy) NSString * url;                                                   //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) int maxAgeSeconds;                                              //@synthesize maxAgeSeconds=_maxAgeSeconds - In the implementation block
@property (assign,nonatomic) float serverScore;                                              //@synthesize serverScore=_serverScore - In the implementation block
@property (nonatomic,copy) NSArray * entities;                                               //@synthesize entities=_entities - In the implementation block
@property (assign,nonatomic) int topHit;                                                     //@synthesize topHit=_topHit - In the implementation block
@property (assign,nonatomic) int engagementScore;                                            //@synthesize engagementScore=_engagementScore - In the implementation block
@property (assign,nonatomic) int queryIndependentEngagementScore;                            //@synthesize queryIndependentEngagementScore=_queryIndependentEngagementScore - In the implementation block
@property (assign,nonatomic) int placement;                                                  //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory;              //@synthesize renderHorizontallyWithOtherResultsInCategory=_renderHorizontallyWithOtherResultsInCategory - In the implementation block
@property (assign,nonatomic) BOOL isQuickGlance;                                             //@synthesize isQuickGlance=_isQuickGlance - In the implementation block
@property (assign,nonatomic) int minimumRankOfTopHitToSuppressResult;                        //@synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult - In the implementation block
@property (nonatomic,copy) NSString * appleReferrer;                                         //@synthesize appleReferrer=_appleReferrer - In the implementation block
@property (nonatomic,copy) NSString * sectionBundleId;                                       //@synthesize sectionBundleId=_sectionBundleId - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                                              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSString * adamId;                                                //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,retain) _PARResult_Template * template;                                 //@synthesize template=_template - In the implementation block
@property (nonatomic,copy) NSString * intendedQuery;                                         //@synthesize intendedQuery=_intendedQuery - In the implementation block
@property (nonatomic,copy) NSString * correctedQuery;                                        //@synthesize correctedQuery=_correctedQuery - In the implementation block
@property (nonatomic,copy) NSString * completedQuery;                                        //@synthesize completedQuery=_completedQuery - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)url;
-(id)dictionaryRepresentation;
-(float)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(NSArray *)entities;
-(void)setEntities:(NSArray *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setFeedback:(NSData *)arg1 ;
-(NSData *)feedback;
-(void)setScore:(float)arg1 ;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(void)setIsQuickGlance:(BOOL)arg1 ;
-(void)clearEntities;
-(void)addEntities:(id)arg1 ;
-(id)entitiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)entitiesCount;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)completedQuery;
-(NSString *)correctedQuery;
-(NSString *)intendedQuery;
-(int)topHit;
-(void)setTopHit:(int)arg1 ;
-(void)setIntendedQuery:(NSString *)arg1 ;
-(void)setCompletedQuery:(NSString *)arg1 ;
-(void)setCorrectedQuery:(NSString *)arg1 ;
-(NSString *)appleReferrer;
-(void)setAppleReferrer:(NSString *)arg1 ;
-(BOOL)renderHorizontallyWithOtherResultsInCategory;
-(void)setRenderHorizontallyWithOtherResultsInCategory:(BOOL)arg1 ;
-(int)placement;
-(void)setPlacement:(int)arg1 ;
-(int)minimumRankOfTopHitToSuppressResult;
-(void)setMinimumRankOfTopHitToSuppressResult:(int)arg1 ;
-(float)serverScore;
-(void)setServerScore:(float)arg1 ;
-(BOOL)isQuickGlance;
-(int)engagementScore;
-(void)setEngagementScore:(int)arg1 ;
-(_PARResult_Template *)template;
-(int)maxAgeSeconds;
-(int)queryIndependentEngagementScore;
-(NSString *)sectionBundleId;
-(void)setDataServiceId:(NSString *)arg1 ;
-(void)setMaxAgeSeconds:(int)arg1 ;
-(void)setQueryIndependentEngagementScore:(int)arg1 ;
-(void)setSectionBundleId:(NSString *)arg1 ;
-(void)setTemplate:(_PARResult_Template *)arg1 ;
-(NSString *)dataServiceId;
@end

