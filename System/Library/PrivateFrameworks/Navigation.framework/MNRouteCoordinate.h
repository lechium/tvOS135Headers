/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNRouteCoordinate : PBCodable <NSCopying> {

	unsigned _index;
	float _offset;
	SCD_Struct_MN21 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) float offset;                //@synthesize offset=_offset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)index;
-(id)dictionaryRepresentation;
-(float)offset;
-(void)setOffset:(float)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIndex;
-(void)setHasOffset:(BOOL)arg1 ;
-(BOOL)hasOffset;
-(void)setHasIndex:(BOOL)arg1 ;
@end

