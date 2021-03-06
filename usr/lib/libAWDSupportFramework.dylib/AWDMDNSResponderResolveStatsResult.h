/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDMDNSResponderResolveStatsResult : PBCodable <NSCopying> {

	unsigned _count;
	NSData* _data;
	unsigned _serverID;
	int _type;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasServerID; 
@property (assign,nonatomic) unsigned serverID;              //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                  //@synthesize data=_data - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned)count;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setServerID:(unsigned)arg1 ;
-(void)setHasServerID:(BOOL)arg1 ;
-(BOOL)hasServerID;
-(unsigned)serverID;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasData;
@end

