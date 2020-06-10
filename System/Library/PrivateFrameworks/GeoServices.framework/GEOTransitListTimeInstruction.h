/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOComposedRouteStepTransitInstructionMerging.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSString;

@interface GEOTransitListTimeInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _primaryText;
	GEOFormattedString* _secondaryText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _hideWhenListCollapsed;
	struct {
		unsigned has_hideWhenListCollapsed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_primaryText : 1;
		unsigned read_secondaryText : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_primaryText : 1;
		unsigned wrote_secondaryText : 1;
		unsigned wrote_hideWhenListCollapsed : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPrimaryText; 
@property (nonatomic,retain) GEOFormattedString * primaryText; 
@property (nonatomic,readonly) BOOL hasSecondaryText; 
@property (nonatomic,retain) GEOFormattedString * secondaryText; 
@property (assign,nonatomic) BOOL hasHideWhenListCollapsed; 
@property (assign,nonatomic) BOOL hideWhenListCollapsed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOFormattedString *)primaryText;
-(void)setPrimaryText:(GEOFormattedString *)arg1 ;
-(BOOL)hasPrimaryText;
-(void)_readPrimaryText;
-(void)_readSecondaryText;
-(GEOFormattedString *)secondaryText;
-(void)setSecondaryText:(GEOFormattedString *)arg1 ;
-(BOOL)hasSecondaryText;
-(BOOL)hasHideWhenListCollapsed;
-(BOOL)hideWhenListCollapsed;
-(void)setHideWhenListCollapsed:(BOOL)arg1 ;
-(void)setHasHideWhenListCollapsed:(BOOL)arg1 ;
-(void)_transit_prepareForDeepMergeFrom:(id)arg1 ;
@end
