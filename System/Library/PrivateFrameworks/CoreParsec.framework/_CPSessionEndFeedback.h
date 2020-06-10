/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_CPProcessableFeedback.h>
#import <libobjc.A.dylib/_CPSessionEndFeedback.h>
@class NSData;


@protocol _CPSessionEndFeedback <NSObject>
@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) int reason; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)reason;
-(id)initWithDictionary:(id)arg1;
-(unsigned long long)timestamp;
-(void)setReason:(int)arg1;
-(void)setTimestamp:(unsigned long long)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSDictionary;

@interface _CPSessionEndFeedback : PBCodable <_CPProcessableFeedback, _CPSessionEndFeedback, NSSecureCoding> {

	int _reason;
	unsigned long long _timestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) id feedbackJSON; 
@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) int reason;                                             //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(int)reason;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setReason:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end
