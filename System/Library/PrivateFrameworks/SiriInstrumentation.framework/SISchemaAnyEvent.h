/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaAnyEvent : PBCodable {

	int _anyEventType;
	NSData* _payload;

}

@property (assign,nonatomic) int anyEventType;                 //@synthesize anyEventType=_anyEventType - In the implementation block
@property (nonatomic,copy) NSData * payload;                   //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)payload;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)jsonData;
-(int)anyEventType;
-(id)initWithJSON:(id)arg1 ;
-(void)setAnyEventType:(int)arg1 ;
@end

