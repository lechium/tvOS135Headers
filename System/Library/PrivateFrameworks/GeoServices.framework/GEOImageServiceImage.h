/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData;

@interface GEOImageServiceImage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSData* _imageId;
	NSData* _image;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_imageId : 1;
		unsigned read_image : 1;
		unsigned wrote_imageId : 1;
		unsigned wrote_image : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasImageId; 
@property (nonatomic,retain) NSData * imageId; 
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) NSData * image; 
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
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(NSData *)imageId;
-(void)setImageId:(NSData *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readImageId;
-(BOOL)hasImageId;
-(BOOL)hasImage;
-(void)_readImage;
@end

