/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCompanionSyncFullSyncDuration : PBCodable <NSCopying> {

	unsigned long long _syncDuration;
	unsigned long long _timestamp;
	NSString* _service;
	BOOL _isMaster;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                           //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasIsMaster; 
@property (assign,nonatomic) BOOL isMaster;                                //@synthesize isMaster=_isMaster - In the implementation block
@property (assign,nonatomic) BOOL hasSyncDuration; 
@property (assign,nonatomic) unsigned long long syncDuration;              //@synthesize syncDuration=_syncDuration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)service;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isMaster;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasService;
-(void)setIsMaster:(BOOL)arg1 ;
-(void)setHasIsMaster:(BOOL)arg1 ;
-(BOOL)hasIsMaster;
-(void)setSyncDuration:(unsigned long long)arg1 ;
-(void)setHasSyncDuration:(BOOL)arg1 ;
-(BOOL)hasSyncDuration;
-(unsigned long long)syncDuration;
@end

