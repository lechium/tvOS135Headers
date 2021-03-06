/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_CPProcessableFeedback.h>
#import <libobjc.A.dylib/_CPCardViewDisappearFeedback.h>
@class NSData;


@protocol _CPCardViewDisappearFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) int cardDisappearEvent; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(int)cardDisappearEvent;
-(void)setCardDisappearEvent:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSDictionary;

@interface _CPCardViewDisappearFeedback : PBCodable <_CPProcessableFeedback, _CPCardViewDisappearFeedback, NSSecureCoding> {

	int _cardDisappearEvent;
	unsigned long long _timestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) int cardDisappearEvent;                                 //@synthesize cardDisappearEvent=_cardDisappearEvent - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)cardDisappearEvent;
-(void)setCardDisappearEvent:(int)arg1 ;
@end

