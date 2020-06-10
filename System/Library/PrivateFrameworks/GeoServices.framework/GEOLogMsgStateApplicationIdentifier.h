/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _appDarkMode;
	struct {
		unsigned has_appDarkMode : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_appMajorVersion : 1;
		unsigned read_appMinorVersion : 1;
		unsigned wrote_appIdentifier : 1;
		unsigned wrote_appMajorVersion : 1;
		unsigned wrote_appMinorVersion : 1;
		unsigned wrote_appDarkMode : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion; 
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion; 
@property (assign,nonatomic) BOOL hasAppDarkMode; 
@property (assign,nonatomic) BOOL appDarkMode; 
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
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(void)_readAppMajorVersion;
-(void)_readAppMinorVersion;
-(NSString *)appMajorVersion;
-(NSString *)appMinorVersion;
-(BOOL)hasAppMajorVersion;
-(BOOL)hasAppMinorVersion;
-(void)_readAppIdentifier;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(BOOL)appDarkMode;
-(void)setAppDarkMode:(BOOL)arg1 ;
-(void)setHasAppDarkMode:(BOOL)arg1 ;
-(BOOL)hasAppDarkMode;
@end

