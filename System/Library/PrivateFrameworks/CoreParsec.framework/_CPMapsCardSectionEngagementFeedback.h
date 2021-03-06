/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_CPProcessableFeedback.h>
#import <libobjc.A.dylib/_CPMapsCardSectionEngagementFeedback.h>
@class _CPPunchoutForFeedback, NSString, NSData;


@protocol _CPMapsCardSectionEngagementFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPPunchoutForFeedback * destination; 
@property (assign,nonatomic) int triggerEvent; 
@property (assign,nonatomic) int actionCardType; 
@property (assign,nonatomic) int feedbackType; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultId; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(unsigned long long)timestamp;
-(void)setDestination:(id)arg1;
-(_CPPunchoutForFeedback *)destination;
-(void)setTimestamp:(unsigned long long)arg1;
-(void)setTriggerEvent:(int)arg1;
-(int)triggerEvent;
-(int)feedbackType;
-(void)setFeedbackType:(int)arg1;
-(NSString *)resultId;
-(void)setResultId:(id)arg1;
-(NSData *)jsonData;
-(NSString *)cardSectionId;
-(void)setCardSectionId:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(int)actionCardType;
-(void)setActionCardType:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CPPunchoutForFeedback, NSString, NSData, NSDictionary;

@interface _CPMapsCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPMapsCardSectionEngagementFeedback, NSSecureCoding> {

	int _triggerEvent;
	int _actionCardType;
	int _feedbackType;
	unsigned long long _timestamp;
	_CPPunchoutForFeedback* _destination;
	NSString* _cardSectionId;
	NSString* _resultId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPPunchoutForFeedback * destination;                   //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) int triggerEvent;                                       //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (assign,nonatomic) int actionCardType;                                     //@synthesize actionCardType=_actionCardType - In the implementation block
@property (assign,nonatomic) int feedbackType;                                       //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,copy) NSString * cardSectionId;                                 //@synthesize cardSectionId=_cardSectionId - In the implementation block
@property (nonatomic,copy) NSString * resultId;                                      //@synthesize resultId=_resultId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setDestination:(_CPPunchoutForFeedback *)arg1 ;
-(_CPPunchoutForFeedback *)destination;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setTriggerEvent:(int)arg1 ;
-(int)triggerEvent;
-(int)feedbackType;
-(void)setFeedbackType:(int)arg1 ;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)cardSectionId;
-(void)setCardSectionId:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)actionCardType;
-(void)setActionCardType:(int)arg1 ;
@end

