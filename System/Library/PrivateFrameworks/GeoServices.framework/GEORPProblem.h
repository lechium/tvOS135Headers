/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORPProblemContext, GEORPProblemCorrections;

@interface GEORPProblem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE1* _userPaths;
	GEORPProblemContext* _problemContext;
	GEORPProblemCorrections* _problemCorrections;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _problemType;
	unsigned _protocolVersion;
	struct {
		unsigned has_problemType : 1;
		unsigned has_protocolVersion : 1;
		unsigned read_userPaths : 1;
		unsigned read_problemContext : 1;
		unsigned read_problemCorrections : 1;
		unsigned wrote_userPaths : 1;
		unsigned wrote_problemContext : 1;
		unsigned wrote_problemCorrections : 1;
		unsigned wrote_problemType : 1;
		unsigned wrote_protocolVersion : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion; 
@property (nonatomic,readonly) unsigned long long userPathsCount; 
@property (nonatomic,readonly) int* userPaths; 
@property (assign,nonatomic) BOOL hasProblemType; 
@property (assign,nonatomic) int problemType; 
@property (nonatomic,readonly) BOOL hasProblemCorrections; 
@property (nonatomic,retain) GEORPProblemCorrections * problemCorrections; 
@property (nonatomic,readonly) BOOL hasProblemContext; 
@property (nonatomic,retain) GEORPProblemContext * problemContext; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)problemType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtocolVersion;
-(unsigned)protocolVersion;
-(void)readAll:(BOOL)arg1 ;
-(void)_readUserPaths;
-(void)_addNoFlagsUserPath:(int)arg1 ;
-(void)_readProblemCorrections;
-(void)_readProblemContext;
-(GEORPProblemCorrections *)problemCorrections;
-(GEORPProblemContext *)problemContext;
-(unsigned long long)userPathsCount;
-(void)clearUserPaths;
-(int)userPathAtIndex:(unsigned long long)arg1 ;
-(void)addUserPath:(int)arg1 ;
-(void)setProblemCorrections:(GEORPProblemCorrections *)arg1 ;
-(void)setProblemContext:(GEORPProblemContext *)arg1 ;
-(int*)userPaths;
-(void)setUserPaths:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)userPathsAsString:(int)arg1 ;
-(int)StringAsUserPaths:(id)arg1 ;
-(void)setProblemType:(int)arg1 ;
-(void)setHasProblemType:(BOOL)arg1 ;
-(BOOL)hasProblemType;
-(id)problemTypeAsString:(int)arg1 ;
-(int)StringAsProblemType:(id)arg1 ;
-(BOOL)hasProblemCorrections;
-(BOOL)hasProblemContext;
-(id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(unsigned long long)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(SCD_Struct_GE32)arg10 ;
@end

