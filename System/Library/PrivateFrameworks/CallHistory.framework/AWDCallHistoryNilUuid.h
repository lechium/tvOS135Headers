/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _callStatus;
	unsigned _callType;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCallType; 
@property (assign,nonatomic) unsigned callType;                         //@synthesize callType=_callType - In the implementation block
@property (assign,nonatomic) BOOL hasCallStatus; 
@property (assign,nonatomic) unsigned callStatus;                       //@synthesize callStatus=_callStatus - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setCallStatus:(unsigned)arg1 ;
-(void)setHasCallStatus:(BOOL)arg1 ;
-(BOOL)hasCallStatus;
-(unsigned)callStatus;
-(unsigned)callType;
-(void)setCallType:(unsigned)arg1 ;
-(BOOL)hasCallType;
-(void)setHasCallType:(BOOL)arg1 ;
@end

