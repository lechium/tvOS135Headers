/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaSpeechResultSelected : PBCodable {

	int _source;
	NSString* _resultCandidateId;

}

@property (nonatomic,copy) NSString * resultCandidateId;              //@synthesize resultCandidateId=_resultCandidateId - In the implementation block
@property (assign,nonatomic) int source;                              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSource:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)source;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end
