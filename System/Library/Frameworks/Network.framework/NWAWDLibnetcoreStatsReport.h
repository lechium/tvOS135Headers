/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAWDLibnetcoreMbufStatsReport, NWAWDLibnetcoreMPTCPStatsReport, NWAWDLibnetcoreNetworkdStatsReport, NWAWDNWAPIUsage, NSMutableArray, NWAWDLibnetcoreTCPECNStatsReport, NWAWDLibnetcoreTCPStatsReport, NWAWDLibnetcoreTCPTFOStatsReport;

@interface NWAWDLibnetcoreStatsReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NWAWDLibnetcoreMbufStatsReport* _mbufStatisticsReport;
	NWAWDLibnetcoreMPTCPStatsReport* _mptcpStatisticsReport;
	NWAWDLibnetcoreNetworkdStatsReport* _networkdStatisticsReport;
	NWAWDNWAPIUsage* _nwAPIUsageReport;
	unsigned _reportReason;
	NSMutableArray* _tcpECNInterfaceReports;
	NWAWDLibnetcoreTCPECNStatsReport* _tcpECNStatisticsReport;
	NWAWDLibnetcoreTCPStatsReport* _tcpStatisticsReport;
	NWAWDLibnetcoreTCPTFOStatsReport* _tcpTFOStatisticsReport;
	SCD_Struct_NW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReportReason; 
@property (assign,nonatomic) unsigned reportReason;                                                      //@synthesize reportReason=_reportReason - In the implementation block
@property (nonatomic,readonly) BOOL hasMbufStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreMbufStatsReport * mbufStatisticsReport;                      //@synthesize mbufStatisticsReport=_mbufStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPStatsReport * tcpStatisticsReport;                        //@synthesize tcpStatisticsReport=_tcpStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpECNStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPECNStatsReport * tcpECNStatisticsReport;                  //@synthesize tcpECNStatisticsReport=_tcpECNStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpTFOStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPTFOStatsReport * tcpTFOStatisticsReport;                  //@synthesize tcpTFOStatisticsReport=_tcpTFOStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkdStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreNetworkdStatsReport * networkdStatisticsReport;              //@synthesize networkdStatisticsReport=_networkdStatisticsReport - In the implementation block
@property (nonatomic,retain) NSMutableArray * tcpECNInterfaceReports;                                    //@synthesize tcpECNInterfaceReports=_tcpECNInterfaceReports - In the implementation block
@property (nonatomic,readonly) BOOL hasNwAPIUsageReport; 
@property (nonatomic,retain) NWAWDNWAPIUsage * nwAPIUsageReport;                                         //@synthesize nwAPIUsageReport=_nwAPIUsageReport - In the implementation block
@property (nonatomic,readonly) BOOL hasMptcpStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreMPTCPStatsReport * mptcpStatisticsReport;                    //@synthesize mptcpStatisticsReport=_mptcpStatisticsReport - In the implementation block
+(Class)tcpECNInterfaceReportType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setMbufStatisticsReport:(NWAWDLibnetcoreMbufStatsReport *)arg1 ;
-(void)setTcpStatisticsReport:(NWAWDLibnetcoreTCPStatsReport *)arg1 ;
-(void)setTcpECNStatisticsReport:(NWAWDLibnetcoreTCPECNStatsReport *)arg1 ;
-(void)setTcpTFOStatisticsReport:(NWAWDLibnetcoreTCPTFOStatsReport *)arg1 ;
-(void)setNetworkdStatisticsReport:(NWAWDLibnetcoreNetworkdStatsReport *)arg1 ;
-(void)setTcpECNInterfaceReports:(NSMutableArray *)arg1 ;
-(void)setNwAPIUsageReport:(NWAWDNWAPIUsage *)arg1 ;
-(void)setMptcpStatisticsReport:(NWAWDLibnetcoreMPTCPStatsReport *)arg1 ;
-(void)addTcpECNInterfaceReport:(id)arg1 ;
-(unsigned long long)tcpECNInterfaceReportsCount;
-(void)clearTcpECNInterfaceReports;
-(id)tcpECNInterfaceReportAtIndex:(unsigned long long)arg1 ;
-(void)setReportReason:(unsigned)arg1 ;
-(void)setHasReportReason:(BOOL)arg1 ;
-(BOOL)hasReportReason;
-(BOOL)hasMbufStatisticsReport;
-(BOOL)hasTcpStatisticsReport;
-(BOOL)hasTcpECNStatisticsReport;
-(BOOL)hasTcpTFOStatisticsReport;
-(BOOL)hasNetworkdStatisticsReport;
-(BOOL)hasNwAPIUsageReport;
-(BOOL)hasMptcpStatisticsReport;
-(unsigned)reportReason;
-(NWAWDLibnetcoreMbufStatsReport *)mbufStatisticsReport;
-(NWAWDLibnetcoreTCPStatsReport *)tcpStatisticsReport;
-(NWAWDLibnetcoreTCPECNStatsReport *)tcpECNStatisticsReport;
-(NWAWDLibnetcoreTCPTFOStatsReport *)tcpTFOStatisticsReport;
-(NWAWDLibnetcoreNetworkdStatsReport *)networkdStatisticsReport;
-(NSMutableArray *)tcpECNInterfaceReports;
-(NWAWDNWAPIUsage *)nwAPIUsageReport;
-(NWAWDLibnetcoreMPTCPStatsReport *)mptcpStatisticsReport;
@end

