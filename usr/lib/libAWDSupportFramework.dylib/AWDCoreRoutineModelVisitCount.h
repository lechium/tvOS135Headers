/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineModelVisitCount : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _count;
	NSMutableArray* _visits;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                            //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSMutableArray * visits;                   //@synthesize visits=_visits - In the implementation block
+(Class)visitsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setVisits:(NSMutableArray *)arg1 ;
-(void)addVisits:(id)arg1 ;
-(unsigned long long)visitsCount;
-(void)clearVisits;
-(id)visitsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)visits;
@end

