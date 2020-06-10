/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLPLocation, CLPCellNeighborsGroup, NSMutableArray;

@interface CLPCdmaCellTowerLocation : PBCodable <NSCopying> {

	SCD_Struct_CL5* _derivedMccs;
	double _bsLatitude;
	double _bsLongitude;
	double _sectorLatitude;
	double _sectorLongitude;
	NSString* _appBundleId;
	int _bandclass;
	int _bsid;
	int _celltype;
	int _channel;
	int _dayLightSavings;
	int _ecn0;
	CLPLocation* _location;
	int _ltmOffset;
	int _mcc;
	int _mnc;
	CLPCellNeighborsGroup* _neighborGroup;
	NSMutableArray* _neighbors;
	int _nid;
	NSString* _operatorName;
	int _pnoffset;
	int _rat;
	int _rscp;
	NSString* _sectorid;
	int _serverHash;
	NSString* _serviceProviderName;
	int _sid;
	int _zoneid;
	BOOL _isLimitedService;
	SCD_Struct_CL6 _has;

}

@property (assign,nonatomic) int mcc;                                            //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                                            //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int sid;                                            //@synthesize sid=_sid - In the implementation block
@property (assign,nonatomic) int nid;                                            //@synthesize nid=_nid - In the implementation block
@property (assign,nonatomic) int bsid;                                           //@synthesize bsid=_bsid - In the implementation block
@property (assign,nonatomic) BOOL hasBsLatitude; 
@property (assign,nonatomic) double bsLatitude;                                  //@synthesize bsLatitude=_bsLatitude - In the implementation block
@property (assign,nonatomic) BOOL hasBsLongitude; 
@property (assign,nonatomic) double bsLongitude;                                 //@synthesize bsLongitude=_bsLongitude - In the implementation block
@property (assign,nonatomic) BOOL hasZoneid; 
@property (assign,nonatomic) int zoneid;                                         //@synthesize zoneid=_zoneid - In the implementation block
@property (nonatomic,readonly) BOOL hasSectorid; 
@property (nonatomic,retain) NSString * sectorid;                                //@synthesize sectorid=_sectorid - In the implementation block
@property (assign,nonatomic) BOOL hasSectorLatitude; 
@property (assign,nonatomic) double sectorLatitude;                              //@synthesize sectorLatitude=_sectorLatitude - In the implementation block
@property (assign,nonatomic) BOOL hasSectorLongitude; 
@property (assign,nonatomic) double sectorLongitude;                             //@synthesize sectorLongitude=_sectorLongitude - In the implementation block
@property (assign,nonatomic) BOOL hasBandclass; 
@property (assign,nonatomic) int bandclass;                                      //@synthesize bandclass=_bandclass - In the implementation block
@property (assign,nonatomic) BOOL hasRat; 
@property (assign,nonatomic) int rat;                                            //@synthesize rat=_rat - In the implementation block
@property (assign,nonatomic) BOOL hasCelltype; 
@property (assign,nonatomic) int celltype;                                       //@synthesize celltype=_celltype - In the implementation block
@property (assign,nonatomic) BOOL hasPnoffset; 
@property (assign,nonatomic) int pnoffset;                                       //@synthesize pnoffset=_pnoffset - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel;                                        //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) CLPLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                             //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                     //@synthesize serverHash=_serverHash - In the implementation block
@property (nonatomic,readonly) BOOL hasOperatorName; 
@property (nonatomic,retain) NSString * operatorName;                            //@synthesize operatorName=_operatorName - In the implementation block
@property (assign,nonatomic) BOOL hasLtmOffset; 
@property (assign,nonatomic) int ltmOffset;                                      //@synthesize ltmOffset=_ltmOffset - In the implementation block
@property (assign,nonatomic) BOOL hasDayLightSavings; 
@property (assign,nonatomic) int dayLightSavings;                                //@synthesize dayLightSavings=_dayLightSavings - In the implementation block
@property (nonatomic,readonly) unsigned long long derivedMccsCount; 
@property (nonatomic,readonly) int* derivedMccs; 
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                                           //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                                           //@synthesize rscp=_rscp - In the implementation block
@property (nonatomic,retain) NSMutableArray * neighbors;                         //@synthesize neighbors=_neighbors - In the implementation block
@property (nonatomic,readonly) BOOL hasNeighborGroup; 
@property (nonatomic,retain) CLPCellNeighborsGroup * neighborGroup;              //@synthesize neighborGroup=_neighborGroup - In the implementation block
@property (assign,nonatomic) BOOL hasIsLimitedService; 
@property (assign,nonatomic) BOOL isLimitedService;                              //@synthesize isLimitedService=_isLimitedService - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceProviderName; 
@property (nonatomic,retain) NSString * serviceProviderName;                     //@synthesize serviceProviderName=_serviceProviderName - In the implementation block
+(Class)neighborType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(int)channel;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)rat;
-(void)setRat:(int)arg1 ;
-(int)rscp;
-(int)ecn0;
-(void)setRscp:(int)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setChannel:(int)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(CLPLocation *)location;
-(void)setLocation:(CLPLocation *)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(NSString *)appBundleId;
-(int)serverHash;
-(void)setPnoffset:(int)arg1 ;
-(void)setHasPnoffset:(BOOL)arg1 ;
-(BOOL)hasPnoffset;
-(void)setHasEcn0:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setHasRscp:(BOOL)arg1 ;
-(BOOL)hasRscp;
-(int)pnoffset;
-(void)addNeighbor:(id)arg1 ;
-(void)setSectorid:(NSString *)arg1 ;
-(void)setOperatorName:(NSString *)arg1 ;
-(unsigned long long)derivedMccsCount;
-(void)clearDerivedMccs;
-(int)derivedMccAtIndex:(unsigned long long)arg1 ;
-(void)addDerivedMcc:(int)arg1 ;
-(unsigned long long)neighborsCount;
-(void)clearNeighbors;
-(id)neighborAtIndex:(unsigned long long)arg1 ;
-(void)setNeighborGroup:(CLPCellNeighborsGroup *)arg1 ;
-(void)setServiceProviderName:(NSString *)arg1 ;
-(void)setBsLatitude:(double)arg1 ;
-(void)setHasBsLatitude:(BOOL)arg1 ;
-(BOOL)hasBsLatitude;
-(void)setBsLongitude:(double)arg1 ;
-(void)setHasBsLongitude:(BOOL)arg1 ;
-(BOOL)hasBsLongitude;
-(void)setZoneid:(int)arg1 ;
-(void)setHasZoneid:(BOOL)arg1 ;
-(BOOL)hasZoneid;
-(BOOL)hasSectorid;
-(void)setSectorLatitude:(double)arg1 ;
-(void)setHasSectorLatitude:(BOOL)arg1 ;
-(BOOL)hasSectorLatitude;
-(void)setSectorLongitude:(double)arg1 ;
-(void)setHasSectorLongitude:(BOOL)arg1 ;
-(BOOL)hasSectorLongitude;
-(void)setBandclass:(int)arg1 ;
-(void)setHasBandclass:(BOOL)arg1 ;
-(BOOL)hasBandclass;
-(void)setHasRat:(BOOL)arg1 ;
-(BOOL)hasRat;
-(void)setCelltype:(int)arg1 ;
-(void)setHasCelltype:(BOOL)arg1 ;
-(BOOL)hasCelltype;
-(BOOL)hasAppBundleId;
-(BOOL)hasOperatorName;
-(void)setLtmOffset:(int)arg1 ;
-(void)setHasLtmOffset:(BOOL)arg1 ;
-(BOOL)hasLtmOffset;
-(void)setDayLightSavings:(int)arg1 ;
-(void)setHasDayLightSavings:(BOOL)arg1 ;
-(BOOL)hasDayLightSavings;
-(int*)derivedMccs;
-(void)setDerivedMccs:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasNeighborGroup;
-(void)setIsLimitedService:(BOOL)arg1 ;
-(void)setHasIsLimitedService:(BOOL)arg1 ;
-(BOOL)hasIsLimitedService;
-(BOOL)hasServiceProviderName;
-(int)mcc;
-(void)setMcc:(int)arg1 ;
-(int)mnc;
-(void)setMnc:(int)arg1 ;
-(int)sid;
-(void)setSid:(int)arg1 ;
-(int)nid;
-(void)setNid:(int)arg1 ;
-(int)bsid;
-(void)setBsid:(int)arg1 ;
-(double)bsLatitude;
-(double)bsLongitude;
-(int)zoneid;
-(NSString *)sectorid;
-(double)sectorLatitude;
-(double)sectorLongitude;
-(int)bandclass;
-(int)celltype;
-(NSString *)operatorName;
-(int)ltmOffset;
-(int)dayLightSavings;
-(NSMutableArray *)neighbors;
-(void)setNeighbors:(NSMutableArray *)arg1 ;
-(CLPCellNeighborsGroup *)neighborGroup;
-(BOOL)isLimitedService;
-(NSString *)serviceProviderName;
@end

