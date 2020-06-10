/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecord;

@interface CKDPRecordRetrieveResponse : PBCodable <NSCopying> {

	CKDPRecord* _record;
	BOOL _clientVersionETagMatch;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) CKDPRecord * record;                         //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) BOOL hasClientVersionETagMatch; 
@property (assign,nonatomic) BOOL clientVersionETagMatch;                 //@synthesize clientVersionETagMatch=_clientVersionETagMatch - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPRecord *)record;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(BOOL)hasRecord;
-(BOOL)clientVersionETagMatch;
-(void)setClientVersionETagMatch:(BOOL)arg1 ;
-(void)setHasClientVersionETagMatch:(BOOL)arg1 ;
-(BOOL)hasClientVersionETagMatch;
@end

