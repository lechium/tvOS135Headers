/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOImageServiceResponse : PBCodable <NSCopying> {

	NSMutableArray* _images;
	unsigned _height;
	int _status;
	unsigned _width;
	SCD_Struct_GE84 _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width; 
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height; 
@property (nonatomic,retain) NSMutableArray * images; 
+(BOOL)isValid:(id)arg1 ;
+(Class)imagesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)status;
-(unsigned)width;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(NSMutableArray *)images;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(void)addImages:(id)arg1 ;
-(unsigned long long)imagesCount;
-(void)clearImages;
-(id)imagesAtIndex:(unsigned long long)arg1 ;
-(void)setImages:(NSMutableArray *)arg1 ;
@end

