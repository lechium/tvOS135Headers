/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {

	int _newValue;
	int _oldValue;
	int _stateType;
	SCD_Struct_GE84 _flags;

}

@property (assign,nonatomic) BOOL hasStateType; 
@property (assign,nonatomic) int stateType; 
@property (assign,nonatomic) BOOL hasOldValue; 
@property (assign,nonatomic) int oldValue; 
@property (assign,nonatomic) BOOL hasNewValue; 
@property (assign,nonatomic) int newValue; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)stateType;
-(void)setStateType:(int)arg1 ;
-(void)setHasStateType:(BOOL)arg1 ;
-(BOOL)hasStateType;
-(id)stateTypeAsString:(int)arg1 ;
-(int)StringAsStateType:(id)arg1 ;
-(int)oldValue;
-(void)setOldValue:(int)arg1 ;
-(void)setHasOldValue:(BOOL)arg1 ;
-(BOOL)hasOldValue;
-(id)oldValueAsString:(int)arg1 ;
-(int)StringAsOldValue:(id)arg1 ;
-(int)newValue;
-(void)setNewValue:(int)arg1 ;
-(void)setHasNewValue:(BOOL)arg1 ;
-(BOOL)hasNewValue;
-(id)newValueAsString:(int)arg1 ;
-(int)StringAsNewValue:(id)arg1 ;
@end

