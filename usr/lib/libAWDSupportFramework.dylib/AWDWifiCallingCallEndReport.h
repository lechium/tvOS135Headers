/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWifiCallingCallEndReport : PBCodable <NSCopying> {

	SCD_Struct_AW21* _frameErasureRateHistograms;
	SCD_Struct_AW21* _jitterBufferResidencyTimeHistograms;
	SCD_Struct_AW21* _jitterBufferUnderflowRateHistograms;
	SCD_Struct_AW21* _rtpPacketLossRateHistograms;
	unsigned long long _timestamp;
	NSString* _callID;
	unsigned _frameErasureRateMean;
	unsigned _jitterBufferResidencyTime95Percentile;
	unsigned _jitterBufferResidencyTimeMean;
	unsigned _jitterBufferResidencyTimeMedian;
	unsigned _jitterBufferUnderflowRateMean;
	unsigned _rtpPacketLossRateMean;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasCallID; 
@property (nonatomic,retain) NSString * callID;                                                          //@synthesize callID=_callID - In the implementation block
@property (nonatomic,readonly) unsigned long long rtpPacketLossRateHistogramsCount; 
@property (nonatomic,readonly) unsigned* rtpPacketLossRateHistograms; 
@property (nonatomic,readonly) unsigned long long jitterBufferUnderflowRateHistogramsCount; 
@property (nonatomic,readonly) unsigned* jitterBufferUnderflowRateHistograms; 
@property (nonatomic,readonly) unsigned long long frameErasureRateHistogramsCount; 
@property (nonatomic,readonly) unsigned* frameErasureRateHistograms; 
@property (nonatomic,readonly) unsigned long long jitterBufferResidencyTimeHistogramsCount; 
@property (nonatomic,readonly) unsigned* jitterBufferResidencyTimeHistograms; 
@property (assign,nonatomic) BOOL hasRtpPacketLossRateMean; 
@property (assign,nonatomic) unsigned rtpPacketLossRateMean;                                             //@synthesize rtpPacketLossRateMean=_rtpPacketLossRateMean - In the implementation block
@property (assign,nonatomic) BOOL hasJitterBufferUnderflowRateMean; 
@property (assign,nonatomic) unsigned jitterBufferUnderflowRateMean;                                     //@synthesize jitterBufferUnderflowRateMean=_jitterBufferUnderflowRateMean - In the implementation block
@property (assign,nonatomic) BOOL hasFrameErasureRateMean; 
@property (assign,nonatomic) unsigned frameErasureRateMean;                                              //@synthesize frameErasureRateMean=_frameErasureRateMean - In the implementation block
@property (assign,nonatomic) BOOL hasJitterBufferResidencyTimeMean; 
@property (assign,nonatomic) unsigned jitterBufferResidencyTimeMean;                                     //@synthesize jitterBufferResidencyTimeMean=_jitterBufferResidencyTimeMean - In the implementation block
@property (assign,nonatomic) BOOL hasJitterBufferResidencyTimeMedian; 
@property (assign,nonatomic) unsigned jitterBufferResidencyTimeMedian;                                   //@synthesize jitterBufferResidencyTimeMedian=_jitterBufferResidencyTimeMedian - In the implementation block
@property (assign,nonatomic) BOOL hasJitterBufferResidencyTime95Percentile; 
@property (assign,nonatomic) unsigned jitterBufferResidencyTime95Percentile;                             //@synthesize jitterBufferResidencyTime95Percentile=_jitterBufferResidencyTime95Percentile - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)callID;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setCallID:(NSString *)arg1 ;
-(unsigned long long)rtpPacketLossRateHistogramsCount;
-(void)clearRtpPacketLossRateHistograms;
-(unsigned)rtpPacketLossRateHistogramAtIndex:(unsigned long long)arg1 ;
-(void)addRtpPacketLossRateHistogram:(unsigned)arg1 ;
-(unsigned long long)jitterBufferUnderflowRateHistogramsCount;
-(void)clearJitterBufferUnderflowRateHistograms;
-(unsigned)jitterBufferUnderflowRateHistogramAtIndex:(unsigned long long)arg1 ;
-(void)addJitterBufferUnderflowRateHistogram:(unsigned)arg1 ;
-(unsigned long long)frameErasureRateHistogramsCount;
-(void)clearFrameErasureRateHistograms;
-(unsigned)frameErasureRateHistogramAtIndex:(unsigned long long)arg1 ;
-(void)addFrameErasureRateHistogram:(unsigned)arg1 ;
-(unsigned long long)jitterBufferResidencyTimeHistogramsCount;
-(void)clearJitterBufferResidencyTimeHistograms;
-(unsigned)jitterBufferResidencyTimeHistogramAtIndex:(unsigned long long)arg1 ;
-(void)addJitterBufferResidencyTimeHistogram:(unsigned)arg1 ;
-(BOOL)hasCallID;
-(unsigned*)rtpPacketLossRateHistograms;
-(void)setRtpPacketLossRateHistograms:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)jitterBufferUnderflowRateHistograms;
-(void)setJitterBufferUnderflowRateHistograms:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)frameErasureRateHistograms;
-(void)setFrameErasureRateHistograms:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)jitterBufferResidencyTimeHistograms;
-(void)setJitterBufferResidencyTimeHistograms:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setRtpPacketLossRateMean:(unsigned)arg1 ;
-(void)setHasRtpPacketLossRateMean:(BOOL)arg1 ;
-(BOOL)hasRtpPacketLossRateMean;
-(void)setJitterBufferUnderflowRateMean:(unsigned)arg1 ;
-(void)setHasJitterBufferUnderflowRateMean:(BOOL)arg1 ;
-(BOOL)hasJitterBufferUnderflowRateMean;
-(void)setFrameErasureRateMean:(unsigned)arg1 ;
-(void)setHasFrameErasureRateMean:(BOOL)arg1 ;
-(BOOL)hasFrameErasureRateMean;
-(void)setJitterBufferResidencyTimeMean:(unsigned)arg1 ;
-(void)setHasJitterBufferResidencyTimeMean:(BOOL)arg1 ;
-(BOOL)hasJitterBufferResidencyTimeMean;
-(void)setJitterBufferResidencyTimeMedian:(unsigned)arg1 ;
-(void)setHasJitterBufferResidencyTimeMedian:(BOOL)arg1 ;
-(BOOL)hasJitterBufferResidencyTimeMedian;
-(void)setJitterBufferResidencyTime95Percentile:(unsigned)arg1 ;
-(void)setHasJitterBufferResidencyTime95Percentile:(BOOL)arg1 ;
-(BOOL)hasJitterBufferResidencyTime95Percentile;
-(unsigned)rtpPacketLossRateMean;
-(unsigned)jitterBufferUnderflowRateMean;
-(unsigned)frameErasureRateMean;
-(unsigned)jitterBufferResidencyTimeMean;
-(unsigned)jitterBufferResidencyTimeMedian;
-(unsigned)jitterBufferResidencyTime95Percentile;
@end
