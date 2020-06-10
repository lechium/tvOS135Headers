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

@class PBDataReader, NSString;

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _hardwareIdentifier;
	NSString* _osBuild;
	NSString* _osVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_hardwareIdentifier : 1;
		unsigned read_osBuild : 1;
		unsigned read_osVersion : 1;
		unsigned wrote_hardwareIdentifier : 1;
		unsigned wrote_osBuild : 1;
		unsigned wrote_osVersion : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasHardwareIdentifier; 
@property (nonatomic,retain) NSString * hardwareIdentifier; 
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion; 
@property (nonatomic,readonly) BOOL hasOsBuild; 
@property (nonatomic,retain) NSString * osBuild; 
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
-(NSString *)hardwareIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readHardwareIdentifier;
-(void)_readOsVersion;
-(void)_readOsBuild;
-(NSString *)osVersion;
-(NSString *)osBuild;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(BOOL)hasHardwareIdentifier;
-(BOOL)hasOsVersion;
-(BOOL)hasOsBuild;
@end

