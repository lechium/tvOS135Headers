/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLPLocation, CLPCellNeighborsGroup, NSMutableArray;

@interface CLPLteCellTowerLocation : PBCodable <NSCopying> {

	double _cellLatitude;
	double _cellLongitude;
	NSString* _appBundleId;
	int _bandInfo;
	int _bandwidth;
	int _ci;
	int _ecn0;
	CLPLocation* _location;
	int _mcc;
	int _mnc;
	CLPCellNeighborsGroup* _neighborGroup;
	NSMutableArray* _neighbors;
	NSString* _operatorName;
	int _pid;
	int _rscp;
	int _rssi;
	int _serverHash;
	NSString* _serviceProviderName;
	int _tac;
	int _uarfcn;
	BOOL _isLimitedService;
	SCD_Struct_CL11 _has;

}

@property (assign,nonatomic) int mcc;                                            //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                                            //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int tac;                                            //@synthesize tac=_tac - In the implementation block
@property (assign,nonatomic) int ci;                                             //@synthesize ci=_ci - In the implementation block
@property (assign,nonatomic) BOOL hasUarfcn; 
@property (assign,nonatomic) int uarfcn;                                         //@synthesize uarfcn=_uarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) int pid;                                            //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL hasBandInfo; 
@property (assign,nonatomic) int bandInfo;                                       //@synthesize bandInfo=_bandInfo - In the implementation block
@property (nonatomic,retain) CLPLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                             //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasOperatorName; 
@property (nonatomic,retain) NSString * operatorName;                            //@synthesize operatorName=_operatorName - In the implementation block
@property (assign,nonatomic) BOOL hasCellLatitude; 
@property (assign,nonatomic) double cellLatitude;                                //@synthesize cellLatitude=_cellLatitude - In the implementation block
@property (assign,nonatomic) BOOL hasCellLongitude; 
@property (assign,nonatomic) double cellLongitude;                               //@synthesize cellLongitude=_cellLongitude - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                     //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                                           //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                                           //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                           //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,retain) NSMutableArray * neighbors;                         //@synthesize neighbors=_neighbors - In the implementation block
@property (nonatomic,readonly) BOOL hasNeighborGroup; 
@property (nonatomic,retain) CLPCellNeighborsGroup * neighborGroup;              //@synthesize neighborGroup=_neighborGroup - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidth; 
@property (assign,nonatomic) int bandwidth;                                      //@synthesize bandwidth=_bandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasIsLimitedService; 
@property (assign,nonatomic) BOOL isLimitedService;                              //@synthesize isLimitedService=_isLimitedService - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceProviderName; 
@property (nonatomic,retain) NSString * serviceProviderName;                     //@synthesize serviceProviderName=_serviceProviderName - In the implementation block
+(Class)neighborType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)rssi;
-(int)rscp;
-(int)ecn0;
-(void)setRssi:(int)arg1 ;
-(void)setRscp:(int)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBandwidth:(int)arg1 ;
-(void)setHasBandwidth:(BOOL)arg1 ;
-(BOOL)hasBandwidth;
-(int)bandwidth;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setHasPid:(BOOL)arg1 ;
-(BOOL)hasPid;
-(CLPLocation *)location;
-(void)setLocation:(CLPLocation *)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(NSString *)appBundleId;
-(int)serverHash;
-(void)setHasEcn0:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setHasRscp:(BOOL)arg1 ;
-(BOOL)hasRscp;
-(void)addNeighbor:(id)arg1 ;
-(void)setOperatorName:(NSString *)arg1 ;
-(unsigned long long)neighborsCount;
-(void)clearNeighbors;
-(id)neighborAtIndex:(unsigned long long)arg1 ;
-(void)setNeighborGroup:(CLPCellNeighborsGroup *)arg1 ;
-(void)setServiceProviderName:(NSString *)arg1 ;
-(BOOL)hasAppBundleId;
-(BOOL)hasOperatorName;
-(BOOL)hasNeighborGroup;
-(void)setIsLimitedService:(BOOL)arg1 ;
-(void)setHasIsLimitedService:(BOOL)arg1 ;
-(BOOL)hasIsLimitedService;
-(BOOL)hasServiceProviderName;
-(int)mcc;
-(void)setMcc:(int)arg1 ;
-(int)mnc;
-(void)setMnc:(int)arg1 ;
-(NSString *)operatorName;
-(NSMutableArray *)neighbors;
-(void)setNeighbors:(NSMutableArray *)arg1 ;
-(CLPCellNeighborsGroup *)neighborGroup;
-(BOOL)isLimitedService;
-(NSString *)serviceProviderName;
-(void)setUarfcn:(int)arg1 ;
-(void)setHasUarfcn:(BOOL)arg1 ;
-(BOOL)hasUarfcn;
-(int)uarfcn;
-(int)ci;
-(void)setCi:(int)arg1 ;
-(void)setBandInfo:(int)arg1 ;
-(void)setHasBandInfo:(BOOL)arg1 ;
-(BOOL)hasBandInfo;
-(void)setCellLatitude:(double)arg1 ;
-(void)setHasCellLatitude:(BOOL)arg1 ;
-(BOOL)hasCellLatitude;
-(void)setCellLongitude:(double)arg1 ;
-(void)setHasCellLongitude:(BOOL)arg1 ;
-(BOOL)hasCellLongitude;
-(int)tac;
-(void)setTac:(int)arg1 ;
-(int)bandInfo;
-(double)cellLatitude;
-(double)cellLongitude;
@end

