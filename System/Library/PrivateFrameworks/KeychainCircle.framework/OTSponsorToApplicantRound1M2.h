/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTSponsorToApplicantRound1M2 : PBCodable <NSCopying> {

	unsigned long long _epoch;
	SCD_Struct_OT2 _has;

}

@property (assign,nonatomic) BOOL hasEpoch; 
@property (assign,nonatomic) unsigned long long epoch;              //@synthesize epoch=_epoch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasEpoch;
-(void)setHasEpoch:(BOOL)arg1 ;
@end

