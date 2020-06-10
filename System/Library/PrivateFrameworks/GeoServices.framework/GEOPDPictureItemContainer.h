/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDPictureItemContainer : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _pictureItems;
	BOOL _allowFullScreenPhoto;
	SCD_Struct_GE93 _flags;

}

@property (nonatomic,retain) NSMutableArray * pictureItems; 
@property (assign,nonatomic) BOOL hasAllowFullScreenPhoto; 
@property (assign,nonatomic) BOOL allowFullScreenPhoto; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)pictureItemType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;
-(void)addPictureItem:(id)arg1 ;
-(unsigned long long)pictureItemsCount;
-(void)clearPictureItems;
-(id)pictureItemAtIndex:(unsigned long long)arg1 ;
-(void)setPictureItems:(NSMutableArray *)arg1 ;
-(void)setAllowFullScreenPhoto:(BOOL)arg1 ;
-(void)setHasAllowFullScreenPhoto:(BOOL)arg1 ;
-(BOOL)hasAllowFullScreenPhoto;
@end
