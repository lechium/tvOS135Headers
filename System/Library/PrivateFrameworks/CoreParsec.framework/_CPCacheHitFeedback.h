/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_CPProcessableFeedback.h>
#import <libobjc.A.dylib/_CPFeedbackUUID.h>
#import <libobjc.A.dylib/_CPCacheHitFeedback.h>
@class NSString, NSData;


@protocol _CPCacheHitFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy) NSString * input; 
@property (assign,nonatomic) int triggerEvent; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)uuid;
-(unsigned long long)timestamp;
-(NSString *)input;
-(void)setTimestamp:(unsigned long long)arg1;
-(void)setInput:(id)arg1;
-(void)setUuid:(id)arg1;
-(void)setTriggerEvent:(int)arg1;
-(int)triggerEvent;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface _CPCacheHitFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPCacheHitFeedback, NSSecureCoding> {

	int _triggerEvent;
	unsigned long long _timestamp;
	NSString* _input;
	NSString* _uuid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (nonatomic,copy,readonly) NSString * uuid; 
@property (nonatomic,copy) NSString * input;                                         //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) int triggerEvent;                                       //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (nonatomic,copy) NSString * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)uuid;
-(unsigned long long)timestamp;
-(NSString *)input;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setInput:(NSString *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setTriggerEvent:(int)arg1 ;
-(int)triggerEvent;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

