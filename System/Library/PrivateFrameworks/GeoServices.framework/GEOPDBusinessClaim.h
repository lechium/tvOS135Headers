/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDBusinessClaim : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _buttonLabel;
	NSString* _descriptionText;
	NSString* _titleText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _buttonEnabled;
	struct {
		unsigned has_buttonEnabled : 1;
		unsigned read_unknownFields : 1;
		unsigned read_buttonLabel : 1;
		unsigned read_descriptionText : 1;
		unsigned read_titleText : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_buttonLabel : 1;
		unsigned wrote_descriptionText : 1;
		unsigned wrote_titleText : 1;
		unsigned wrote_buttonEnabled : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasButtonLabel; 
@property (nonatomic,retain) NSString * buttonLabel; 
@property (assign,nonatomic) BOOL hasButtonEnabled; 
@property (assign,nonatomic) BOOL buttonEnabled; 
@property (nonatomic,readonly) BOOL hasTitleText; 
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,readonly) BOOL hasDescriptionText; 
@property (nonatomic,retain) NSString * descriptionText; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)businessClaimForPlaceData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
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
-(void)_readButtonLabel;
-(void)_readTitleText;
-(void)_readDescriptionText;
-(NSString *)buttonLabel;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setButtonLabel:(NSString *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(BOOL)hasButtonLabel;
-(BOOL)buttonEnabled;
-(void)setButtonEnabled:(BOOL)arg1 ;
-(void)setHasButtonEnabled:(BOOL)arg1 ;
-(BOOL)hasButtonEnabled;
-(BOOL)hasTitleText;
-(BOOL)hasDescriptionText;
@end

