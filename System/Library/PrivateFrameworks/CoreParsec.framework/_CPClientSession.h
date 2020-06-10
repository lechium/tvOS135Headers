/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_CPClientSession.h>
@class NSString, NSDictionary, _CPUsageSinceLookback, _CPUsageEnvelope, NSData, NSArray;


@protocol _CPClientSession <NSObject>
@property (nonatomic,copy) NSString * agent; 
@property (nonatomic,copy) NSString * userGuidString; 
@property (nonatomic,copy) NSDictionary * resourceVersions; 
@property (assign,nonatomic) double sessionStart; 
@property (assign,nonatomic) int previousSessionEndReason; 
@property (assign,nonatomic) BOOL removeTimestamps; 
@property (nonatomic,copy) NSString * parsecDeveloperID; 
@property (assign,nonatomic) BOOL duEnabled; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,retain) _CPUsageSinceLookback * usageSinceLookback; 
@property (nonatomic,retain) _CPUsageEnvelope * cohortsFeedback; 
@property (nonatomic,copy) NSData * jsonFeedback; 
@property (nonatomic,copy) NSArray * feedbacks; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setLocale:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)locale;
-(NSString *)countryCode;
-(void)setCountryCode:(id)arg1;
-(id)feedbackAtIndex:(unsigned long long)arg1;
-(void)addFeedback:(id)arg1;
-(NSArray *)feedbacks;
-(void)setFeedbacks:(id)arg1;
-(NSString *)agent;
-(void)setAgent:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setJsonFeedback:(id)arg1;
-(NSData *)jsonFeedback;
-(void)setUserGuidString:(id)arg1;
-(void)setResourceVersions:(id)arg1 forKey:(id)arg2;
-(void)setSessionStart:(double)arg1;
-(void)setPreviousSessionEndReason:(int)arg1;
-(void)setRemoveTimestamps:(BOOL)arg1;
-(void)setParsecDeveloperID:(id)arg1;
-(void)setDuEnabled:(BOOL)arg1;
-(void)setUsageSinceLookback:(id)arg1;
-(void)setCohortsFeedback:(id)arg1;
-(NSString *)userGuidString;
-(double)sessionStart;
-(int)previousSessionEndReason;
-(BOOL)removeTimestamps;
-(NSString *)parsecDeveloperID;
-(BOOL)duEnabled;
-(_CPUsageSinceLookback *)usageSinceLookback;
-(_CPUsageEnvelope *)cohortsFeedback;
-(NSDictionary *)resourceVersions;
-(BOOL)getResourceVersions:(id*)arg1 forKey:(id)arg2;
-(void)clearFeedback;
-(unsigned long long)feedbackCount;
-(void)setResourceVersions:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, _CPUsageSinceLookback, _CPUsageEnvelope, NSData, NSArray;

@interface _CPClientSession : PBCodable <_CPClientSession, NSSecureCoding> {

	BOOL _removeTimestamps;
	BOOL _duEnabled;
	int _previousSessionEndReason;
	NSString* _agent;
	NSString* _userGuidString;
	NSDictionary* _resourceVersions;
	double _sessionStart;
	NSString* _parsecDeveloperID;
	NSString* _countryCode;
	NSString* _locale;
	_CPUsageSinceLookback* _usageSinceLookback;
	_CPUsageEnvelope* _cohortsFeedback;
	NSData* _jsonFeedback;
	NSArray* _feedbacks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * agent;                                          //@synthesize agent=_agent - In the implementation block
@property (nonatomic,copy) NSString * userGuidString;                                 //@synthesize userGuidString=_userGuidString - In the implementation block
@property (nonatomic,copy) NSDictionary * resourceVersions;                           //@synthesize resourceVersions=_resourceVersions - In the implementation block
@property (assign,nonatomic) double sessionStart;                                     //@synthesize sessionStart=_sessionStart - In the implementation block
@property (assign,nonatomic) int previousSessionEndReason;                            //@synthesize previousSessionEndReason=_previousSessionEndReason - In the implementation block
@property (assign,nonatomic) BOOL removeTimestamps;                                   //@synthesize removeTimestamps=_removeTimestamps - In the implementation block
@property (nonatomic,copy) NSString * parsecDeveloperID;                              //@synthesize parsecDeveloperID=_parsecDeveloperID - In the implementation block
@property (assign,nonatomic) BOOL duEnabled;                                          //@synthesize duEnabled=_duEnabled - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                    //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * locale;                                         //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) _CPUsageSinceLookback * usageSinceLookback;              //@synthesize usageSinceLookback=_usageSinceLookback - In the implementation block
@property (nonatomic,retain) _CPUsageEnvelope * cohortsFeedback;                      //@synthesize cohortsFeedback=_cohortsFeedback - In the implementation block
@property (nonatomic,copy) NSData * jsonFeedback;                                     //@synthesize jsonFeedback=_jsonFeedback - In the implementation block
@property (nonatomic,copy) NSArray * feedbacks;                                       //@synthesize feedbacks=_feedbacks - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setLocale:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)locale;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setFeedback:(id)arg1 ;
-(id)feedbackAtIndex:(unsigned long long)arg1 ;
-(void)addFeedback:(id)arg1 ;
-(NSArray *)feedbacks;
-(void)setFeedbacks:(NSArray *)arg1 ;
-(NSString *)agent;
-(void)setAgent:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setJsonFeedback:(NSData *)arg1 ;
-(NSData *)jsonFeedback;
-(void)setUserGuidString:(NSString *)arg1 ;
-(void)setResourceVersions:(id)arg1 forKey:(id)arg2 ;
-(void)setSessionStart:(double)arg1 ;
-(void)setPreviousSessionEndReason:(int)arg1 ;
-(void)setRemoveTimestamps:(BOOL)arg1 ;
-(void)setParsecDeveloperID:(NSString *)arg1 ;
-(void)setDuEnabled:(BOOL)arg1 ;
-(void)setUsageSinceLookback:(_CPUsageSinceLookback *)arg1 ;
-(void)setCohortsFeedback:(_CPUsageEnvelope *)arg1 ;
-(NSString *)userGuidString;
-(double)sessionStart;
-(int)previousSessionEndReason;
-(BOOL)removeTimestamps;
-(NSString *)parsecDeveloperID;
-(BOOL)duEnabled;
-(_CPUsageSinceLookback *)usageSinceLookback;
-(_CPUsageEnvelope *)cohortsFeedback;
-(NSDictionary *)resourceVersions;
-(BOOL)getResourceVersions:(id*)arg1 forKey:(id)arg2 ;
-(void)clearFeedback;
-(unsigned long long)feedbackCount;
-(void)setResourceVersions:(NSDictionary *)arg1 ;
@end
