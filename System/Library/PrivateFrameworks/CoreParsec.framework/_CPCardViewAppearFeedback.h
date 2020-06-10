/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_CPProcessableFeedback.h>
#import <libobjc.A.dylib/_CPCardViewAppearFeedback.h>
@class _CPCardForFeedback, NSString, NSData;


@protocol _CPCardViewAppearFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPCardForFeedback * card; 
@property (assign,nonatomic) unsigned level; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(unsigned)level;
-(unsigned long long)timestamp;
-(void)setLevel:(unsigned)arg1;
-(void)setTimestamp:(unsigned long long)arg1;
-(_CPCardForFeedback *)card;
-(void)setCard:(id)arg1;
-(NSData *)jsonData;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CPCardForFeedback, NSString, NSData, NSDictionary;

@interface _CPCardViewAppearFeedback : PBCodable <_CPProcessableFeedback, _CPCardViewAppearFeedback, NSSecureCoding> {

	unsigned _level;
	unsigned long long _timestamp;
	_CPCardForFeedback* _card;
	NSString* _fbr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,retain) _CPCardForFeedback * card;                              //@synthesize card=_card - In the implementation block
@property (assign,nonatomic) unsigned level;                                         //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSString * fbr;                                           //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)level;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setLevel:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(_CPCardForFeedback *)card;
-(void)setCard:(_CPCardForFeedback *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)feedbackJSON;
@end

