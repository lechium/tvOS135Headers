/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitHomeSharing : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _errorCode;
	int _responseType;
	int _stage;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasResponseType; 
@property (assign,nonatomic) int responseType;                          //@synthesize responseType=_responseType - In the implementation block
@property (assign,nonatomic) BOOL hasStage; 
@property (assign,nonatomic) int stage;                                 //@synthesize stage=_stage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(int)responseType;
-(int)stage;
-(void)setResponseType:(int)arg1 ;
-(void)setStage:(int)arg1 ;
-(void)setHasResponseType:(BOOL)arg1 ;
-(BOOL)hasResponseType;
-(id)responseTypeAsString:(int)arg1 ;
-(int)StringAsResponseType:(id)arg1 ;
-(void)setHasStage:(BOOL)arg1 ;
-(BOOL)hasStage;
-(id)stageAsString:(int)arg1 ;
-(int)StringAsStage:(id)arg1 ;
@end

