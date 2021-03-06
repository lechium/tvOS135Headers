/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOStyleAttributes, NSString;

@interface GEOWalletCategoryMapping : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOStyleAttributes* _stylesAttributes;
	NSString* _walletCategory;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_stylesAttributes : 1;
		unsigned read_walletCategory : 1;
		unsigned wrote_stylesAttributes : 1;
		unsigned wrote_walletCategory : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasWalletCategory; 
@property (nonatomic,retain) NSString * walletCategory; 
@property (nonatomic,readonly) BOOL hasStylesAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * stylesAttributes; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)_readWalletCategory;
-(void)_readStylesAttributes;
-(NSString *)walletCategory;
-(GEOStyleAttributes *)stylesAttributes;
-(void)setWalletCategory:(NSString *)arg1 ;
-(void)setStylesAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasWalletCategory;
-(BOOL)hasStylesAttributes;
@end

