/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCharacteristicThresholdEvent : PBCodable <NSCopying> {

	BOOL _maxPresent;
	BOOL _minPresent;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasMinPresent; 
@property (assign,nonatomic) BOOL minPresent;                 //@synthesize minPresent=_minPresent - In the implementation block
@property (assign,nonatomic) BOOL hasMaxPresent; 
@property (assign,nonatomic) BOOL maxPresent;                 //@synthesize maxPresent=_maxPresent - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMinPresent:(BOOL)arg1 ;
-(void)setHasMinPresent:(BOOL)arg1 ;
-(BOOL)hasMinPresent;
-(void)setMaxPresent:(BOOL)arg1 ;
-(void)setHasMaxPresent:(BOOL)arg1 ;
-(BOOL)hasMaxPresent;
-(BOOL)minPresent;
-(BOOL)maxPresent;
@end
