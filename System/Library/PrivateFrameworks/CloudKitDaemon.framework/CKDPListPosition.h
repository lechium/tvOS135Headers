/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPListPosition : PBCodable <NSCopying> {

	int _index;
	BOOL _isReversed;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) int index;                       //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasIsReversed; 
@property (assign,nonatomic) BOOL isReversed;                 //@synthesize isReversed=_isReversed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)index;
-(id)dictionaryRepresentation;
-(void)setIndex:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIndex;
-(void)setHasIndex:(BOOL)arg1 ;
-(BOOL)isReversed;
-(void)setIsReversed:(BOOL)arg1 ;
-(void)setHasIsReversed:(BOOL)arg1 ;
-(BOOL)hasIsReversed;
@end

